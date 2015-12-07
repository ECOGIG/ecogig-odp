<?php
define("ICON_OPEN", " fa fa-circle-o");
define("ICON_IN_PROGRESS", " fa fa-dot-circle-o");
define("ICON_COMPLETE", " fa fa-circle");


function ecogig_neat_alpha_preprocess_node(&$vars) {
  if($vars['type'] == 'profile'){
    $first_name = !empty($vars['field_first_name'][0]['value']) ? $vars['field_first_name'][0]['value'] : '';
    $middle_name = !empty($vars['field_middle_name'][0]['value']) ? $vars['field_middle_name'][0]['value'] : '';
    $last_name = !empty($vars['field_last_name'][0]['value']) ? $vars['field_last_name'][0]['value'] : '';
    $full_name = $first_name;
    $full_name = !empty($middle_name) ? $full_name . ' ' . $middle_name : $full_name;
    $full_name = !empty($last_name) ? $full_name . ' ' . $last_name : $full_name;

    if(empty($vars['content']['body'])){
      $vars['content']['body'] = 'N/A';
    }

    $vars['full_name'] = $full_name;
    $position = !empty($vars['field_contact_position'][0]['value']) ? $vars['field_contact_position'][0]['value'] : '';
    $org = !empty($vars['field_institutional_department'][0]['hs_lineages'][0]) ? $vars['field_institutional_department'][0]['hs_lineages'][0]['label'] : '';
    $dept = !empty($vars['field_institutional_department'][0]['hs_lineages'][1]) ? $vars['field_institutional_department'][0]['hs_lineages'][1]['label'] : '';
    $vars['position_dept'] = '';

    if(empty($vars['content']['field_organization']) && !empty($org)){
      $vars['content']['field_organization'] = $org;
    }

    if(!empty($position) && !empty($dept)){
      $vars['position_dept'] = $position . ', ' . $dept;
    }
    else{
      if(!empty($position)){
        $vars['position_dept'] = $position;
      }
      if(!empty($dept)){
        $vars['position_dept'] = $dept;
      }
    }
    $vars['position'] = $position;
    $vars['dept'] = $dept;

    if(empty($position) && empty($dept) && empty($org) && empty($vars['field_photo'])){
      $vars['empty_profile'] = TRUE;
    }
    $node = $vars['node'];



  }
  if($vars['type'] == 'dataset'){
    $node = $vars['node'];

    $vars['workflow_states'] = ecogig_neat_build_state_display($vars);

  }
}

function ecogig_neat_node_completed($node){
  module_load_include('inc', 'node', 'node.pages');

  $form = drupal_get_form('page_node_form', $node);
  $complete = TRUE;
  foreach($form as $key => $field){
    if(is_array($field) && !empty($field['#required'])){
      if(empty($field['#default_value'])){
        $complete = FALSE;
      }
    }
  }
  return $complete;
}

