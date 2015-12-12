<?php

function ecogig_neat_alpha_preprocess_views_view(&$vars){
  if($vars['view']->name == 'workflow_history'){
    $nid = !empty($vars['view']->args[0]) ? $vars['view']->args[0] : NULL;
    $node = node_load($nid);
    $vars['node'] = $node;

    if(!empty($node->title)){
      $title = $node->title;
    }
    if(!empty($node->field_griidc_udi[LANGUAGE_NONE][0]['value'])){
      $title = $node->field_griidc_udi[LANGUAGE_NONE][0]['value'] . ' <br/>' . $title;
    }

    $vars['view']->build_info['title'] = $title;
  }
}
