<?php

/* Change text on button of Search */
function ecogig_neat_form_alter (&$form, &$form_state, $form_id) {
  $is_data_manager = user_access('override dataset edit');

  if ($form_id=='search_block_form') {
    $form['search_block_form']['#attributes']['placeholder'] = 'Search this site';
    $form['actions']['submit']['#value'] = t('Go');
  }
  if ($form_id=='search_form') {
    $form['search_form']['#attributes']['placeholder'] = 'Search this site';
    $form['actions']['submit']['#value'] = t('Go');
  }

  if($form_id == 'dataset_node_form'){
    // Hide the various workflow fields from non-data managers
    if(!$is_data_manager){
      unset($form['#groups']['group_workflow_state']);
      unset($form['#fieldgroups']['group_workflow_state']);

      foreach($form as $key => $field){
        $is_state_field = (($temp = strlen($key) - strlen('_state')) >= 0 && strpos($key, '_state', $temp) !== FALSE);
        if($is_state_field){
          $form[$key]['#access'] = FALSE;
        }
      }
    }


  }

  if(!empty($form['field_ecogig_contribution_number'])){

    $node = !empty($form['#node']) ? $form['#node'] : NULL;

    if(!$is_data_manager && empty($form['nid']['#value'])){
      $form['field_ecogig_contribution_number'][LANGUAGE_NONE]['#access'] = FALSE;
    }
    if(!empty($node) && property_exists($node, 'field_ecogig_contribution_number')){
      drupal_add_js(
        array(
          'ecogig_neat' => array(
            'currentNid' => $node->nid,
          )
        ),
        'setting'
      );

      $contribution_number = !empty($node->field_ecogig_contribution_number) ? $node->field_ecogig_contribution_number[LANGUAGE_NONE][0]['value'] : NULL;
      $field_con_number = !empty($form['field_ecogig_contribution_number'][LANGUAGE_NONE]) ? $form['field_ecogig_contribution_number'][LANGUAGE_NONE] : array();
      $field_title = !empty($field_con_number['#title']) ? $field_con_number['#title'] : 'Contribution Number';

      if(empty($contribution_number)){
        if($is_data_manager){
          //$field_con_number['#prefix'] = '<span id="pnl-contribution-number-form">';
          //$field_con_number['#suffix'] = '<button class="btn btn-create" id="btn-generate-contribution">Generate Number</button>' .
            //'</span>';
        }
        else{
          //$field_con_number = array(
            //'#prefix' => '<span id="pnl-contribution-number">',
            //'#markup' => '<button class="btn btn-create" id="btn-request-contribution">Request Number</button>',
            //'#suffix' => '</span>',
          //);

          //$field_con_number['#prefix'] = '<span id="pnl-contribution-number-form">';
          //$field_con_number['#suffix'] = '<button class="btn btn-create" id="btn-request-contribution">Request Number</button>' .
            //'</span>';
          //$field_con_number['#disabled'] = TRUE;
        }

      }
      else{
        // Use -1 as an indicator that a user has requested a number
        if($contribution_number < 0){
          $field_con_number = array(
            '#prefix' => '<label>' . $field_title . '</label>',
            '#markup' => '<span id="pnl-contribution-number">Number requested</span>',
          );

          if($is_data_manager){
            $field_con_number = array(
              '#prefix' => '<label>' . $field_title . '</label>',
              '#suffix' => '<span id="pnl-contribution-number">' .
                '<button class="btn btn-create" id="btn-generate-contribution">Requested - Generate Number</button>' .
                '<button class="btn btn-delete" id="btn-deny-contribution">Deny Request</button>' .
                '</span>',
            );
          }
        }
        else{
          if(!$is_data_manager){
            $field_con_number['#disabled'] = TRUE;

          }
        }
      }

      $form['field_ecogig_contribution_number'][LANGUAGE_NONE] = $field_con_number;
    }
  }
}