function ecogig_neat_build_state_display($vars){
  $states_output = array();
  global $user;
  // States that non-admin users can update.
  // TODO: Make this configurable via UI
  $user_states = array('initial_creation', 'request_a_udi_from_repo');
  $node = $vars['node'];
  $completed = ecogig_neat_node_completed($node);
  if($completed){
    $user_states[] = 'metadata_supplied';
  }

  $search_term = "_state";
  foreach($vars as $key => $value){
    // We will check if a given workflow has any states in the user_states array
    $has_user_allowed_states = FALSE;
    $user_allowed_states = array();

    $is_state_field = ($search_term === "" || (($temp = strlen($key) - strlen($search_term)) >= 0 && strpos($key, $search_term, $temp) !== FALSE));
    if($is_state_field){
      $current_sid = !empty($value[0]['value']) ? $value[0]['value'] : '';
      $wf_name = str_replace('_state', '', $key);
      $wf_name = str_replace('field_', '', $wf_name);

      $workflow = ecogig_neat_get_workflow_object($wf_name);
      $wid = ecogig_neat_get_workflow_id($wf_name);
      $states = ecogig_neat_get_workflow_states($wid);

      $weight = -200;
      $lightest_weight = 999;

      $default_state = NULL;
      $complete_state = NULL;
      $return_state = NULL;
      $current_state = NULL;

      $state_options = array();

      foreach($states as $skey => $state){
        $state_options[$state->sid] = $state->state;

        if(in_array($state->name, $user_states)){
          $has_user_allowed_states = TRUE;
          array_push($user_allowed_states, $state->sid);
        }

        if($state->sid == $current_sid){
          $current_state = $state;
        }

        // Assume default state is the one with the lightest weight that is NOT the Workflows default (creation)
        if($state->weight < $lightest_weight && $state->state != '(creation)'){
          $lightest_weight = $state->weight;
          $default_state = $state;
        }

        // Assume that the heaviest weighted state is the completed / final state
        if($state->weight > $weight){
          $weight = $state->weight;
          $complete_state = $state;
        }

        // If state is a "return" state (hard-coded to assume it ends with _return) we display a different status
        $is_return = (($temp = strlen($skey) - strlen('_return')) >= 0 && strpos($skey, '_return', $temp) !== FALSE);
        if($is_return){
          $return_state = $state;
        }

      }

      foreach($states as $skey => $state){
        if($completed && $state->name == 'metadata_supplied'){
          array_push($user_allowed_states, $current_state->sid);
          $user_states[] = $current_state->name;
          $has_user_allowed_states = TRUE;
        }
      }

      $state_name = 'N/A';
      $class = 'in-progress';
      $icon = ICON_IN_PROGRESS;

      if(!empty($current_state)){
        $state_name = $current_state->state;

        if(!empty($default_state) && $current_state->sid == $default_state->sid){
          $class = 'open';
          $icon = ICON_OPEN;
        }
        if(!empty($complete_state) && $current_state->sid == $complete_state->sid){
          $class = 'complete';
          $icon = ICON_COMPLETE;
        }
        if(!empty($return_state) && $current_state->sid == $return_state->sid){
          $class = 'return';
          $icon = ICON_IN_PROGRESS;
        }
      }
      else{
        $state_name = 'N/A';
        if(!empty($default_state)){
          $state_name = $default_state->state;
        }
        $class = 'open';
        $icon = ICON_OPEN;
      }

      $workflow_html = drupal_clean_css_identifier($key);
      $states_output[$key] = array(
        '#prefix' => '<span id="pnl-state-' . $workflow_html .'" class="pnl-state pnl-state-' . $workflow_html . ' ' . $class . ' mode-read">',
        '#suffix' => '</span>',
      );
      $states_output[$key]['state_icon'] = array(
        '#markup' => '<i class="' . $icon . '"></i><br/><span class="state-type">' . $workflow->label . '</span>',
        '#prefix' => '<span class="mode-read">',
        '#suffix' => '</span>',
      );

      // Some users may have access to an inline form for updating workflow states
      $form = NULL;

      $is_data_manager = user_access('override dataset edit');
      $has_node_access = node_access('update', $node);
      // Must be able to update node to get any inline edit options.
      // In addition, user must either have permission to override datasets OR the workflow must contain
      // user-editable states.
      if($has_node_access && ($is_data_manager || $has_user_allowed_states)){
        drupal_add_js(
          array(
            'ecogig_neat' => array(
              'is_data_manager' => TRUE,
              'currentNid' => $node->nid,
            )
          ),
          'setting'
        );

        $form = array(
          '#type' => 'form',
          '#attributes' => array(
            'data-edit' => $key,
            'class' => array(
              'mode-edit',
              'hidden',
            )
          ),
        );
        $form_state = array();
        $values = field_get_items('node', $node, $key);
        $field_val = '';

        if(!empty($values[0]['value'])){
          $field_val = $values[0]['value'];
        }

        if(!empty($values[0]['target_id'])){
          $field_val = $values[0]['target_id'];
        }

        $form[$key][LANGUAGE_NONE] = array(
          '#type' => 'select',
          '#options' => $state_options,
        );

        $form[$key][LANGUAGE_NONE]['#value'] = $field_val;
        $form[$key][LANGUAGE_NONE]['#default_value'] = $field_val;

        if($form[$key][LANGUAGE_NONE]['#options']){
          if(!$is_data_manager){
            $options_remove = array();
            foreach($form[$key][LANGUAGE_NONE]['#options'] as $option_key => $option_value){
              if(!in_array($option_key, $user_allowed_states)){
                array_push($options_remove, $option_key);
                unset($form[$key][LANGUAGE_NONE]['#options'][$option_key]);
              }
            }
          }
          if(!empty($form[$key][LANGUAGE_NONE]['#options']['_none'])){
            unset($form[$key][LANGUAGE_NONE]['#options']['_none']);
          }
        }

        $form[$key][LANGUAGE_NONE]['#title_display'] = 'invisible';

        // If we only have one option available, what's the point in showing a dropdown?
        if(count($form[$key][LANGUAGE_NONE]['#options']) <= 1){
          $form = NULL;
        }

      }
      if(!empty($form)){
        $states_output[$key]['edit_form'] = $form;
      }
      else{
        $states_output[$key]['state_name'] = array(
          '#markup' => '<span class="state-name">' . $state_name . '</span>',
        );
      }

    }
  }
  return $states_output;
}

function ecogig_neat_attach_form($field_name, $entity_type, $bundle, $entity, &$form, &$form_state, $langcode = NULL) {
  // Set #parents to 'top-level' if it doesn't exist.
  $form += array('#parents' => array());

  // If no language is provided use the default site language.
  $options = array(
    'language' => field_valid_language($langcode),
    'default' => TRUE,
  );

  // Append to the form
  ctools_include('fields');
  $field_instance = field_info_instance($entity_type, $field_name, $bundle);

  $form += (array) ctools_field_invoke_field($field_instance, 'form', $entity_type, $entity, $form, $form_state, $options);


}
