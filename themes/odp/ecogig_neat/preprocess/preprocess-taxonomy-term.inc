<?php

function ecogig_neat_alpha_preprocess_taxonomy_term(&$vars){
  if($vars['vocabulary_machine_name'] == 'blog_title'){
    $chief_scientist_node = !empty($vars['field_chief_scientist'][0]) ? $vars['field_chief_scientist'][0]['entity'] : NULL;
    $chief_scientist = array(
      '#prefix' => '<div class="field field-type-text"><span class="profile-tag">',
      '#suffix' => '</span></div>',
      '#title' => t('Chief Scientist'),
    );
    $chief_scientist['link'] = array(
      '#prefix' => '<span class="field-label">' . t('Chief Scientist:') . '</span>',
      '#markup' => '<a class="tag-item" href="/node/' . $chief_scientist_node->nid . '">' . $chief_scientist_node->title . '</a>',
    );

    if(!empty($chief_scientist_node->field_contact_position) && !empty($chief_scientist_node->field_organization)){
      $chief_scientist['info_box'] = array(
        '#type' => 'fieldset',
        '#attributes' => array(
          'class' => array(
            'info-box',
          ),
        ),
      );

      $chief_scientist['info_box']['body'] = node_view($chief_scientist_node, 'teaser');
    }
    $vars['chief_scientist'] = $chief_scientist;

    $participants = array();
    foreach($vars['field_cruise_participants'] as $participant){
      $node = $participant['entity'];
      $participants[$node->nid] = array(
        '#title' => $node->title,
        '#prefix' => '<span class="profile-tag">',
        '#suffix' => '</span>',
      );

      $participants[$node->nid]['link'] = array(
        '#markup' => '<a class="tag-item" href="/node/' . $node->nid . '">' . $node->title . '</a>',
      );

      if(!empty($node->field_contact_position) && !empty($node->field_organization)){
        $participants[$node->nid]['info_box'] = array(
          '#type' => 'fieldset',
          '#attributes' => array(
            'class' => array(
              'info-box',
            ),
          ),
        );

        $participants[$node->nid]['info_box']['body'] = node_view($node, 'teaser');
      }


    }
    $vars['participants'] = $participants;

    $datasets = array();
    $nids = taxonomy_select_nodes($vars['tid']);
    $nodes = node_load_multiple($nids);
    usort($nodes, "ecogig_neat_sort_nodes_title");
    foreach($nodes as $n){
      //$n = node_load($nid);
      if($n->type == 'dataset'){
        $datasets[$n->nid] = array(
          '#markup' => '<a class="node-item" href="/node/' . $n->nid . '">' . $n->title . '</a>',
        );
      }
    }
    $vars['datasets'] = $datasets;
  }
}

function ecogig_neat_sort_nodes_title($a, $b)
{
    return strcmp($a->title, $b->title);
}