/* theme breadcrumb */
function ecogig_neat_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  //hide breadcrumb not just if it is empty, but also if it contains only one link
  if (!empty($breadcrumb) && (count($breadcrumb) != 1)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' &raquo; ', $breadcrumb) . '</div>';
    return $output;
  }
}


/* weird stuff from ecogig_og */
function ecogig_neat_image_formatter($vars) {
		  $item = $vars['item'];
		  $image = array(
		    'path' => $item['uri'],
		    'alt' => $item['alt'],
		  );

		  if (isset($item['attributes'])) {
		    $image['attributes'] = $item['attributes'];
		  }

		  if (isset($item['width']) && isset($item['height'])) {
		    $image['width'] = $item['width'];
		    $image['height'] = $item['height'];
		  }

		  // Do not output an empty 'title' attribute.
		  if (drupal_strlen($item['title']) > 0) {
		    //$image['title'] = $item['title'];
		  }

		  if ($vars['image_style']) {
		    $image['style_name'] = $vars['image_style'];
		    $output = theme('image_style', $image);
		  }
		  else {
		    $output = theme('image', $image);
		  }

		  if (!empty($vars['path']['path'])) {
		    $path = $vars['path']['path'];
		    $options = $vars['path']['options'];
		    if (drupal_strlen($item['title']) > 0) {
		    	$options['attributes']['title']=$item['title'];
		    }
		    // When displaying an image inside a link, the html option must be TRUE.
		    $options['html'] = TRUE;
		    $output = l($output, $path, $options);
		    $output = "<figure class='clearfix'>".$output;
		    if (drupal_strlen($item['title']) > 0) {
		    	$output .= "<figcaption>".$item['title']."</figcaption>";
		    }
		    $output .= "</figure>";
		  }

		  return $output;
	}

function ecogig_neat_views_pre_render(&$view) {
  $display_name = '';
  global $user;

  // Change "My References" view title to "<User>'s References" when viewed by other users
  if ($view->name =='my_references') {
    $uid = arg(2);
    if(!empty($uid)){
      $profile = profile2_load_by_user($uid, 'main');
      if(!empty($profile)){
      	$first_name = '';
      	$last_name = '';
      	if(!empty($profile->field_first_name['und'])){$first_name = $profile->field_first_name['und'][0]['value'];}
      	if(!empty($profile->field_last_name['und'])){$last_name = $profile->field_last_name['und'][0]['value'];}

      	if(!empty($first_name) && !empty($last_name) && $user->uid != $uid){
      	  $display_name = $first_name . ' ' . $last_name . "'s ";
      	}
      }
    }

    if(!empty($display_name)){
      $current_title = !empty($view->build_info['title']) ? $view->build_info['title'] : '';
      $title = str_replace('My', $display_name, $current_title);
      $view->build_info['title'] = $title;
    }
  }

  // Include Moment.js with Dataset Progress Report
  if($view->name == 'dataset_progress_report'){
    drupal_add_js(drupal_get_path('theme', 'ecogig_neat') .'/js/moment.min.js', 'file');
  }

}

function ecogig_neat_preprocess_page(&$variables){
  if(!empty($variables['node'])){
    $node = $variables['node'];
    if($node->type == 'dataset'){
      // Add UDI to Dataset node titles if present
      $udi = !empty($node->field_griidc_udi['und'][0]['value']) ? $node->field_griidc_udi['und'][0]['value'] : '';
      if(!empty($udi)){
        $variables['title'] = $udi . '<br/>' . $node->title;
      }

      // Change title for nodes cloned from templates
      if(!empty($variables['page']['content']['content']['content']['system_main']['#node']->clone_from_original_nid)){
        $variables['title'] = 'New Dataset from Template';
        drupal_set_breadcrumb(array());
      }
    }
  }
}

