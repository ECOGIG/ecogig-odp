<?php

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

  }
}