function ecogig_neat_preprocess_node(&$variables){
  $node = $variables['node'];
  if($node->type == 'dataset'){
    // Add latest workflow state and comment to node template if available
    $workflow = !empty($node->field_dataset_workflow['und'][0]['value']) ? $node->field_dataset_workflow['und'][0]['value'] : '';
    $workflow = workflow_node_current_state($node);
    if(!empty($workflow)){
      $state = ecogig_workflow_get_state_name($workflow);
      $comment = ecogig_workflow_get_latest_comment($node->nid);

      $variables['workflow_state'] = !empty($state) ? $state : '';
      $variables['workflow_comment'] = !empty($comment) ? $comment : '';
    }

    $record_type = !empty($node->field_record_type[LANGUAGE_NONE][0]['taxonomy_term']) ? $node->field_record_type[LANGUAGE_NONE][0]['taxonomy_term'] : '';
    if(!empty($record_type)){
        $icon_class = !empty($record_type->field_icon_class[LANGUAGE_NONE][0]['value']) ? $record_type->field_icon_class[LANGUAGE_NONE][0]['value'] : '';
        $type_name = $record_type->name;

        $variables['record_type_icon'] = $icon_class;
        $variables['record_type_name'] = $type_name;
        $variables['record_type_body'] = $record_type->description;;
        $variables['record_type_tid'] = $record_type->tid;
    }

    if(node_access('update', $node)){
      drupal_add_js(drupal_get_path('module', 'dataset_record_type') .'/js/dataset_record_type.js', 'file');
      $vocab = taxonomy_vocabulary_machine_name_load('dataset_record_types');
      $terms = taxonomy_get_tree($vocab->vid);
      $variables['record_type_options'] = $terms;
    }


  }

}

function ecogig_workflow_get_state_name($sid) {
  $results = db_query('SELECT state FROM {workflow_states} WHERE sid = :sid', array(':sid' => $sid));
  return $results->fetchField();
}

function ecogig_workflow_get_latest_comment($nid) {
  $results = db_query('SELECT comment FROM {workflow_node_history} h ' .
    'LEFT JOIN {users} u ON h.uid = u.uid ' .
    'WHERE nid = :nid ORDER BY h.hid DESC', array(':nid' => $nid));
    return $results->fetchField();
}


function ecogig_neat_file_link($variables) {
 $file = $variables['file'];
  $icon_directory = !empty($variables['icon_directory']) ? $variables['icon_directory'] : '';
  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));
  $options = array(
    'attributes' => array(
       'type' => $file->filemime . '; length=' . $file->filesize,
     ),
  );
  if (empty($file->description)) {
    $link_text = $file->filename;
  } else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  $timestamp = !empty($variables['timestamp']) ? $variables['timestamp'] : '';
  $timestamp_text = '';
  if(!empty($timestamp)){
        $timestamp_text = ' <em>(' . format_date($timestamp) . ')</em>';
  }

  $hash_text = '';

  if(!empty($file->filehash)){
    foreach($file->filehash as $algorithm=>$hash){
      if(!empty($hash)){
        $hash_text .= '<br/><small>' . $algorithm  . ': ' . $hash . '</small>';
      }
    }
  }

  return '<span class="file"' . $icon . ' ' . l($link_text, $url, $options) . $timestamp_text . $hash_text . '<span>';
}

// Fix for preserving line breaks on plaintext formatted fields
function ecogig_neat_preprocess_field(&$vars, $hook) {
  // Add line breaks to plain text textareas.
  if (
    // Make sure this is a text_long field type.
    $vars['element']['#field_type'] == 'text_long'
    && !empty($vars['element']['#items'][0]['format'])
    // Check that the field's format is set to null, which equates to plain_text.
    && $vars['element']['#items'][0]['format'] == null
  ) {
    $vars['items'][0]['#markup'] = nl2br($vars['items'][0]['#markup']);
  }
}

function ecogig_neat_form_dataset_node_form_alter(&$form, &$form_state, $form_id){
}
