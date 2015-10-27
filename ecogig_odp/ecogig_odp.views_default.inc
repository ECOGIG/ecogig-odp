<?php
/**
 * @file
 * ecogig_odp.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ecogig_odp_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contribution_profile_associations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contribution Profile Associations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contribution Profile Associations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
    'title_3' => 'title_3',
    'title_4' => 'title_4',
    'title_5' => 'title_5',
    'title_6' => 'title_6',
    'title_7' => 'title_7',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Participant Profile */
  $handler->display->display_options['relationships']['field_participant_name_target_id']['id'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['table'] = 'field_data_field_participant_name';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['field'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['ui_name'] = 'Participant Profile';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['label'] = 'Participant Profile';
  /* Relationship: Author Profile */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Author Profile';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['label'] = 'Author Profile';
  /* Relationship: Presenter Profile */
  $handler->display->display_options['relationships']['field_presenter_profile_target_id']['id'] = 'field_presenter_profile_target_id';
  $handler->display->display_options['relationships']['field_presenter_profile_target_id']['table'] = 'field_data_field_presenter_profile';
  $handler->display->display_options['relationships']['field_presenter_profile_target_id']['field'] = 'field_presenter_profile_target_id';
  $handler->display->display_options['relationships']['field_presenter_profile_target_id']['ui_name'] = 'Presenter Profile';
  $handler->display->display_options['relationships']['field_presenter_profile_target_id']['label'] = 'Presenter Profile';
  /* Relationship: Organizer Profile */
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['id'] = 'field_organizer_s__target_id';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['table'] = 'field_data_field_organizer_s_';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['field'] = 'field_organizer_s__target_id';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['ui_name'] = 'Organizer Profile';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['label'] = 'Organizer Profile';
  /* Relationship: Supervisor Profile */
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['id'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['table'] = 'field_data_field_supervisor_s_';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['field'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['ui_name'] = 'Supervisor Profile';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['label'] = 'Supervisor Profile';
  /* Relationship: Stakeholder Profile */
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['id'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['table'] = 'field_data_field_dataset_stakeholders';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['field'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['ui_name'] = 'Stakeholder Profile';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['label'] = 'Stakeholder Profile';
  /* Relationship: Student Profile */
  $handler->display->display_options['relationships']['field_student_profile_target_id']['id'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['table'] = 'field_data_field_student_profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['field'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['ui_name'] = 'Student Profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['label'] = 'Student Profile';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Participant Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_participant_name_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Participant Title';
  /* Field: Author Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['fields']['title_2']['ui_name'] = 'Author Title';
  /* Field: Presenter Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_presenter_profile_target_id';
  $handler->display->display_options['fields']['title_3']['ui_name'] = 'Presenter Title';
  /* Field: Organizer Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'field_organizer_s__target_id';
  $handler->display->display_options['fields']['title_4']['ui_name'] = 'Organizer Title';
  /* Field: Supervisor Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['fields']['title_5']['ui_name'] = 'Supervisor Title';
  /* Field: Stakeholder Title */
  $handler->display->display_options['fields']['title_6']['id'] = 'title_6';
  $handler->display->display_options['fields']['title_6']['table'] = 'node';
  $handler->display->display_options['fields']['title_6']['field'] = 'title';
  $handler->display->display_options['fields']['title_6']['relationship'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['fields']['title_6']['ui_name'] = 'Stakeholder Title';
  /* Field: Student Title */
  $handler->display->display_options['fields']['title_7']['id'] = 'title_7';
  $handler->display->display_options['fields']['title_7']['table'] = 'node';
  $handler->display->display_options['fields']['title_7']['field'] = 'title';
  $handler->display->display_options['fields']['title_7']['relationship'] = 'field_student_profile_target_id';
  $handler->display->display_options['fields']['title_7']['ui_name'] = 'Student Title';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
    'presentation' => 'presentation',
    'public_outreach' => 'public_outreach',
    'publications' => 'publications',
    'students' => 'students',
    'workshop' => 'workshop',
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Participant Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'nid';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_participant_name_target_id';
  $handler->display->display_options['filters']['title']['ui_name'] = 'Participant Title';
  $handler->display->display_options['filters']['title']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Participant Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Author Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'nid';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['filters']['title_1']['ui_name'] = 'Author Title';
  $handler->display->display_options['filters']['title_1']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Author Title';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Presenter Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'nid';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_presenter_profile_target_id';
  $handler->display->display_options['filters']['title_2']['ui_name'] = 'Presenter Title';
  $handler->display->display_options['filters']['title_2']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Presenter Title';
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Organizer Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'nid';
  $handler->display->display_options['filters']['title_3']['relationship'] = 'field_organizer_s__target_id';
  $handler->display->display_options['filters']['title_3']['ui_name'] = 'Organizer Title';
  $handler->display->display_options['filters']['title_3']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_3']['group'] = 2;
  $handler->display->display_options['filters']['title_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_3']['expose']['operator_id'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['label'] = 'Organizer Title';
  $handler->display->display_options['filters']['title_3']['expose']['operator'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['identifier'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Supervisor Title */
  $handler->display->display_options['filters']['title_4']['id'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['table'] = 'node';
  $handler->display->display_options['filters']['title_4']['field'] = 'nid';
  $handler->display->display_options['filters']['title_4']['relationship'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['filters']['title_4']['ui_name'] = 'Supervisor Title';
  $handler->display->display_options['filters']['title_4']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_4']['group'] = 2;
  $handler->display->display_options['filters']['title_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_4']['expose']['operator_id'] = 'title_4_op';
  $handler->display->display_options['filters']['title_4']['expose']['label'] = 'Supervisor Title';
  $handler->display->display_options['filters']['title_4']['expose']['operator'] = 'title_4_op';
  $handler->display->display_options['filters']['title_4']['expose']['identifier'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Stakeholder Title */
  $handler->display->display_options['filters']['title_5']['id'] = 'title_5';
  $handler->display->display_options['filters']['title_5']['table'] = 'node';
  $handler->display->display_options['filters']['title_5']['field'] = 'nid';
  $handler->display->display_options['filters']['title_5']['relationship'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['filters']['title_5']['ui_name'] = 'Stakeholder Title';
  $handler->display->display_options['filters']['title_5']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_5']['group'] = 2;
  $handler->display->display_options['filters']['title_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_5']['expose']['operator_id'] = 'title_5_op';
  $handler->display->display_options['filters']['title_5']['expose']['label'] = 'Stakeholder Title';
  $handler->display->display_options['filters']['title_5']['expose']['operator'] = 'title_5_op';
  $handler->display->display_options['filters']['title_5']['expose']['identifier'] = 'title_5';
  $handler->display->display_options['filters']['title_5']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Student Title */
  $handler->display->display_options['filters']['title_6']['id'] = 'title_6';
  $handler->display->display_options['filters']['title_6']['table'] = 'node';
  $handler->display->display_options['filters']['title_6']['field'] = 'nid';
  $handler->display->display_options['filters']['title_6']['relationship'] = 'field_student_profile_target_id';
  $handler->display->display_options['filters']['title_6']['ui_name'] = 'Student Title';
  $handler->display->display_options['filters']['title_6']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_6']['group'] = 2;
  $handler->display->display_options['filters']['title_6']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_6']['expose']['operator_id'] = 'title_6_op';
  $handler->display->display_options['filters']['title_6']['expose']['label'] = 'Student Title';
  $handler->display->display_options['filters']['title_6']['expose']['operator'] = 'title_6_op';
  $handler->display->display_options['filters']['title_6']['expose']['identifier'] = 'title_6';
  $handler->display->display_options['filters']['title_6']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'contribution-profile-associations';

  /* Display: Profile Selector */
  $handler = $view->new_display('block', 'Profile Selector', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Profile Name';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a class=\'lnk-profile-title\' href=\'\' data-nid=\'[nid]\'>[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class=\'lnk-profile-title\' href=\'\' data-nid=\'[nid]\'>View Records</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class=\'pnl-loading\'>Loading...</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No datasets or contributions found for the selected profile.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
    'presentation' => 'presentation',
    'public_outreach' => 'public_outreach',
    'publications' => 'publications',
    'students' => 'students',
    'workshop' => 'workshop',
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Participant Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'nid';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_participant_name_target_id';
  $handler->display->display_options['filters']['title']['ui_name'] = 'Participant Title';
  $handler->display->display_options['filters']['title']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Participant Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Author Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'nid';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['filters']['title_1']['ui_name'] = 'Author Title';
  $handler->display->display_options['filters']['title_1']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Author Title';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Presenter Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'nid';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_presenter_profile_target_id';
  $handler->display->display_options['filters']['title_2']['ui_name'] = 'Presenter Title';
  $handler->display->display_options['filters']['title_2']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Presenter Title';
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Organizer Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'nid';
  $handler->display->display_options['filters']['title_3']['relationship'] = 'field_organizer_s__target_id';
  $handler->display->display_options['filters']['title_3']['ui_name'] = 'Organizer Title';
  $handler->display->display_options['filters']['title_3']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_3']['group'] = 2;
  $handler->display->display_options['filters']['title_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_3']['expose']['operator_id'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['label'] = 'Organizer Title';
  $handler->display->display_options['filters']['title_3']['expose']['operator'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['identifier'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Supervisor Title */
  $handler->display->display_options['filters']['title_4']['id'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['table'] = 'node';
  $handler->display->display_options['filters']['title_4']['field'] = 'nid';
  $handler->display->display_options['filters']['title_4']['relationship'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['filters']['title_4']['ui_name'] = 'Supervisor Title';
  $handler->display->display_options['filters']['title_4']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_4']['group'] = 2;
  $handler->display->display_options['filters']['title_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_4']['expose']['operator_id'] = 'title_4_op';
  $handler->display->display_options['filters']['title_4']['expose']['label'] = 'Supervisor Title';
  $handler->display->display_options['filters']['title_4']['expose']['operator'] = 'title_4_op';
  $handler->display->display_options['filters']['title_4']['expose']['identifier'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Stakeholder Title */
  $handler->display->display_options['filters']['title_5']['id'] = 'title_5';
  $handler->display->display_options['filters']['title_5']['table'] = 'node';
  $handler->display->display_options['filters']['title_5']['field'] = 'nid';
  $handler->display->display_options['filters']['title_5']['relationship'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['filters']['title_5']['ui_name'] = 'Stakeholder Title';
  $handler->display->display_options['filters']['title_5']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_5']['group'] = 2;
  $handler->display->display_options['filters']['title_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_5']['expose']['operator_id'] = 'title_5_op';
  $handler->display->display_options['filters']['title_5']['expose']['label'] = 'Stakeholder Title';
  $handler->display->display_options['filters']['title_5']['expose']['operator'] = 'title_5_op';
  $handler->display->display_options['filters']['title_5']['expose']['identifier'] = 'title_5';
  $handler->display->display_options['filters']['title_5']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Student Title */
  $handler->display->display_options['filters']['title_6']['id'] = 'title_6';
  $handler->display->display_options['filters']['title_6']['table'] = 'node';
  $handler->display->display_options['filters']['title_6']['field'] = 'nid';
  $handler->display->display_options['filters']['title_6']['relationship'] = 'field_student_profile_target_id';
  $handler->display->display_options['filters']['title_6']['ui_name'] = 'Student Title';
  $handler->display->display_options['filters']['title_6']['value']['value'] = '-1';
  $handler->display->display_options['filters']['title_6']['group'] = 2;
  $handler->display->display_options['filters']['title_6']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_6']['expose']['operator_id'] = 'title_6_op';
  $handler->display->display_options['filters']['title_6']['expose']['label'] = 'Student Title';
  $handler->display->display_options['filters']['title_6']['expose']['operator'] = 'title_6_op';
  $handler->display->display_options['filters']['title_6']['expose']['identifier'] = 'title_6';
  $handler->display->display_options['filters']['title_6']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';
  $handler->display->display_options['block_description'] = 'Profile Contributions';
  $export['contribution_profile_associations'] = $view;

  $view = new view();
  $view->name = 'contributions_content_administration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contributions Content Administration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contributions Content Administration';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Biblio: Type of Publication */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'biblio_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'biblio' => 'biblio',
  );
  /* Filter criterion: Biblio: Type of Publication */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'biblio_types';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type of Publication';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'contributions-content-administration';
  $export['contributions_content_administration'] = $view;

  $view = new view();
  $view->name = 'contributions_data_by_author';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contributions & Data by Author';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'field_griidc_udi' => 'field_griidc_udi',
    'title' => 'title',
    'edit_node' => 'edit_node',
    'old_sid' => 'old_sid',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'field_griidc_udi';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'old_sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="btn">[edit_node] </span>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Workflow State';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Profile Page */
  $handler = $view->new_display('page', 'Profile Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Profile';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['path'] = 'contributions_data/profile';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Profile';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Datasets Page */
  $handler = $view->new_display('page', 'Datasets Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Datasets Owned';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';
  $handler->display->display_options['path'] = 'contributions_data/dataset';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dataset';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Publications Page */
  $handler = $view->new_display('page', 'Publications Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications Owned';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_contrib_author']['id'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['field'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contrib_author']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="btn">[edit_node] </span>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Delete Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Delete Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="btn"><a href="/node/[nid]/archive?destination=contributions_data/publication">Delete</a></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Workflow State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid']['value'] = array(
    26 => '26',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'contributions_data/publication';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Publication';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Contributions Page */
  $handler = $view->new_display('page', 'Contributions Page', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contributions Owned';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_participant_role_date_from_timestamp' => 'field_participant_role_date_from_timestamp',
    'field_participant_role_date_to_timestamp' => 'field_participant_role_date_to_timestamp',
    'field_date_published' => 'field_date_published',
    'field_student_type_date_from_timestamp' => 'field_student_type_date_from_timestamp',
    'field_student_type_date_to_timestamp' => 'field_student_type_date_to_timestamp',
    'field_date_range' => 'field_date_range',
    'field_student_type_tid' => 'field_student_type_tid',
    'field_participant_role_tid' => 'field_participant_role_tid',
    'title' => 'title',
    'type' => 'type',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_participant_role_date_from_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_to_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_published' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_type_date_from_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_type_date_to_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_type_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_participant_role_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['label'] = 'Participant Date From';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['label'] = 'Participant Date To';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['alter']['text'] = '[field_participant_role_date_from_timestamp] - [field_participant_role_date_to_timestamp]';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_date_published']['id'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['fields']['field_date_published']['field'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_published']['empty'] = '[field_participant_role_date_to_timestamp]';
  $handler->display->display_options['fields']['field_date_published']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['label'] = 'Student Date From';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['label'] = 'Student Date To';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['alter']['text'] = '[field_student_type_date_from_timestamp] - [field_student_type_date_to_timestamp]';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['empty'] = '[field_date_published]';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['empty'] = '[field_student_type_date_to_timestamp]';
  $handler->display->display_options['fields']['field_date_range']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Student Type (field_student_type:tid) */
  $handler->display->display_options['fields']['field_student_type_tid']['id'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_tid']['field'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['label'] = 'Student Role';
  $handler->display->display_options['fields']['field_student_type_tid']['hide_empty'] = TRUE;
  /* Field: Content: Participant Role(s) (field_participant_role:tid) */
  $handler->display->display_options['fields']['field_participant_role_tid']['id'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_tid']['field'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['label'] = 'Participant Role';
  $handler->display->display_options['fields']['field_participant_role_tid']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="btn">[edit_node] </span>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'btn';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  /* Sort criterion: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['granularity'] = 'day';
  /* Sort criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['granularity'] = 'day';
  /* Sort criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['sorts']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['sorts']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
    'presentation' => 'presentation',
    'public_outreach' => 'public_outreach',
    'publications' => 'publications',
    'students' => 'students',
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid']['value'] = array(
    26 => '26',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'presentation' => 'presentation',
    'participant' => 'participant',
    'public_outreach' => 'public_outreach',
    'publications' => 'publications',
    'students' => 'students',
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    '' => '',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 2;
  $handler->display->display_options['path'] = 'contributions_data/contribution';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contribution';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['contributions_data_by_author'] = $view;

  $view = new view();
  $view->name = 'dataset_action_items';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset Action Items';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
    'title' => 'title',
    'name' => 'name',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = 'sid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No items found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_contrib_author_1']['id'] = 'field_contrib_author_1';
  $handler->display->display_options['fields']['field_contrib_author_1']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author_1']['field'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_author_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contrib_author_1']['delta_offset'] = '0';
  /* Field: Content: Dataset Contact Person */
  $handler->display->display_options['fields']['field_dataset_contact_person']['id'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['field'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['label'] = '';
  $handler->display->display_options['fields']['field_dataset_contact_person']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Author(s)';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_authors][field_contrib_author_1]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Metadata Action Items */
  $handler = $view->new_display('page', 'Metadata Action Items', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Metadata Action Items';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'State';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    9 => '9',
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    '' => '',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 2;
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['id'] = 'field_use_this_dataset_as_a_temp_value_1';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['group'] = 2;
  $handler->display->display_options['path'] = 'contributions_data/my-datasets/metadata-action-items';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dataset Action Items';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data Action Items */
  $handler = $view->new_display('page', 'Data Action Items', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data Action Items';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'State';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    14 => '14',
    24 => '24',
    16 => '16',
    17 => '17',
  );
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'contributions_data/my-datasets/data-action-items';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dataset Action Items';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data Mgr - GRIIDC Action Items */
  $handler = $view->new_display('page', 'Data Mgr - GRIIDC Action Items', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'GRIIDC Action Items - Data Mgr';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
    'title' => 'title',
    'name' => 'name',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_griidc_udi';
  $handler->display->display_options['style_options']['info'] = array(
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  /* Relationship: author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'author';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Owner';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'State';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    7 => '7',
    20 => '20',
    21 => '21',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'contributions_data/my-datasets/griidc-action-items/data-mgr';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'GRIIDC Action Items - Data Mgr';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data Mgr - Metadata Action Items */
  $handler = $view->new_display('page', 'Data Mgr - Metadata Action Items', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Metadata Action Items - Data Mgr';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['fields']['name']['label'] = 'Owner';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'State';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    11 => '11',
    20 => '20',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'contributions_data/my-datasets/metadata-action-items/data-mgr';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Metadata Action Items - Data Mgr';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data Mgr - DATA Action Items */
  $handler = $view->new_display('page', 'Data Mgr - DATA Action Items', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'DATA Action Items - Data Mgr';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['fields']['name']['label'] = 'Owner';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'State';
  /* Field: Workflow current: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    15 => '15',
    25 => '25',
    22 => '22',
    21 => '21',
    17 => '17',
    23 => '23',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'contributions_data/my-datasets/data-action-items/data-mgr';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'DATA Action Items - Data Mgr';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data Mgr - Orphans */
  $handler = $view->new_display('page', 'Data Mgr - Orphans', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orphans - Data Mgr';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
    'title' => 'title',
    'name' => 'name',
    'sid' => 'sid',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_griidc_udi';
  $handler->display->display_options['style_options']['info'] = array(
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['fields']['name']['label'] = 'Owner';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'State';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    '' => '',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 2;
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['id'] = 'field_use_this_dataset_as_a_temp_value_1';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value_1']['group'] = 2;
  $handler->display->display_options['path'] = 'contributions_data/my-datasets/orphans/data-mgr';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Orphans - Data Mgr';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Metadata Action Items (Block) */
  $handler = $view->new_display('block', 'Metadata Action Items (Block)', 'block_metadata');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Metadata Action Items';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No items found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '[sid]:';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['sid']['element_wrapper_class'] = 'header-action-item';
  $handler->display->display_options['fields']['sid']['element_default_classes'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['label'] = '';
  $handler->display->display_options['fields']['field_griidc_udi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_griidc_udi']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_griidc_udi']['element_wrapper_class'] = 'udi';
  $handler->display->display_options['fields']['field_griidc_udi']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['label'] = 'Workflow Notes';
  $handler->display->display_options['fields']['comment']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment']['element_wrapper_class'] = 'action-item-notes';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pnl-action-item-buttons">
<a href="/node/[nid]/workflow-history" class="btn" target="_blank">View All Notes</a>
<a href="/node/[nid]/edit" class="btn" target="_blank">EDIT RECORD</a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Workflow current: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    9 => '9',
    13 => '13',
  );
  $handler->display->display_options['block_description'] = 'Metadata Action Items';

  /* Display: Data Action Items (Block) */
  $handler = $view->new_display('block', 'Data Action Items (Block)', 'block_data');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data Action Items';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No items found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '[sid]:';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['sid']['element_wrapper_class'] = 'header-action-item';
  $handler->display->display_options['fields']['sid']['element_default_classes'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['label'] = '';
  $handler->display->display_options['fields']['field_griidc_udi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_griidc_udi']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_griidc_udi']['element_wrapper_class'] = 'udi';
  $handler->display->display_options['fields']['field_griidc_udi']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['label'] = 'Workflow Notes';
  $handler->display->display_options['fields']['comment']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment']['element_wrapper_class'] = 'action-item-notes';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pnl-action-item-buttons">
<a href="/node/[nid]/workflow-history" class="btn" target="_blank">View All Notes</a>
<a href="/node/[nid]/edit" class="btn" target="_blank">EDIT RECORD</a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Workflow current: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    14 => '14',
    24 => '24',
    16 => '16',
    17 => '17',
  );
  $handler->display->display_options['block_description'] = 'Metadata Action Items';
  $export['dataset_action_items'] = $view;

  $view = new view();
  $view->name = 'dataset_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Contact Person Profile */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['ui_name'] = 'Contact Person Profile';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['label'] = 'Contact Person Profile';
  /* Relationship: Metadata Contact Person Profile */
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['id'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['table'] = 'field_data_field_metadata_contact_person';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['field'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['ui_name'] = 'Metadata Contact Person Profile';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['label'] = 'Metadata Contact Person Profile';
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['label'] = 'gmd:fileIdentifier';
  $handler->display->display_options['fields']['field_griidc_udi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_griidc_udi']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_griidc_udi']['alter']['text'] = '<gco:CharacterString>[field_griidc_udi]</gco:CharacterString>';
  $handler->display->display_options['fields']['field_griidc_udi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_griidc_udi']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'gmd:fileIdentifier';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$udi = !empty($data->_field_data[\'nid\'][\'entity\']->field_griidc_udi[\'und\'][0][\'value\']) ? str_replace(\':\', \'-\', $data->_field_data[\'nid\'][\'entity\']->field_griidc_udi[\'und\'][0][\'value\']) : \'\';
echo \'<gco:CharacterString>\' . $udi .\'-metadata.xml</gco:CharacterString>\' . PHP_EOL;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'gmd:language';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
echo \'<gco:CharacterString>\', \'eng; USA\',\'</gco:CharacterString>\' . PHP_EOL;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'gmd:characterSet';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
echo \'<gmd:MD_CharacterSetCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#MD_CharacterSetCode" codeListValue="utf8" codeSpace="004">\', \'utf8\',\'</gmd:MD_CharacterSetCode>\' . PHP_EOL;
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'gmd:hierarchyLevel';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
echo \'<gmd:MD_ScopeCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#MD_ScopeCode" codeListValue="dataset" codeSpace="005">\', \'dataset\',\'</gmd:MD_ScopeCode>\' . PHP_EOL;
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_profile_address']['id'] = 'field_profile_address';
  $handler->display->display_options['fields']['field_profile_address']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address']['field'] = 'field_profile_address';
  $handler->display->display_options['fields']['field_profile_address']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address']['label'] = 'Contact Person Address';
  $handler->display->display_options['fields']['field_profile_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_profile_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_profile_address_administrative_area']['id'] = 'field_profile_address_administrative_area';
  $handler->display->display_options['fields']['field_profile_address_administrative_area']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_administrative_area']['field'] = 'field_profile_address_administrative_area';
  $handler->display->display_options['fields']['field_profile_address_administrative_area']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_administrative_area']['label'] = 'Contact Person State';
  $handler->display->display_options['fields']['field_profile_address_administrative_area']['exclude'] = TRUE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_profile_address_country']['id'] = 'field_profile_address_country';
  $handler->display->display_options['fields']['field_profile_address_country']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_country']['field'] = 'field_profile_address_country';
  $handler->display->display_options['fields']['field_profile_address_country']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_country']['label'] = 'Contact Person Address';
  $handler->display->display_options['fields']['field_profile_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_address_country']['display_name'] = 1;
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_profile_address_locality']['id'] = 'field_profile_address_locality';
  $handler->display->display_options['fields']['field_profile_address_locality']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_locality']['field'] = 'field_profile_address_locality';
  $handler->display->display_options['fields']['field_profile_address_locality']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_locality']['label'] = 'Contact Person City';
  $handler->display->display_options['fields']['field_profile_address_locality']['exclude'] = TRUE;
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_profile_address_postal_code']['id'] = 'field_profile_address_postal_code';
  $handler->display->display_options['fields']['field_profile_address_postal_code']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_postal_code']['field'] = 'field_profile_address_postal_code';
  $handler->display->display_options['fields']['field_profile_address_postal_code']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_postal_code']['label'] = 'Contact Person Zip';
  $handler->display->display_options['fields']['field_profile_address_postal_code']['exclude'] = TRUE;
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_institutional_department']['label'] = 'Contact Person Dept';
  $handler->display->display_options['fields']['field_institutional_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institutional_department']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_email']['label'] = 'Contact Person Email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_first_name']['label'] = 'Contact Person First Name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Contact Person Last Name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Person Phone';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Metadata Contact';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Dataset Contact */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['ui_name'] = 'Dataset Contact';
  $handler->display->display_options['fields']['php_4']['label'] = 'gmd:contact';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php

$node = $data->_field_data[\'nid\'][\'entity\'];
$contact = $data->_field_data[\'node_field_data_field_dataset_contact_person_nid\'][\'entity\'];
$position_tid = !empty($contact->field_personnel_term[LANGUAGE_NONE][0]) ? $contact->field_personnel_term[LANGUAGE_NONE][0][\'tid\'] : \'\';
$personnel_term = taxonomy_term_load($position_tid);
$position = !empty($personnel_term) ? $personnel_term->name : \'N/A\';

$country = !empty($contact->field_profile_address[\'und\'][0][\'country\']) ? griidc_export_convert_country_code($contact->field_profile_address[\'und\'][0][\'country\']) : \'N/A\';


echo \'<gmd:CI_ResponsibleParty>\' . PHP_EOL;
	echo \'<gmd:individualName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $data->_field_data[\'node_field_data_field_dataset_contact_person_nid\'][\'entity\']->title, \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:individualName>\' . PHP_EOL;

	echo \'<gmd:organisationName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $data->_field_data[\'node_field_data_field_dataset_contact_person_nid\'][\'entity\']->field_organization[\'und\'][0][\'value\'], \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:organisationName>\' . PHP_EOL;

	echo \'<gmd:positionName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $position, \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:positionName>\' . PHP_EOL;

	echo \'<gmd:contactInfo>\' . PHP_EOL;
		echo \'<gmd:CI_Contact>\' . PHP_EOL;
			echo \'<gmd:phone>\' . PHP_EOL;
		        echo \'<gmd:CI_Telephone>\' . PHP_EOL;
		            echo \'<gmd:voice>\' . PHP_EOL;
		                echo \'<gco:CharacterString>\', $contact->field_phone[\'und\'][0][\'value\'],\'</gco:CharacterString>\' . PHP_EOL;
		            echo \'</gmd:voice>\' . PHP_EOL;
		            echo \'<gmd:facsimile>\' . PHP_EOL;
		                echo \'<gco:CharacterString />\' . PHP_EOL;
		            echo \'</gmd:facsimile>\' . PHP_EOL;
		        echo \'</gmd:CI_Telephone>\' . PHP_EOL;
			echo \'</gmd:phone>\' . PHP_EOL;
	        echo \'<gmd:address>\' . PHP_EOL;
	            echo \'<gmd:CI_Address>\' . PHP_EOL;
	                echo \'<gmd:deliveryPoint>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'thoroughfare\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:deliveryPoint>\' . PHP_EOL;
	                echo \'<gmd:city>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'locality\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:city>\' . PHP_EOL;
	                echo \'<gmd:administrativeArea>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'administrative_area\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:administrativeArea>\' . PHP_EOL;
	                echo \'<gmd:postalCode>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'postal_code\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:postalCode>\' . PHP_EOL;
	                echo \'<gmd:country>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $country, \'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:country>\' . PHP_EOL;
	                echo \'<gmd:electronicMailAddress>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $contact->field_email[\'und\'][0][\'email\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:electronicMailAddress>\' . PHP_EOL;
	            echo \'</gmd:CI_Address>\' . PHP_EOL;
	        echo \'</gmd:address>\' . PHP_EOL;
		echo \'</gmd:CI_Contact>\' . PHP_EOL;
	echo \'</gmd:contactInfo>\' . PHP_EOL;
	    echo \'<gmd:role>\' . PHP_EOL;
	        echo \'<gmd:CI_RoleCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_RoleCode" codeListValue="pointOfContact" codeSpace="007">\' . PHP_EOL;
	        	echo \'pointOfContact\' . PHP_EOL;
	        echo \'</gmd:CI_RoleCode>\' . PHP_EOL;
	    echo \'</gmd:role>\' . PHP_EOL;
echo \'</gmd:CI_ResponsibleParty>\' . PHP_EOL;

?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_profile_address_1']['id'] = 'field_profile_address_1';
  $handler->display->display_options['fields']['field_profile_address_1']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_1']['field'] = 'field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_profile_address_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_profile_address_administrative_area_1']['id'] = 'field_profile_address_administrative_area_1';
  $handler->display->display_options['fields']['field_profile_address_administrative_area_1']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_administrative_area_1']['field'] = 'field_profile_address_administrative_area';
  $handler->display->display_options['fields']['field_profile_address_administrative_area_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_administrative_area_1']['exclude'] = TRUE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_profile_address_country_1']['id'] = 'field_profile_address_country_1';
  $handler->display->display_options['fields']['field_profile_address_country_1']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_country_1']['field'] = 'field_profile_address_country';
  $handler->display->display_options['fields']['field_profile_address_country_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_country_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_address_country_1']['display_name'] = 1;
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_profile_address_locality_1']['id'] = 'field_profile_address_locality_1';
  $handler->display->display_options['fields']['field_profile_address_locality_1']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_locality_1']['field'] = 'field_profile_address_locality';
  $handler->display->display_options['fields']['field_profile_address_locality_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_locality_1']['exclude'] = TRUE;
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_profile_address_postal_code_1']['id'] = 'field_profile_address_postal_code_1';
  $handler->display->display_options['fields']['field_profile_address_postal_code_1']['table'] = 'field_data_field_profile_address';
  $handler->display->display_options['fields']['field_profile_address_postal_code_1']['field'] = 'field_profile_address_postal_code';
  $handler->display->display_options['fields']['field_profile_address_postal_code_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_profile_address_postal_code_1']['exclude'] = TRUE;
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department_1']['id'] = 'field_institutional_department_1';
  $handler->display->display_options['fields']['field_institutional_department_1']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department_1']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_institutional_department_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institutional_department_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email_1']['id'] = 'field_email_1';
  $handler->display->display_options['fields']['field_email_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_email_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone_1']['id'] = 'field_phone_1';
  $handler->display->display_options['fields']['field_phone_1']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone_1']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone_1']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['fields']['field_phone_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Metadata Contact */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['ui_name'] = 'Metadata Contact';
  $handler->display->display_options['fields']['php_5']['label'] = 'gmd:contact';
  $handler->display->display_options['fields']['php_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php

$node = $data->_field_data[\'nid\'][\'entity\'];
$contact = $data->_field_data[\'node_field_data_field_dataset_contact_person_nid\'][\'entity\'];
$md_contact = !empty($data->_field_data[\'node_field_data_field_metadata_contact_person_nid\'][\'entity\']) ? $data->_field_data[\'node_field_data_field_metadata_contact_person_nid\'][\'entity\'] : \'\';
if(!empty($md_contact) && $md_contact->nid != $contact->nid){

$position_tid = !empty($md_contact->field_personnel_term[LANGUAGE_NONE][0]) ? $md_contact->field_personnel_term[LANGUAGE_NONE][0][\'tid\'] : \'\';
$personnel_term = taxonomy_term_load($position_tid);
$position = !empty($personnel_term) ? $personnel_term->name : \'N/A\';
$country = !empty($md_contact->field_profile_address[\'und\'][0][\'country\']) ? griidc_export_convert_country_code($md_contact->field_profile_address[\'und\'][0][\'country\']) : \'N/A\';

echo \'<gmd:CI_ResponsibleParty>\' . PHP_EOL;
	echo \'<gmd:individualName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $md_contact->title, \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:individualName>\' . PHP_EOL;

	echo \'<gmd:organisationName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $md_contact->field_organization[\'und\'][0][\'value\'], \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:organisationName>\' . PHP_EOL;

	echo \'<gmd:positionName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $position, \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:positionName>\' . PHP_EOL;

	echo \'<gmd:contactInfo>\' . PHP_EOL;
		echo \'<gmd:CI_Contact>\' . PHP_EOL;
			echo \'<gmd:phone>\' . PHP_EOL;
		        echo \'<gmd:CI_Telephone>\' . PHP_EOL;
		            echo \'<gmd:voice>\' . PHP_EOL;
		                echo \'<gco:CharacterString>\', $md_contact->field_phone[\'und\'][0][\'value\'],\'</gco:CharacterString>\' . PHP_EOL;
		            echo \'</gmd:voice>\' . PHP_EOL;
		            echo \'<gmd:facsimile>\' . PHP_EOL;
		                echo \'<gco:CharacterString />\' . PHP_EOL;
		            echo \'</gmd:facsimile>\' . PHP_EOL;
		        echo \'</gmd:CI_Telephone>\' . PHP_EOL;
			echo \'</gmd:phone>\' . PHP_EOL;
	        echo \'<gmd:address>\' . PHP_EOL;
	            echo \'<gmd:CI_Address>\' . PHP_EOL;
	                echo \'<gmd:deliveryPoint>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'thoroughfare\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:deliveryPoint>\' . PHP_EOL;
	                echo \'<gmd:city>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'locality\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:city>\' . PHP_EOL;
	                echo \'<gmd:administrativeArea>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'administrative_area\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:administrativeArea>\' . PHP_EOL;
	                echo \'<gmd:postalCode>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'postal_code\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:postalCode>\' . PHP_EOL;
	                echo \'<gmd:country>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $country,\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:country>\' . PHP_EOL;
	                echo \'<gmd:electronicMailAddress>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $md_contact->field_email[\'und\'][0][\'email\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:electronicMailAddress>\' . PHP_EOL;
	            echo \'</gmd:CI_Address>\' . PHP_EOL;
	        echo \'</gmd:address>\' . PHP_EOL;
		echo \'</gmd:CI_Contact>\' . PHP_EOL;
	echo \'</gmd:contactInfo>\' . PHP_EOL;
	    echo \'<gmd:role>\' . PHP_EOL;
	        echo \'<gmd:CI_RoleCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_RoleCode" codeListValue="pointOfContact" codeSpace="007">\' . PHP_EOL;
	        	echo \'pointOfContact\' . PHP_EOL;
	        echo \'</gmd:CI_RoleCode>\' . PHP_EOL;
	    echo \'</gmd:role>\' . PHP_EOL;
echo \'</gmd:CI_ResponsibleParty>\' . PHP_EOL;
}
?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Stakeholders */
  $handler->display->display_options['fields']['php_12']['id'] = 'php_12';
  $handler->display->display_options['fields']['php_12']['table'] = 'views';
  $handler->display->display_options['fields']['php_12']['field'] = 'php';
  $handler->display->display_options['fields']['php_12']['ui_name'] = 'Stakeholders';
  $handler->display->display_options['fields']['php_12']['label'] = 'gmd:contact';
  $handler->display->display_options['fields']['php_12']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_12']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php_12']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_12']['php_output'] = '<?php

$node = $data->_field_data[\'nid\'][\'entity\'];
$contact = $data->_field_data[\'node_field_data_field_dataset_contact_person_nid\'][\'entity\'];

$stakeholders = array();
if(!empty($node->field_dataset_stakeholders[LANGUAGE_NONE])){
	foreach($node->field_dataset_stakeholders[LANGUAGE_NONE] as $sh){
		$stakeholder = node_load($sh[\'target_id\']);
		array_push($stakeholders, $stakeholder);
	}
}

$total = count($stakeholders);
$count = 1;

foreach($stakeholders as $sh){
	$position_tid = !empty($sh->field_personnel_term[LANGUAGE_NONE][0]) ? $sh->field_personnel_term[LANGUAGE_NONE][0][\'tid\'] : \'\';
	$personnel_term = taxonomy_term_load($position_tid);
	$position = !empty($personnel_term) ? $personnel_term->name : \'N/A\';
	$country = !empty($sh->field_profile_address[\'und\'][0][\'country\']) ? griidc_export_convert_country_code($sh->field_profile_address[\'und\'][0][\'country\']) : \'N/A\';

	echo \'<gmd:CI_ResponsibleParty>\' . PHP_EOL;
	echo \'<gmd:individualName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $sh->title, \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:individualName>\' . PHP_EOL;

	echo \'<gmd:organisationName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $sh->field_organization[\'und\'][0][\'value\'], \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:organisationName>\' . PHP_EOL;

	echo \'<gmd:positionName>\' . PHP_EOL;
		echo \'<gco:CharacterString>\', $position, \'</gco:CharacterString>\' . PHP_EOL;
	echo \'</gmd:positionName>\' . PHP_EOL;

	echo \'<gmd:contactInfo>\' . PHP_EOL;
		echo \'<gmd:CI_Contact>\' . PHP_EOL;
			echo \'<gmd:phone>\' . PHP_EOL;
		        echo \'<gmd:CI_Telephone>\' . PHP_EOL;
		            echo \'<gmd:voice>\' . PHP_EOL;
		                echo \'<gco:CharacterString>\', $sh->field_phone[\'und\'][0][\'value\'],\'</gco:CharacterString>\' . PHP_EOL;
		            echo \'</gmd:voice>\' . PHP_EOL;
		            echo \'<gmd:facsimile>\' . PHP_EOL;
		                echo \'<gco:CharacterString />\' . PHP_EOL;
		            echo \'</gmd:facsimile>\' . PHP_EOL;
		        echo \'</gmd:CI_Telephone>\' . PHP_EOL;
			echo \'</gmd:phone>\' . PHP_EOL;
	        echo \'<gmd:address>\' . PHP_EOL;
	            echo \'<gmd:CI_Address>\' . PHP_EOL;
	                echo \'<gmd:deliveryPoint>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $sh->field_profile_address[\'und\'][0][\'thoroughfare\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:deliveryPoint>\' . PHP_EOL;
	                echo \'<gmd:city>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $sh->field_profile_address[\'und\'][0][\'locality\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:city>\' . PHP_EOL;
	                echo \'<gmd:administrativeArea>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $sh->field_profile_address[\'und\'][0][\'administrative_area\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:administrativeArea>\' . PHP_EOL;
	                echo \'<gmd:postalCode>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $sh->field_profile_address[\'und\'][0][\'postal_code\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:postalCode>\' . PHP_EOL;
	                echo \'<gmd:country>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $country, \'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:country>\' . PHP_EOL;
	                echo \'<gmd:electronicMailAddress>\' . PHP_EOL;
	                    echo \'<gco:CharacterString>\', $sh->field_email[\'und\'][0][\'email\'],\'</gco:CharacterString>\' . PHP_EOL;
	                echo \'</gmd:electronicMailAddress>\' . PHP_EOL;
	            echo \'</gmd:CI_Address>\' . PHP_EOL;
	        echo \'</gmd:address>\' . PHP_EOL;
		echo \'</gmd:CI_Contact>\' . PHP_EOL;
	echo \'</gmd:contactInfo>\' . PHP_EOL;
	    echo \'<gmd:role>\' . PHP_EOL;
	        echo \'<gmd:CI_RoleCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_RoleCode" codeListValue="pointOfContact" codeSpace="007">\' . PHP_EOL;
	        	echo \'pointOfContact\' . PHP_EOL;
	        echo \'</gmd:CI_RoleCode>\' . PHP_EOL;
	    echo \'</gmd:role>\' . PHP_EOL;
	echo \'</gmd:CI_ResponsibleParty>\' . PHP_EOL;

	if($total > 1 && $count < $total){
		echo \'</gmd:contact>\';
		echo \'<gmd:contact>\';
	}
	$count++;
}

?>';
  $handler->display->display_options['fields']['php_12']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_12']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'gmd:dateStamp';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_output'] = '<?php

echo \'<gco:DateTime>\', format_date($data->_field_data[\'nid\'][\'entity\']->changed, \'custom\', \'Y-m-d\\TH:i:sP\'), \'</gco:DateTime>\' . PHP_EOL;

?>';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'gmd:metadataStandardName';
  $handler->display->display_options['fields']['php_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_output'] = '<?php
        echo \'<gco:CharacterString>ISO 19115-2 Geographic Information - Metadata - Part 2: Extensions for Imagery and Gridded Data</gco:CharacterString>\'. PHP_EOL;
?>';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_8']['id'] = 'php_8';
  $handler->display->display_options['fields']['php_8']['table'] = 'views';
  $handler->display->display_options['fields']['php_8']['field'] = 'php';
  $handler->display->display_options['fields']['php_8']['label'] = 'gmd:metadataStandardVersion';
  $handler->display->display_options['fields']['php_8']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_8']['php_output'] = '<?php
echo \'<gco:CharacterString>ISO 19115-2:2009(E)</gco:CharacterString>\'. PHP_EOL;

?>';
  $handler->display->display_options['fields']['php_8']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_8']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_9']['id'] = 'php_9';
  $handler->display->display_options['fields']['php_9']['table'] = 'views';
  $handler->display->display_options['fields']['php_9']['field'] = 'php';
  $handler->display->display_options['fields']['php_9']['label'] = 'gmd:dataSetURI';
  $handler->display->display_options['fields']['php_9']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_9']['php_output'] = '<?php
$node = $data->_field_data[\'nid\'][\'entity\'];
$udi = !empty($node->field_griidc_udi[\'und\'][0][\'value\']) ? str_replace(":", "-", $node->field_griidc_udi[\'und\'][0][\'value\']) : \'\';
echo \'<gco:CharacterString>https://data.gulfresearchinitiative.org/data/\', $udi, \'</gco:CharacterString>\'. PHP_EOL;

?>';
  $handler->display->display_options['fields']['php_9']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_9']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_10']['id'] = 'php_10';
  $handler->display->display_options['fields']['php_10']['table'] = 'views';
  $handler->display->display_options['fields']['php_10']['field'] = 'php';
  $handler->display->display_options['fields']['php_10']['label'] = 'gmd:identificationInfo';
  $handler->display->display_options['fields']['php_10']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_10']['php_output'] = '<?php

$node = $data->_field_data[\'nid\'][\'entity\'];
$edit_date = new DateTime(\'@\' . $node->changed);
$edit_date = ($edit_date instanceof DateTime) ? $edit_date->format(\'Y-m-d\') : "";
$coordinate_type = $node->field_coordinate_list_descriptio[\'und\'][0][\'value\'];

$contact = $data->_field_data[\'node_field_data_field_dataset_contact_person_nid\'][\'entity\'];
$country = !empty($contact->field_profile_address[\'und\'][0][\'country\']) ? griidc_export_convert_country_code($contact->field_profile_address[\'und\'][0][\'country\']) : \'N/A\';
$position_tid = !empty($contact->field_personnel_term[LANGUAGE_NONE][0]) ? $contact->field_personnel_term[LANGUAGE_NONE][0][\'tid\'] : \'\';
$personnel_term = taxonomy_term_load($position_tid);
$position = !empty($personnel_term) ? $personnel_term->name : \'N/A\';

$md_contact = $data->_field_data[\'node_field_data_field_dataset_metadata_contact_person_nid\'][\'entity\'];
$md_country = !empty($md_contact->field_profile_address[\'und\'][0][\'country\']) ? griidc_export_convert_country_code($md_contact->field_profile_address[\'und\'][0][\'country\']) : \'N/A\';
$md_position_tid = !empty($md_contact->field_personnel_term[LANGUAGE_NONE][0]) ? $md_contact->field_personnel_term[LANGUAGE_NONE][0][\'tid\'] : \'\';
$md_personnel_term = taxonomy_term_load($md_position_tid);
$md_position = !empty($md_personnel_term) ? $md_personnel_term->name : \'N/A\';

$supp_params = !empty($node->field_supplemental_information_d[\'und\'][0][\'value\']) ? $node->field_supplemental_information_d[\'und\'][0][\'value\'] . "|" : "|";
$supp_methods = !empty($node->field_methods[\'und\'][0][\'value\']) ? $node->field_methods[\'und\'][0][\'value\'] . "|" : "|";
$supp_instruments = !empty($node->field_instruments[\'und\'][0][\'value\']) ? $node->field_instruments[\'und\'][0][\'value\'] . "|" : "|";
$supp_scales = !empty($node->field_sampling_scales_and_rates[\'und\'][0][\'value\']) ? $node->field_sampling_scales_and_rates[\'und\'][0][\'value\'] . "|" : "|";
$supp_error = !empty($node->field_error_analysis[\'und\'][0][\'value\']) ? $node->field_error_analysis[\'und\'][0][\'value\'] . "|" : "|";
$supp_prov = !empty($node->field_provenance[\'und\'][0][\'value\']) ? $node->field_provenance[\'und\'][0][\'value\'] : "";

$supp_info = $supp_params . $supp_methods . $supp_instruments . $supp_scales . $supp_error . $supp_prov;

switch($node->field_time_period_description[\'und\'][0][\'value\']){
    case "0":
        $time_desc = "modeled period";
        break;
    case "1":
        $time_desc = "ground condition";
        break;
    default:
        $time_desc = "";
        break;
}


        echo \'<gmd:MD_DataIdentification>\' . PHP_EOL;
            echo \'<gmd:citation>\' . PHP_EOL;
                echo \'<gmd:CI_Citation>\' . PHP_EOL;
                    echo \'<gmd:title>\' . PHP_EOL;
                        echo \'<gco:CharacterString>\',htmlspecialchars($node->title, ENT_QUOTES),\'</gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:title>\' . PHP_EOL;
                    echo \'<gmd:alternateTitle>\' . PHP_EOL;
                        echo \'<gco:CharacterString></gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:alternateTitle>\' . PHP_EOL;
                    echo \'<gmd:date>\' . PHP_EOL;
                        echo \'<gmd:CI_Date>\' . PHP_EOL;
                            echo \'<gmd:date>\' . PHP_EOL;
                                echo \'<gco:Date>\', $edit_date,\'</gco:Date>\' . PHP_EOL;
                            echo \'</gmd:date>\' . PHP_EOL;
                            echo \'<gmd:dateType>\' . PHP_EOL;
                            echo \'<gmd:CI_DateTypeCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_DateTypeCode" codeListValue="publication" codeSpace="002">publication</gmd:CI_DateTypeCode>\' . PHP_EOL;
                            echo \'</gmd:dateType>\' . PHP_EOL;
                        echo \'</gmd:CI_Date>\' . PHP_EOL;
                    echo \'</gmd:date>\' . PHP_EOL;
                echo \'</gmd:CI_Citation>\' . PHP_EOL;
            echo \'</gmd:citation>\' . PHP_EOL;
            echo \'<gmd:abstract>\' . PHP_EOL;
                echo \'<gco:CharacterString>\',htmlspecialchars($node->field_abstract[\'und\'][0][\'value\'], ENT_QUOTES),\'</gco:CharacterString>\' . PHP_EOL;
            echo \'</gmd:abstract>\' . PHP_EOL;
            echo \'<gmd:purpose>\' . PHP_EOL;
                echo \'<gco:CharacterString>\',htmlspecialchars($node->field_dataset_purpose[\'und\'][0][\'value\'], ENT_QUOTES),\'</gco:CharacterString>\' . PHP_EOL;
            echo \'</gmd:purpose>\' . PHP_EOL;
            echo \'<gmd:status>\' . PHP_EOL;
                echo \'<gmd:MD_ProgressCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#MD_ProgressCode" codeListValue="completed" codeSpace="001">\' . PHP_EOL;
                echo \'completed</gmd:MD_ProgressCode>\' . PHP_EOL;
            echo \'</gmd:status>\' . PHP_EOL;
            echo \'<gmd:pointOfContact>\' . PHP_EOL;
                echo \'<gmd:CI_ResponsibleParty>\' . PHP_EOL;
                    echo \'<gmd:individualName>\' . PHP_EOL;
                        echo \'<gco:CharacterString>\', $contact->title, \'</gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:individualName>\' . PHP_EOL;

                    echo \'<gmd:organisationName>\' . PHP_EOL;
                        echo \'<gco:CharacterString>\', $contact->field_organization[\'und\'][0][\'value\'], \'</gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:organisationName>\' . PHP_EOL;

                    echo \'<gmd:positionName>\' . PHP_EOL;
                        echo \'<gco:CharacterString>\', $position, \'</gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:positionName>\' . PHP_EOL;

                    echo \'<gmd:contactInfo>\' . PHP_EOL;
                        echo \'<gmd:CI_Contact>\' . PHP_EOL;
                            echo \'<gmd:phone>\' . PHP_EOL;
                                echo \'<gmd:CI_Telephone>\' . PHP_EOL;
                                    echo \'<gmd:voice>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $contact->field_phone[\'und\'][0][\'value\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:voice>\' . PHP_EOL;
                                    echo \'<gmd:facsimile>\' . PHP_EOL;
                                        echo \'<gco:CharacterString />\' . PHP_EOL;
                                    echo \'</gmd:facsimile>\' . PHP_EOL;
                                echo \'</gmd:CI_Telephone>\' . PHP_EOL;
                            echo \'</gmd:phone>\' . PHP_EOL;
                            echo \'<gmd:address>\' . PHP_EOL;
                                echo \'<gmd:CI_Address>\' . PHP_EOL;
                                    echo \'<gmd:deliveryPoint>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'thoroughfare\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:deliveryPoint>\' . PHP_EOL;
                                    echo \'<gmd:city>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'locality\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:city>\' . PHP_EOL;
                                    echo \'<gmd:administrativeArea>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'administrative_area\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:administrativeArea>\' . PHP_EOL;
                                    echo \'<gmd:postalCode>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $contact->field_profile_address[\'und\'][0][\'postal_code\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:postalCode>\' . PHP_EOL;
                                    echo \'<gmd:country>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $country,\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:country>\' . PHP_EOL;
                                    echo \'<gmd:electronicMailAddress>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $contact->field_email[\'und\'][0][\'email\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:electronicMailAddress>\' . PHP_EOL;
                                echo \'</gmd:CI_Address>\' . PHP_EOL;
                            echo \'</gmd:address>\' . PHP_EOL;
                        echo \'</gmd:CI_Contact>\' . PHP_EOL;
                    echo \'</gmd:contactInfo>\' . PHP_EOL;
                    echo \'<gmd:role>\' . PHP_EOL;
                        echo \'<gmd:CI_RoleCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_RoleCode" codeListValue="pointOfContact" codeSpace="007">\' . PHP_EOL;
                            echo \'pointOfContact\' . PHP_EOL;
                        echo \'</gmd:CI_RoleCode>\' . PHP_EOL;
                    echo \'</gmd:role>\' . PHP_EOL;
                echo \'</gmd:CI_ResponsibleParty>\' . PHP_EOL;
            echo \'</gmd:pointOfContact>\' . PHP_EOL;

        if(!empty($md_contact) && $md_contact->nid != $contact->nid){
            echo \'<gmd:pointOfContact>\' . PHP_EOL;
                echo \'<gmd:CI_ResponsibleParty>\' . PHP_EOL;
                    echo \'<gmd:individualName>\' . PHP_EOL;
                        echo \'<gco:CharacterString>\', $md_contact->title, \'</gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:individualName>\' . PHP_EOL;

                    echo \'<gmd:organisationName>\' . PHP_EOL;
                        echo \'<gco:CharacterString>\', $md_contact->field_organization[\'und\'][0][\'value\'], \'</gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:organisationName>\' . PHP_EOL;

                    echo \'<gmd:positionName>\' . PHP_EOL;
                        echo \'<gco:CharacterString>\', $md_position, \'</gco:CharacterString>\' . PHP_EOL;
                    echo \'</gmd:positionName>\' . PHP_EOL;

                    echo \'<gmd:contactInfo>\' . PHP_EOL;
                        echo \'<gmd:CI_Contact>\' . PHP_EOL;
                            echo \'<gmd:phone>\' . PHP_EOL;
                                echo \'<gmd:CI_Telephone>\' . PHP_EOL;
                                    echo \'<gmd:voice>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $md_contact->field_phone[\'und\'][0][\'value\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:voice>\' . PHP_EOL;
                                    echo \'<gmd:facsimile>\' . PHP_EOL;
                                        echo \'<gco:CharacterString />\' . PHP_EOL;
                                    echo \'</gmd:facsimile>\' . PHP_EOL;
                                echo \'</gmd:CI_Telephone>\' . PHP_EOL;
                            echo \'</gmd:phone>\' . PHP_EOL;
                            echo \'<gmd:address>\' . PHP_EOL;
                                echo \'<gmd:CI_Address>\' . PHP_EOL;
                                    echo \'<gmd:deliveryPoint>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'thoroughfare\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:deliveryPoint>\' . PHP_EOL;
                                    echo \'<gmd:city>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'locality\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:city>\' . PHP_EOL;
                                    echo \'<gmd:administrativeArea>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'administrative_area\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:administrativeArea>\' . PHP_EOL;
                                    echo \'<gmd:postalCode>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $md_contact->field_profile_address[\'und\'][0][\'postal_code\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:postalCode>\' . PHP_EOL;
                                    echo \'<gmd:country>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $md_country,\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:country>\' . PHP_EOL;
                                    echo \'<gmd:electronicMailAddress>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>\', $md_contact->field_email[\'und\'][0][\'email\'],\'</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:electronicMailAddress>\' . PHP_EOL;
                                echo \'</gmd:CI_Address>\' . PHP_EOL;
                            echo \'</gmd:address>\' . PHP_EOL;
                        echo \'</gmd:CI_Contact>\' . PHP_EOL;
                    echo \'</gmd:contactInfo>\' . PHP_EOL;
                    echo \'<gmd:role>\' . PHP_EOL;
                        echo \'<gmd:CI_RoleCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_RoleCode" codeListValue="pointOfContact" codeSpace="007">\' . PHP_EOL;
                            echo \'pointOfContact\' . PHP_EOL;
                        echo \'</gmd:CI_RoleCode>\' . PHP_EOL;
                    echo \'</gmd:role>\' . PHP_EOL;
                echo \'</gmd:CI_ResponsibleParty>\' . PHP_EOL;
            echo \'</gmd:pointOfContact>\' . PHP_EOL;
         }
            echo \'<gmd:descriptiveKeywords>\' . PHP_EOL;
                echo \'<gmd:MD_Keywords>\' . PHP_EOL;
                    foreach($node->field_theme_keywords[\'und\'] as $keyword){
                        $term = taxonomy_term_load($keyword[\'tid\']);
                        echo \'<gmd:keyword>\' . PHP_EOL;
                            echo \'<gco:CharacterString>\',$term->name,\'</gco:CharacterString>\' . PHP_EOL;
                        echo \'</gmd:keyword>\' . PHP_EOL;
                     }
                    echo \'<gmd:type>\' . PHP_EOL;
                    echo \'    <gmd:MD_KeywordTypeCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#MD_KeywordTypeCode" codeListValue="theme"  codeSpace="005">theme</gmd:MD_KeywordTypeCode>\' . PHP_EOL;
                    echo \'</gmd:type>\' . PHP_EOL;
                echo \'</gmd:MD_Keywords>\' . PHP_EOL;
            echo \'</gmd:descriptiveKeywords>\' . PHP_EOL;
            echo \'<gmd:descriptiveKeywords>\' . PHP_EOL;
                echo \'<gmd:MD_Keywords>\' . PHP_EOL;
                if(!empty($node->field_place_keywords[\'und\']) && count($node->field_place_keywords[\'und\'] > 0)){
                    foreach($node->field_place_keywords[\'und\'] as $keyword){
                        $term = taxonomy_term_load($keyword[\'tid\']);
                        echo \'<gmd:keyword>\' . PHP_EOL;
                            echo \'<gco:CharacterString>\',$term->name,\'</gco:CharacterString>\' . PHP_EOL;
                        echo \'</gmd:keyword>\' . PHP_EOL;
                    }
                }
                else{
                    echo \'<gmd:keyword nilReason="missing">\' . PHP_EOL;
                    echo \'</gmd:keyword>\' . PHP_EOL;
                }
                    echo \'<gmd:type>\' . PHP_EOL;
                        echo \'<gmd:MD_KeywordTypeCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#MD_KeywordTypeCode" codeListValue="place" codeSpace="002">place</gmd:MD_KeywordTypeCode>\' . PHP_EOL;
                    echo \'</gmd:type>\' . PHP_EOL;
                

                echo \'</gmd:MD_Keywords>\' . PHP_EOL;
            echo \'</gmd:descriptiveKeywords>\' . PHP_EOL;
            echo \'<gmd:language>\' . PHP_EOL;
                echo \'<gco:CharacterString>eng; USA</gco:CharacterString>\' . PHP_EOL;
            echo \'</gmd:language>\' . PHP_EOL;

            foreach($node->field_topic_category_keywords[\'und\'] as $keyword){
                $term = taxonomy_term_load($keyword[\'tid\']);
                $term_name = !empty($term->field_xml_code_list_value[LANGUAGE_NONE][0][\'value\']) ? $term->field_xml_code_list_value[LANGUAGE_NONE][0][\'value\'] : strtolower($term->name);
                echo \'<gmd:topicCategory>\' . PHP_EOL;
                    echo \'<gmd:MD_TopicCategoryCode>\', $term_name, \'</gmd:MD_TopicCategoryCode>\' . PHP_EOL;
                echo \'</gmd:topicCategory>\' . PHP_EOL;
            }

            echo \'<gmd:extent>\' . PHP_EOL;
                echo \'<gmd:EX_Extent id="boundingExtent">\' . PHP_EOL;
                    echo \'<gmd:geographicElement>\' . PHP_EOL;
                        echo \'<gmd:EX_BoundingPolygon>\' . PHP_EOL;
                            echo \'<gmd:polygon>\' . PHP_EOL;

                            if($coordinate_type == \'point\'){
                                echo \'<gml:MultiPoint gml:id="multipoint" srsName="urn:ogc:def:crs:EPSG::4326">\' . PHP_EOL;
                                $count = 1;
                                foreach($node->field_coordinate_list[\'und\'] as $loc){
                                    echo \'<gml:pointMember>\' . PHP_EOL;
                                        echo \'<gml:Point gml:id="multipoint\', $count, \'">\' . PHP_EOL;
                                            echo \'<gml:pos srsDimension="2">\', $loc[\'lat\'] . \' \' . $loc[\'lon\'], \'</gml:pos>\' . PHP_EOL;
                                        echo \'</gml:Point>\' . PHP_EOL;
                                    echo \'</gml:pointMember>\' . PHP_EOL;
                                    $count++;
                                 }

                                echo \'</gml:MultiPoint>\' . PHP_EOL;
                            }
                            if($coordinate_type == \'polygon\'){
                                echo \'<gml:Polygon gml:id="Polygon">\' . PHP_EOL;
                                    echo \'<gml:exterior>\' . PHP_EOL;
                                        echo \'<gml:LinearRing>\' . PHP_EOL;
                                            echo \'<gml:coordinates>\' . PHP_EOL;
                                            foreach($node->field_coordinate_list[\'und\'] as $loc) {
                                                echo($loc[\'lat\'] . \' \' . $loc[\'lon\']) . PHP_EOL;
                                            }
                                            echo \'</gml:coordinates>\' . PHP_EOL;
                                        echo \'</gml:LinearRing>\' . PHP_EOL;
                                    echo \'</gml:exterior>\' . PHP_EOL;
                                echo \'</gml:Polygon>\' . PHP_EOL;
                            }
                            echo \'</gmd:polygon>\' . PHP_EOL;
                        echo \'</gmd:EX_BoundingPolygon>\' . PHP_EOL;
                    echo \'</gmd:geographicElement>\' . PHP_EOL;
                    echo \'<gmd:temporalElement>\' . PHP_EOL;
                        echo \'<gmd:EX_TemporalExtent>\' . PHP_EOL;
                            echo \'<gmd:extent>\' . PHP_EOL;
                                echo \'<gml:TimePeriod gml:id="boundingTemporalExtent">\' . PHP_EOL;
                                    echo \'<gml:description>\', $time_desc, \'</gml:description>\' . PHP_EOL;
                                    echo \'<gml:beginPosition>\', format_date(strtotime($node->field_date_range[\'und\'][0][\'value\']), \'custom\', \'Y-m-d\'),\'</gml:beginPosition>\' . PHP_EOL;
                                    echo \'<gml:endPosition>\', format_date(strtotime($node->field_date_range[\'und\'][0][\'value2\']), \'custom\', \'Y-m-d\'),\'</gml:endPosition>\' . PHP_EOL;
                                echo \'</gml:TimePeriod>\' . PHP_EOL;
                            echo \'</gmd:extent>\' . PHP_EOL;
                        echo \'</gmd:EX_TemporalExtent>\' . PHP_EOL;
                    echo \'</gmd:temporalElement>\' . PHP_EOL;
                echo \'</gmd:EX_Extent>\' . PHP_EOL;
            echo \'</gmd:extent>\' . PHP_EOL;
            echo \'<gmd:supplementalInformation>\' . PHP_EOL;
                echo \'<gco:CharacterString>\', htmlspecialchars($supp_info, ENT_QUOTES),\'</gco:CharacterString>\' . PHP_EOL;
            echo \'</gmd:supplementalInformation>\' . PHP_EOL;
        echo \'</gmd:MD_DataIdentification>\' . PHP_EOL;

?>';
  $handler->display->display_options['fields']['php_10']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_10']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_11']['id'] = 'php_11';
  $handler->display->display_options['fields']['php_11']['table'] = 'views';
  $handler->display->display_options['fields']['php_11']['field'] = 'php';
  $handler->display->display_options['fields']['php_11']['label'] = 'gmd:distributionInfo';
  $handler->display->display_options['fields']['php_11']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_11']['php_output'] = '<?php

$node = $data->_field_data[\'nid\'][\'entity\'];
$udi = !empty($node->field_griidc_udi[\'und\'][0][\'value\']) ? str_replace(":", ".", $node->field_griidc_udi[\'und\'][0][\'value\']) : \'\';
$file_format = \'txt\';

if(!empty($node->field_data_transfer_format[LANGUAGE_NONE])){
    $file_format = \'\';
    foreach($node->field_data_transfer_format[LANGUAGE_NONE] as $format){
        $format_term = taxonomy_term_load($format[\'tid\']);
        $extension = !empty($format_term->field_file_extension[LANGUAGE_NONE][0][\'value\']) ? strtolower($format_term->field_file_extension[LANGUAGE_NONE][0][\'value\']) : strtolower($format_term->field_file_extension->name);
        if(!empty($extension)){
            $file_format .= $extension . ",";
        }
    }

    if(strlen($file_format) > 0){
        $file_format = substr($file_format, 0, strlen($file_format) - 1);
    }
}

switch($node->field_dataset_source[\'und\'][0][\'value\']){
    case \'file\':
        $file_size = !empty($node->field_file_upload[\'und\'][0][\'filesize\']) ? round(($node->field_file_upload[\'und\'][0][\'filesize\']/1024/1024), 3) : \'0\';
        //$file_size = !empty($node->field_file_upload[\'und\'][0][\'filesize\']) ? $node->field_file_upload[\'und\'][0][\'filesize\'] : \'0\';
        break;
    default:
        $file_size = \'0\';
        break;
}

$file_size = !empty($node->ds_field_file_size[LANGUAGE_NONE][0][\'value\']) ? $node->ds_field_file_size[LANGUAGE_NONE][0][\'value\'] : $file_size;

        echo \'<gmd:MD_Distribution>\' . PHP_EOL;
            echo \'<gmd:distributor>\' . PHP_EOL;
                echo \'<gmd:MD_Distributor>\' . PHP_EOL;
                    echo \'<gmd:distributorContact>\' . PHP_EOL;
                        echo \'<gmd:CI_ResponsibleParty>\' . PHP_EOL;
                            echo \'<gmd:organisationName>\' . PHP_EOL;
                                echo \'<gco:CharacterString>Gulf of Mexico Research Initiative Information and Data Cooperative (GRIIDC)</gco:CharacterString>\' . PHP_EOL;
                            echo \'</gmd:organisationName>\' . PHP_EOL;
                            echo \'<gmd:contactInfo>\' . PHP_EOL;
                                echo \'<gmd:CI_Contact>\' . PHP_EOL;
                                    echo \'<gmd:phone>\' . PHP_EOL;
                                        echo \'<gmd:CI_Telephone>\' . PHP_EOL;
                                            echo \'<gmd:voice>\' . PHP_EOL;
                                                echo \'<gco:CharacterString>+1-361-825-3604</gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:voice>\' . PHP_EOL;
                                            echo \'<gmd:facsimile>\' . PHP_EOL;
                                                echo \'<gco:CharacterString>+1-361-825-2050</gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:facsimile>\' . PHP_EOL;
                                        echo \'</gmd:CI_Telephone>\' . PHP_EOL;
                                    echo \'</gmd:phone>\' . PHP_EOL;
                                    echo \'<gmd:address>\' . PHP_EOL;
                                        echo \'<gmd:CI_Address>\' . PHP_EOL;
                                            echo \'<gmd:deliveryPoint>\' . PHP_EOL;
                                                echo \'<gco:CharacterString><![CDATA[6300 Ocean Drive Unit 5869]]></gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:deliveryPoint>\' . PHP_EOL;
                                            echo \'<gmd:city>\' . PHP_EOL;
                                                echo \'<gco:CharacterString>Corpus Christi</gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:city>\' . PHP_EOL;
                                            echo \'<gmd:administrativeArea>\' . PHP_EOL;
                                                echo \'<gco:CharacterString>Texas</gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:administrativeArea>\' . PHP_EOL;
                                            echo \'<gmd:postalCode>\' . PHP_EOL;
                                                echo \'<gco:CharacterString>78412-5869</gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:postalCode>\' . PHP_EOL;
                                            echo \'<gmd:country>\' . PHP_EOL;
                                                echo \'<gco:CharacterString>USA</gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:country>\' . PHP_EOL;
                                            echo \'<gmd:electronicMailAddress>\' . PHP_EOL;
                                                echo \'<gco:CharacterString>griidc@gomri.org</gco:CharacterString>\' . PHP_EOL;
                                            echo \'</gmd:electronicMailAddress>\' . PHP_EOL;
                                        echo \'</gmd:CI_Address>\' . PHP_EOL;
                                    echo \'</gmd:address>\' . PHP_EOL;
                                    echo \'<gmd:onlineResource>\' . PHP_EOL;
                                        echo \'<gmd:CI_OnlineResource>\' . PHP_EOL;
                                            echo \'<gmd:linkage>\' . PHP_EOL;
                                                echo \'<gmd:URL>http://data.gulfresearchinitiative.org</gmd:URL>\' . PHP_EOL;
                                            echo \'</gmd:linkage>\' . PHP_EOL;
                                            echo \'<gmd:protocol>\' . PHP_EOL;
                                                echo \'<gco:CharacterString />\' . PHP_EOL;
                                            echo \'</gmd:protocol>\' . PHP_EOL;
                                        echo \'</gmd:CI_OnlineResource>\' . PHP_EOL;
                                    echo \'</gmd:onlineResource>\' . PHP_EOL;
                                echo \'</gmd:CI_Contact>\' . PHP_EOL;
                            echo \'</gmd:contactInfo>\' . PHP_EOL;
                            echo \'<gmd:role>\' . PHP_EOL;
                                echo \'<gmd:CI_RoleCode codeList="http://www.isotc211.org/2005/resources/Codelist/gmxCodelists.xml#CI_RoleCode" codeListValue="distributor"  codeSpace="005">distributor</gmd:CI_RoleCode>\' . PHP_EOL;
                            echo \'</gmd:role>\' . PHP_EOL;
                        echo \'</gmd:CI_ResponsibleParty>\' . PHP_EOL;
                    echo \'</gmd:distributorContact>\' . PHP_EOL;
                    echo \'<gmd:distributorFormat>\' . PHP_EOL;
                        echo \'<gmd:MD_Format>\' . PHP_EOL;
                        echo \'<gmd:name>\' . PHP_EOL;
                            echo \'<gco:CharacterString>\', $file_format, \'</gco:CharacterString>\' . PHP_EOL;
                        echo \'</gmd:name>\' . PHP_EOL;
                            echo \'<gmd:version gco:nilReason="inapplicable" />\' . PHP_EOL;
                            echo \'<gmd:fileDecompressionTechnique>\' . PHP_EOL;
                                echo \'<gco:CharacterString>zip</gco:CharacterString>\' . PHP_EOL;
                            echo \'</gmd:fileDecompressionTechnique>\' . PHP_EOL;
                        echo \'</gmd:MD_Format>\' . PHP_EOL;
                    echo \'</gmd:distributorFormat>\' . PHP_EOL;
                    echo \'<gmd:distributorTransferOptions>\' . PHP_EOL;
                        echo \'<gmd:MD_DigitalTransferOptions>\' . PHP_EOL;
                            echo \'<gmd:transferSize>\' . PHP_EOL;
                                echo \'<gco:Real>\', $file_size, \'</gco:Real>\' . PHP_EOL;
                            echo \'</gmd:transferSize>\' . PHP_EOL;
                            echo \'<gmd:onLine>\' . PHP_EOL;
                                echo \'<gmd:CI_OnlineResource>\' . PHP_EOL;
                                    echo \'<gmd:linkage>\' . PHP_EOL;
                                        echo \'<gmd:URL>https://data.gulfresearchinitiative.org/data/\', $udi, \'/</gmd:URL>\' . PHP_EOL;
                                    echo \'</gmd:linkage>\' . PHP_EOL;
                                    echo \'<gmd:protocol>\' . PHP_EOL;
                                        echo \'<gco:CharacterString>https</gco:CharacterString>\' . PHP_EOL;
                                    echo \'</gmd:protocol>\' . PHP_EOL;
                                echo \'</gmd:CI_OnlineResource>\' . PHP_EOL;
                            echo \'</gmd:onLine>\' . PHP_EOL;
                        echo \'</gmd:MD_DigitalTransferOptions>\' . PHP_EOL;
                    echo \'</gmd:distributorTransferOptions>\' . PHP_EOL;
                echo \'</gmd:MD_Distributor>\' . PHP_EOL;
            echo \'</gmd:distributor>\' . PHP_EOL;
        echo \'</gmd:MD_Distribution>\' . PHP_EOL;
?>';
  $handler->display->display_options['fields']['php_11']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_11']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'xml');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['filename'] = 'export.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'nodes';
  $handler->display->display_options['style_options']['item_node'] = 'gmi:MI_Metadata';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
    'php' => 'php',
    'php_1' => 'php_1',
    'php_2' => 'php_2',
    'php_3' => 'php_3',
    'php_4' => 'php_4',
    'php_5' => 'php_5',
    'php_6' => 'php_6',
    'php_7' => 'php_7',
    'php_8' => 'php_8',
    'php_9' => 'php_9',
    'php_10' => 'php_10',
    'php_11' => 'php_11',
    'php_12' => 'php_12',
  );
  $handler->display->display_options['path'] = 'dataset/%/export';
  $export['dataset_export'] = $view;

  $view = new view();
  $view->name = 'dataset_file_history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'Dataset File History';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dataset File History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view revisions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'timestamp' => 'timestamp',
    'title' => 'title',
    'field_file_upload' => 'field_file_upload',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_upload' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  /* Relationship: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['ui_name'] = 'Content';
  $handler->display->display_options['relationships']['nid']['label'] = 'Actual Content';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'File upload date';
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
  /* Field: Content (historical data): Data File */
  $handler->display->display_options['fields']['field_file_upload-revision_id']['id'] = 'field_file_upload-revision_id';
  $handler->display->display_options['fields']['field_file_upload-revision_id']['table'] = 'field_revision_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload-revision_id']['field'] = 'field_file_upload-revision_id';
  $handler->display->display_options['fields']['field_file_upload-revision_id']['label'] = 'File Upload';
  $handler->display->display_options['fields']['field_file_upload-revision_id']['click_sort_column'] = 'fid';
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['dataset_file_history'] = $view;

  $view = new view();
  $view->name = 'dataset_monitoring';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset Monitoring';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dataset Monitoring';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_task',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'uid_1' => 'uid_1',
    'field_task' => 'field_task',
    'field_griidc_udi' => 'field_griidc_udi',
    'title' => 'title',
    'field_dataset_contact_person' => 'field_dataset_contact_person',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_griidc_udi';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_task' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_contact_person' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term - ECOGIG tasks';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'task_title' => 'task_title',
    'blog_categories' => 0,
    'blog_tags' => 0,
    'wp_blog_tags' => 0,
    'blog_title' => 0,
    'contact_person_roles' => 0,
    'contribution_keywords' => 0,
    'course_levels' => 0,
    'dataset_place_keywords' => 0,
    'dataset_theme_keywords' => 0,
    'dataset_topic_category_keywords' => 0,
    'gomri_theme' => 0,
    'libraries' => 0,
    'news_topics' => 0,
    'paper_tags' => 0,
    'personnel' => 0,
    'primary_nav' => 0,
    'research_cruise' => 0,
    'status' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['fields']['uid_1']['label'] = 'Contact Person UID';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: Content: Task */
  $handler->display->display_options['fields']['field_task']['id'] = 'field_task';
  $handler->display->display_options['fields']['field_task']['table'] = 'field_data_field_task';
  $handler->display->display_options['fields']['field_task']['field'] = 'field_task';
  $handler->display->display_options['fields']['field_task']['label'] = '';
  $handler->display->display_options['fields']['field_task']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_task']['element_label_colon'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Dataset Contact Person */
  $handler->display->display_options['fields']['field_dataset_contact_person']['id'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['field'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['label'] = 'Dataset Contact';
  $handler->display->display_options['fields']['field_dataset_contact_person']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['alter']['text'] = '[field_dataset_contact_person]';
  $handler->display->display_options['fields']['field_dataset_contact_person']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['alter']['path'] = '/contributions_data/my-datasets/[uid_1]';
  $handler->display->display_options['fields']['field_dataset_contact_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Workflow State';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['group'] = 1;
  /* Filter criterion: Content: Task (field_task) */
  $handler->display->display_options['filters']['field_task_tid']['id'] = 'field_task_tid';
  $handler->display->display_options['filters']['field_task_tid']['table'] = 'field_data_field_task';
  $handler->display->display_options['filters']['field_task_tid']['field'] = 'field_task_tid';
  $handler->display->display_options['filters']['field_task_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_task_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_task_tid']['expose']['operator_id'] = 'field_task_tid_op';
  $handler->display->display_options['filters']['field_task_tid']['expose']['label'] = 'Task';
  $handler->display->display_options['filters']['field_task_tid']['expose']['operator'] = 'field_task_tid_op';
  $handler->display->display_options['filters']['field_task_tid']['expose']['identifier'] = 'field_task_tid';
  $handler->display->display_options['filters']['field_task_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_task_tid']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_task_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_task_tid']['vocabulary'] = 'task_title';
  $handler->display->display_options['filters']['field_task_tid']['hierarchy'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Workflow State';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '2';
  /* Filter criterion: Content: Dataset Contact Person (field_dataset_contact_person) */
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['expose']['operator_id'] = 'field_dataset_contact_person_target_id_op';
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['expose']['label'] = 'Dataset Contact';
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['expose']['operator'] = 'field_dataset_contact_person_target_id_op';
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['expose']['identifier'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_contact_person_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term - ECOGIG tasks';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'task_title' => 'task_title',
    'blog_categories' => 0,
    'blog_tags' => 0,
    'wp_blog_tags' => 0,
    'blog_title' => 0,
    'contact_person_roles' => 0,
    'contribution_keywords' => 0,
    'course_levels' => 0,
    'dataset_place_keywords' => 0,
    'dataset_theme_keywords' => 0,
    'dataset_topic_category_keywords' => 0,
    'gomri_theme' => 0,
    'libraries' => 0,
    'news_topics' => 0,
    'paper_tags' => 0,
    'personnel' => 0,
    'primary_nav' => 0,
    'research_cruise' => 0,
    'status' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Dataset Contact Person Profile */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['ui_name'] = 'Dataset Contact Person Profile';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['label'] = 'Dataset Contact Person Profile';
  /* Relationship: User account for Dataset Contact Person */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User account for Dataset Contact Person';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'User account for Dataset Contact Person';
  $handler->display->display_options['path'] = 'dataset-monitoring';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dataset Monitoring';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['dataset_monitoring'] = $view;

  $view = new view();
  $view->name = 'dataset_progress_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset Progress Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Total */
  $handler = $view->new_display('block', 'Total', 'block_all_datasets');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total Datasets';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;

  /* Display: Active */
  $handler = $view->new_display('block', 'Active', 'block_active');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Active Datasets';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid']['value'] = array(
    19 => '19',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Inactive */
  $handler = $view->new_display('block', 'Inactive', 'block_inactive');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inactive Datasets';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    19 => '19',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Tracks - Identification */
  $handler = $view->new_display('block', 'Tracks - Identification', 'block_identification');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Identification';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    7 => '7',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Tracks - Metadata */
  $handler = $view->new_display('block', 'Tracks - Metadata', 'block_metadata');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Metadata';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    9 => '9',
    11 => '11',
    13 => '13',
    20 => '20',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Tracks - Data Files */
  $handler = $view->new_display('block', 'Tracks - Data Files', 'block_data');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data Files';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    14 => '14',
    15 => '15',
    24 => '24',
    25 => '25',
    16 => '16',
    22 => '22',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Tracks - Permanent Repository */
  $handler = $view->new_display('block', 'Tracks - Permanent Repository', 'block_permanent_repository');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Permanent Repository';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    21 => '21',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Tracks - Availability */
  $handler = $view->new_display('block', 'Tracks - Availability', 'block_availability');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Availability';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    17 => '17',
    18 => '18',
  );
  /* Filter criterion: Workflow current: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['value']['min'] = '2000-01-01';
  $handler->display->display_options['filters']['timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Totals - Workflow State */
  $handler = $view->new_display('block', 'Totals - Workflow State', 'block_status_chart');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Totals by Workflow State';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'sid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'sid' => 'sid',
    'sid_1' => 'sid_1',
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'sid' => '#0d233a',
    'sid_1' => '#4593f6',
  );
  $handler->display->display_options['style_options']['title'] = 'Totals by Workflow State';
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['legend_position'] = 'left';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#2f7ed8',
    1 => '#003e7f',
    2 => '#c0fff9',
    3 => '#b5b5b5',
    4 => '#1aadce',
    5 => '#b0ffb9',
    6 => '#02fe00',
    7 => '#77a1e5',
    8 => '#606060',
    9 => '#a6c96a',
  );
  $handler->display->display_options['style_options']['width'] = '900';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Workflow State';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['sid_1']['label'] = 'Total';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Workflow current: New state name */
  $handler->display->display_options['sorts']['sid']['id'] = 'sid';
  $handler->display->display_options['sorts']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['sorts']['sid']['field'] = 'sid';
  $handler->display->display_options['sorts']['sid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['sid']['order'] = 'DESC';
  $export['dataset_progress_report'] = $view;

  $view = new view();
  $view->name = 'dataset_udis';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset UDIs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['label'] = '';
  $handler->display->display_options['fields']['field_griidc_udi']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['dataset_udis'] = $view;

  $view = new view();
  $view->name = 'dataset_workflow_history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dataset Workflow History';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dataset Workflow History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'comment' => 'comment',
    'old_sid' => 'old_sid',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'comment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'old_sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>[field_griidc_udi]
[title]<h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Workflow history: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['hide_empty'] = TRUE;
  /* Field: Workflow history: Old state name */
  $handler->display->display_options['fields']['old_sid']['id'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['old_sid']['field'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['exclude'] = TRUE;
  /* Field: Workflow history: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status Change';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['text'] = '[old_sid] -> [sid]';
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_griidc_udi']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/workflow-history';
  $export['dataset_workflow_history'] = $view;

  $view = new view();
  $view->name = 'datasets_archived';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Datasets Archived';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
    'name' => 'name',
    'title' => 'title',
    'edit_node' => 'edit_node',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_contrib_author_1']['id'] = 'field_contrib_author_1';
  $handler->display->display_options['fields']['field_contrib_author_1']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author_1']['field'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_author_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contrib_author_1']['delta_offset'] = '0';
  /* Field: Content: Dataset Contact Person */
  $handler->display->display_options['fields']['field_dataset_contact_person']['id'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['field'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['label'] = '';
  $handler->display->display_options['fields']['field_dataset_contact_person']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Author(s)';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_authors][field_contrib_author_1]';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid';
  /* Sort criterion: Content: GRIIDC UDI (field_griidc_udi) */
  $handler->display->display_options['sorts']['field_griidc_udi_value']['id'] = 'field_griidc_udi_value';
  $handler->display->display_options['sorts']['field_griidc_udi_value']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['sorts']['field_griidc_udi_value']['field'] = 'field_griidc_udi_value';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';

  /* Display: Datasets Archived */
  $handler = $view->new_display('block', 'Datasets Archived', 'datasets_archived');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no datasets found with the current user ID (!1) listed as the dataset owner.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  /* Relationship: Contact Person Profile */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['ui_name'] = 'Contact Person Profile';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['label'] = 'Contact Person Profile';
  /* Relationship: Contact Person User Account */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['id'] = 'reverse_field_my_author_profile_user_1';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['ui_name'] = 'Contact Person User Account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['label'] = 'Contact Person User Account';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="btn">[edit_node] </span>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Workflow State';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['block_description'] = 'Datasets - Archived';
  $export['datasets_archived'] = $view;

  $view = new view();
  $view->name = 'my_contributions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Contributions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Participants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Students */
  $handler = $view->new_display('block', 'Students', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Student Participants';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Supervisor Profile */
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['id'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['table'] = 'field_data_field_supervisor_s_';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['field'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['ui_name'] = 'Supervisor Profile';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['label'] = 'Supervisor Profile';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['required'] = TRUE;
  /* Relationship: Supervisor User */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'Supervisor User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'Supervisor User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  /* Relationship: Student Profile */
  $handler->display->display_options['relationships']['field_student_profile_target_id']['id'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['table'] = 'field_data_field_student_profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['field'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['ui_name'] = 'Student Profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['label'] = 'Student Profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Middle Name or Initial */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  /* Field: Content: Expected Year of Completion */
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['id'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['table'] = 'field_data_field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['field'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Thesis Or Research Topic */
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['id'] = 'field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['table'] = 'field_data_field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['field'] = 'field_tesis_or_research_topic';
  /* Field: Content: Link to Dissertation or Thesis */
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['id'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['table'] = 'field_data_field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['field'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['click_sort_column'] = 'url';
  /* Field: Content: Student Type (field_student_type:tid) */
  $handler->display->display_options['fields']['field_student_type_tid']['id'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_tid']['field'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['label'] = 'Educational Role';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'students' => 'students',
  );
  $export['my_contributions'] = $view;

  $view = new view();
  $view->name = 'my_references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My References';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
    'title' => 'title',
    'field_dataset_contact_person' => 'field_dataset_contact_person',
  );
  $handler->display->display_options['style_options']['default'] = 'field_griidc_udi';
  $handler->display->display_options['style_options']['info'] = array(
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_contact_person' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['label'] = '';
  $handler->display->display_options['fields']['field_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_authors']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_contrib_author_1']['id'] = 'field_contrib_author_1';
  $handler->display->display_options['fields']['field_contrib_author_1']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author_1']['field'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_contrib_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contrib_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contrib_author_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contrib_author_1']['delta_offset'] = '0';
  /* Field: Content: Dataset Contact Person */
  $handler->display->display_options['fields']['field_dataset_contact_person']['id'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['field'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['label'] = '';
  $handler->display->display_options['fields']['field_dataset_contact_person']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dataset_contact_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Author(s)';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_authors][field_contrib_author_1]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';

  /* Display: My Publications */
  $handler = $view->new_display('page', 'My Publications', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Publications';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publications' => 'publications',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid']['value'] = array(
    26 => '26',
  );
  $handler->display->display_options['path'] = 'contributions_data/my-publications';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Contributions */
  $handler = $view->new_display('page', 'My Contributions', 'page_my_contrib');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Contributions';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  /* Relationship: Supervisor Profile */
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['id'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['table'] = 'field_data_field_supervisor_s_';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['field'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['ui_name'] = 'Supervisor Profile';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['label'] = 'Supervisor Profile';
  /* Relationship: Supervisor User */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['id'] = 'reverse_field_my_author_profile_user_1';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['relationship'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['ui_name'] = 'Supervisor User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['label'] = 'Supervisor User';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'users';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user_1';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
    'presentation' => 'presentation',
    'public_outreach' => 'public_outreach',
    'publications' => 'publications',
    'students' => 'students',
    'workshop' => 'workshop',
  );
  $handler->display->display_options['path'] = 'contributions_data/my-contributions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Contributions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Datasets */
  $handler = $view->new_display('page', 'My Datasets', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Datasets';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_griidc_udi' => 'field_griidc_udi',
    'title' => 'title',
    'field_dataset_contact_person' => 'field_dataset_contact_person',
    'sid' => 'sid',
    'field_metadata_contact_person' => 'field_metadata_contact_person',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_griidc_udi';
  $handler->display->display_options['style_options']['info'] = array(
    'field_griidc_udi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_contact_person' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_metadata_contact_person' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: Content entity referenced from field_dataset_contact_person */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['ui_name'] = 'Content entity referenced from field_dataset_contact_person';
  /* Relationship: User account for Dataset Contact Person */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User account for Dataset Contact Person';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'User account for Dataset Contact Person';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Dataset Contact Person */
  $handler->display->display_options['fields']['field_dataset_contact_person']['id'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['field'] = 'field_dataset_contact_person';
  $handler->display->display_options['fields']['field_dataset_contact_person']['label'] = 'Dataset Contact';
  $handler->display->display_options['fields']['field_dataset_contact_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Metadata Contact Person */
  $handler->display->display_options['fields']['field_metadata_contact_person']['id'] = 'field_metadata_contact_person';
  $handler->display->display_options['fields']['field_metadata_contact_person']['table'] = 'field_data_field_metadata_contact_person';
  $handler->display->display_options['fields']['field_metadata_contact_person']['field'] = 'field_metadata_contact_person';
  $handler->display->display_options['fields']['field_metadata_contact_person']['label'] = 'Metadata Contact';
  $handler->display->display_options['fields']['field_metadata_contact_person']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_metadata_contact_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['fields']['name']['label'] = 'Owner';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Workflow State';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  $handler->display->display_options['path'] = 'contributions_data/my-datasets';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Datasets';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-contributions-and-data';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Datasets - Owned */
  $handler = $view->new_display('block', 'My Datasets - Owned', 'datasets_owned');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no datasets found with the current user ID (!1) listed as the dataset owner.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  /* Relationship: Contact Person Profile */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['ui_name'] = 'Contact Person Profile';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['label'] = 'Contact Person Profile';
  /* Relationship: Contact Person User Account */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['id'] = 'reverse_field_my_author_profile_user_1';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['ui_name'] = 'Contact Person User Account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['label'] = 'Contact Person User Account';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="btn">[edit_node] </span>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Workflow State';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';
  $handler->display->display_options['block_description'] = 'Datasets - Owned';

  /* Display: My Datasets - Dataset Contact */
  $handler = $view->new_display('block', 'My Datasets - Dataset Contact', 'datasets_contact');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no datasets found with the current user ID (!1) listed as the dataset contact.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  /* Relationship: Contact Person Profile */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['ui_name'] = 'Contact Person Profile';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['label'] = 'Contact Person Profile';
  /* Relationship: Contact Person User Account */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['id'] = 'reverse_field_my_author_profile_user_1';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['ui_name'] = 'Contact Person User Account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['label'] = 'Contact Person User Account';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Metadata Contact Person Profile */
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['id'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['table'] = 'field_data_field_metadata_contact_person';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['field'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['ui_name'] = 'Metadata Contact Person Profile';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['label'] = 'Metadata Contact Person Profile';
  /* Relationship: Metadata Contact Person User Account */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['id'] = 'reverse_field_my_author_profile_user_2';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['ui_name'] = 'Metadata Contact Person User Account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['label'] = 'Metadata Contact Person User Account';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user_1';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';
  $handler->display->display_options['block_description'] = 'Datasets - Contact';

  /* Display: My Datasets - Metadata Contact */
  $handler = $view->new_display('block', 'My Datasets - Metadata Contact', 'datasets_metadata_contact');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no datasets found with the current user ID (!1) listed as the metadata contact.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content entity referenced from field_contrib_author */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Content entity referenced from field_contrib_author';
  /* Relationship: User referencing Content from field_my_author_profile */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'User referencing Content from field_my_author_profile';
  /* Relationship: Contact Person Profile */
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['id'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['table'] = 'field_data_field_dataset_contact_person';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['field'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['ui_name'] = 'Contact Person Profile';
  $handler->display->display_options['relationships']['field_dataset_contact_person_target_id']['label'] = 'Contact Person Profile';
  /* Relationship: Contact Person User Account */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['id'] = 'reverse_field_my_author_profile_user_1';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['relationship'] = 'field_dataset_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['ui_name'] = 'Contact Person User Account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_1']['label'] = 'Contact Person User Account';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Metadata Contact Person Profile */
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['id'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['table'] = 'field_data_field_metadata_contact_person';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['field'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['ui_name'] = 'Metadata Contact Person Profile';
  $handler->display->display_options['relationships']['field_metadata_contact_person_target_id']['label'] = 'Metadata Contact Person Profile';
  /* Relationship: Metadata Contact Person User Account */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['id'] = 'reverse_field_my_author_profile_user_2';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['relationship'] = 'field_metadata_contact_person_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['ui_name'] = 'Metadata Contact Person User Account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user_2']['label'] = 'Metadata Contact Person User Account';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user_2';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';
  $handler->display->display_options['block_description'] = 'Datasets - Metadata Contact';

  /* Display: Dataset Header */
  $handler = $view->new_display('block', 'Dataset Header', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'User account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h1><a href=\'/node/[nid]\'>[title]\'s</a> Datasets</h1>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['block_description'] = 'My Datasets - Header';

  /* Display: My Datasets - Stakeholder */
  $handler = $view->new_display('block', 'My Datasets - Stakeholder', 'datasets_stakeholder');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no datasets found with the current user ID (!1)  listed as a stakeholder.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Stakeholder Profile */
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['id'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['table'] = 'field_data_field_dataset_stakeholders';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['field'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['ui_name'] = 'Stakeholder Profile';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['label'] = 'Stakeholder Profile';
  $handler->display->display_options['relationships']['field_dataset_stakeholders_target_id']['required'] = TRUE;
  /* Relationship: Stakeholder User Account */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_dataset_stakeholders_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'Stakeholder User Account';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'Stakeholder User Account';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: GRIIDC UDI */
  $handler->display->display_options['fields']['field_griidc_udi']['id'] = 'field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['table'] = 'field_data_field_griidc_udi';
  $handler->display->display_options['fields']['field_griidc_udi']['field'] = 'field_griidc_udi';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Record Type (field_record_type) */
  $handler->display->display_options['filters']['field_record_type_tid']['id'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['table'] = 'field_data_field_record_type';
  $handler->display->display_options['filters']['field_record_type_tid']['field'] = 'field_record_type_tid';
  $handler->display->display_options['filters']['field_record_type_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_record_type_tid']['value'] = array(
    1075 => '1075',
  );
  $handler->display->display_options['filters']['field_record_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_record_type_tid']['vocabulary'] = 'dataset_record_types';
  $handler->display->display_options['block_description'] = 'Datasets - Metadata Contact';
  $export['my_references'] = $view;

  $view = new view();
  $view->name = 'my_templates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Templates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Dataset Templates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You don\'t currently have any dataset templates defined. To use a dataset as a template, check the "Use this Dataset as a template" box when creating or editing a dataset.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['clone_node']['text'] = 'Create Dataset from template';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Use this Dataset as a Template (field_use_this_dataset_as_a_temp) */
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['id'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['table'] = 'field_data_field_use_this_dataset_as_a_temp';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['field'] = 'field_use_this_dataset_as_a_temp_value';
  $handler->display->display_options['filters']['field_use_this_dataset_as_a_temp_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'contributions_data/my-datasets/my-templates';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_templates');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['clone_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['clone_node']['element_wrapper_class'] = 'btn btn-templates';
  $handler->display->display_options['fields']['clone_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['clone_node']['text'] = 'Create New Dataset';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'btn btn-templates';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit this Template';
  $export['my_templates'] = $view;

  $view = new view();
  $view->name = 'pi_contributions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PI Contributions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
    'presentation' => 'presentation',
    'public_outreach' => 'public_outreach',
    'publications' => 'publications',
    'students' => 'students',
    'workshop' => 'workshop',
  );

  /* Display: Workshops */
  $handler = $view->new_display('block', 'Workshops', 'block_workshops');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Workshops';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_internal_external' => 'field_internal_external',
    'field_date_range' => 'field_date_range',
    'title' => 'title',
    'field_location_city' => 'field_location_city',
    'field_organizer_s_' => 'field_organizer_s_',
    'body' => 'body',
    'field_participant_name' => 'field_participant_name',
    'field_meeting_website' => 'field_meeting_website',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_range';
  $handler->display->display_options['style_options']['info'] = array(
    'field_internal_external' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizer_s_' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Organizer Profile */
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['id'] = 'field_organizer_s__target_id';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['table'] = 'field_data_field_organizer_s_';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['field'] = 'field_organizer_s__target_id';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['ui_name'] = 'Organizer Profile';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['label'] = 'Organizer Profile';
  $handler->display->display_options['relationships']['field_organizer_s__target_id']['required'] = TRUE;
  /* Relationship: Organizer User */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_organizer_s__target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'Organizer User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'Organizer User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Internal / External */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s)';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_city']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Organizer(s) */
  $handler->display->display_options['fields']['field_organizer_s_']['id'] = 'field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['table'] = 'field_data_field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['field'] = 'field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_organizer_s_']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Objective(s)';
  /* Field: Content: Participant Name */
  $handler->display->display_options['fields']['field_participant_name']['id'] = 'field_participant_name';
  $handler->display->display_options['fields']['field_participant_name']['table'] = 'field_data_field_participant_name';
  $handler->display->display_options['fields']['field_participant_name']['field'] = 'field_participant_name';
  $handler->display->display_options['fields']['field_participant_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_participant_name']['delta_offset'] = '0';
  /* Field: Content: Meeting Website */
  $handler->display->display_options['fields']['field_meeting_website']['id'] = 'field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['table'] = 'field_data_field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['field'] = 'field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Publications */
  $handler = $view->new_display('block', 'Publications', 'block_publications');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_any_authors_student' => 'field_any_authors_student',
    'field_doi' => 'field_doi',
    'field_gomri_theme' => 'field_gomri_theme',
    'field_date_published' => 'field_date_published',
    'field_publication_notes' => 'field_publication_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_published';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_any_authors_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gomri_theme' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_published' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Author Profile */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Author Profile';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['label'] = 'Author Profile';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: Author User */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'Author User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'Author User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Citation */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['label'] = 'Publication Citation';
  /* Field: Content: Is the presenter a student? */
  $handler->display->display_options['fields']['field_any_authors_student']['id'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['table'] = 'field_data_field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['field'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['empty'] = 'N';
  $handler->display->display_options['fields']['field_any_authors_student']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_any_authors_student']['hide_alter_empty'] = FALSE;
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['fields']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid_1']['field'] = 'sid';
  $handler->display->display_options['fields']['sid_1']['label'] = 'Peer-reviewed Publication Status';
  /* Field: Content: GOMRI Theme */
  $handler->display->display_options['fields']['field_gomri_theme']['id'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['table'] = 'field_data_field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['field'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['delta_offset'] = '0';
  /* Field: Content: Link to Publication and/or PDF */
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['id'] = 'field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['table'] = 'field_data_field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['field'] = 'field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_publication_notes']['id'] = 'field_publication_notes';
  $handler->display->display_options['fields']['field_publication_notes']['table'] = 'field_data_field_publication_notes';
  $handler->display->display_options['fields']['field_publication_notes']['field'] = 'field_publication_notes';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_date_published']['id'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['fields']['field_date_published']['field'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Submission Date */
  $handler->display->display_options['fields']['field_submission_date']['id'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['field'] = 'field_submission_date';
  $handler->display->display_options['fields']['field_submission_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid']['value'] = array(
    26 => '26',
  );

  /* Display: Presentations */
  $handler = $view->new_display('block', 'Presentations', 'block_presentations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Presentations';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_contrib_author' => 'field_contrib_author',
    'field_student_authors' => 'field_student_authors',
    'title' => 'title',
    'field_presentation_type' => 'field_presentation_type',
    'field_presenter_profile' => 'field_presenter_profile',
    'field_any_authors_student' => 'field_any_authors_student',
    'field_conference_name' => 'field_conference_name',
    'field_date_range' => 'field_date_range',
    'field_location_city' => 'field_location_city',
    'field_gomri_theme' => 'field_gomri_theme',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_range';
  $handler->display->display_options['style_options']['info'] = array(
    'field_contrib_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_authors' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_presentation_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_presenter_profile' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_any_authors_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gomri_theme' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Author Profile */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Author Profile';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['label'] = 'Author Profile';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: Author User */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'Author User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'Author User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_contrib_author']['id'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['field'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contrib_author']['delta_offset'] = '0';
  /* Field: Content: Are any of the authors students? */
  $handler->display->display_options['fields']['field_student_authors']['id'] = 'field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['table'] = 'field_data_field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['field'] = 'field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['empty'] = 'No';
  $handler->display->display_options['fields']['field_student_authors']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_student_authors']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Presentation Type */
  $handler->display->display_options['fields']['field_presentation_type']['id'] = 'field_presentation_type';
  $handler->display->display_options['fields']['field_presentation_type']['table'] = 'field_data_field_presentation_type';
  $handler->display->display_options['fields']['field_presentation_type']['field'] = 'field_presentation_type';
  /* Field: Content: Presenter */
  $handler->display->display_options['fields']['field_presenter_profile']['id'] = 'field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['table'] = 'field_data_field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['field'] = 'field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_presenter_profile']['delta_offset'] = '0';
  /* Field: Content: Is the presenter a student? */
  $handler->display->display_options['fields']['field_any_authors_student']['id'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['table'] = 'field_data_field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['field'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['label'] = 'Is the Presenter a student?';
  $handler->display->display_options['fields']['field_any_authors_student']['empty'] = 'N';
  $handler->display->display_options['fields']['field_any_authors_student']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_any_authors_student']['hide_alter_empty'] = FALSE;
  /* Field: Content: Conference Name */
  $handler->display->display_options['fields']['field_conference_name']['id'] = 'field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['table'] = 'field_data_field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['field'] = 'field_conference_name';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s)';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_city']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: GOMRI Theme */
  $handler->display->display_options['fields']['field_gomri_theme']['id'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['table'] = 'field_data_field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['field'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: Presentation Link */
  $handler->display->display_options['fields']['field_link_single']['id'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['table'] = 'field_data_field_link_single';
  $handler->display->display_options['fields']['field_link_single']['field'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['expose']['label'] = 'Date -  start date (field_date_range)';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Participants */
  $handler = $view->new_display('block', 'Participants', 'block_participants');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Participants';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_participant_role_tid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email' => 'field_email',
    'field_institutional_department' => 'field_institutional_department',
    'body' => 'body',
    'field_participant_role_date_from_timestamp' => 'field_participant_role_date_from_timestamp',
    'field_participant_role_date_to_timestamp' => 'field_participant_role_date_to_timestamp',
    'field_participant_role_tid' => 'field_participant_role_tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institutional_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_from_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_to_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Participant Profile */
  $handler->display->display_options['relationships']['field_participant_name_target_id']['id'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['table'] = 'field_data_field_participant_name';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['field'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['ui_name'] = 'Participant Profile';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['label'] = 'Participant Profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_participant_name_target_id';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_participant_name_target_id';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  /* Field: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Participant Role(s) (field_participant_role:tid) */
  $handler->display->display_options['fields']['field_participant_role_tid']['id'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_tid']['field'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['label'] = 'Role';
  $handler->display->display_options['fields']['field_participant_role_tid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['granularity'] = 'day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Student Participants */
  $handler = $view->new_display('block', 'Student Participants', 'block_students');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Student Participants';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_student_type_tid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_participant_role_date_to_timestamp' => 'field_participant_role_date_to_timestamp',
    'field_participant_role_date_from_timestamp' => 'field_participant_role_date_from_timestamp',
    'field_middle_name' => 'field_middle_name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_expected_yr_of_completion' => 'field_expected_yr_of_completion',
    'field_institutional_department' => 'field_institutional_department',
    'field_link_to_dissertation_or_th' => 'field_link_to_dissertation_or_th',
    'field_supervisor_s_' => 'field_supervisor_s_',
    'field_tesis_or_research_topic' => 'field_tesis_or_research_topic',
    'field_email' => 'field_email',
    'field_student_type_tid' => 'field_student_type_tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_to_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_from_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expected_yr_of_completion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institutional_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link_to_dissertation_or_th' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_supervisor_s_' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tesis_or_research_topic' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_type_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Student Profile */
  $handler->display->display_options['relationships']['field_student_profile_target_id']['id'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['table'] = 'field_data_field_student_profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['field'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['ui_name'] = 'Student Profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['label'] = 'Student Profile';
  /* Relationship: Supervisor Profile */
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['id'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['table'] = 'field_data_field_supervisor_s_';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['field'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['ui_name'] = 'Supervisor Profile';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['label'] = 'Supervisor Profile';
  $handler->display->display_options['relationships']['field_supervisor_s__target_id']['required'] = TRUE;
  /* Relationship: Supervisor User */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_supervisor_s__target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'Supervisor User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'Supervisor User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Middle Name or Initial */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  /* Field: Content: Supervisor(s) */
  $handler->display->display_options['fields']['field_supervisor_s_']['id'] = 'field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['table'] = 'field_data_field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['field'] = 'field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_supervisor_s_']['delta_offset'] = '0';
  /* Field: Content: Expected Year of Completion */
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['id'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['table'] = 'field_data_field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['field'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Thesis Or Research Topic */
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['id'] = 'field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['table'] = 'field_data_field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['field'] = 'field_tesis_or_research_topic';
  /* Field: Content: Link to Dissertation or Thesis */
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['id'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['table'] = 'field_data_field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['field'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['type'] = 'link_url';
  /* Field: Content: Student Type (field_student_type:tid) */
  $handler->display->display_options['fields']['field_student_type_tid']['id'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_tid']['field'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['label'] = 'Educational Role';
  $handler->display->display_options['fields']['field_student_type_tid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Outreach */
  $handler = $view->new_display('block', 'Outreach', 'block_outreach');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Public Outreach';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_other',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_outreach_type' => 'field_outreach_type',
    'field_other' => 'field_other',
    'title' => 'title',
    'field_date_range' => 'field_date_range',
    'field_po_partners_in_activity' => 'field_po_partners_in_activity',
    'body' => 'body',
    'field_po_target_audience_s_' => 'field_po_target_audience_s_',
    'field_po_number_impacted' => 'field_po_number_impacted',
    'field_impacts_outcomes' => 'field_impacts_outcomes',
    'field_website_url' => 'field_website_url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_outreach_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_po_partners_in_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_po_target_audience_s_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_po_number_impacted' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_impacts_outcomes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Author Profile */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['ui_name'] = 'Author Profile';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['label'] = 'Author Profile';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Relationship: Author User */
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['id'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['field'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['ui_name'] = 'Author User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['label'] = 'Author User';
  $handler->display->display_options['relationships']['reverse_field_my_author_profile_user']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Outreach Type */
  $handler->display->display_options['fields']['field_outreach_type']['id'] = 'field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['table'] = 'field_data_field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['field'] = 'field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['exclude'] = TRUE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other']['id'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['table'] = 'field_data_field_other';
  $handler->display->display_options['fields']['field_other']['field'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['label'] = '';
  $handler->display->display_options['fields']['field_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other']['alter']['text'] = '[field_outreach_type] - [field_other]';
  $handler->display->display_options['fields']['field_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other']['empty'] = '[field_outreach_type]';
  $handler->display->display_options['fields']['field_other']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name of Activity';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s) or Date Range';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Partners in Activity */
  $handler->display->display_options['fields']['field_po_partners_in_activity']['id'] = 'field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['table'] = 'field_data_field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['field'] = 'field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['label'] = 'Partners in the Activity';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Deliverable(s)';
  /* Field: Content: Target Audience(s) */
  $handler->display->display_options['fields']['field_po_target_audience_s_']['id'] = 'field_po_target_audience_s_';
  $handler->display->display_options['fields']['field_po_target_audience_s_']['table'] = 'field_data_field_po_target_audience_s_';
  $handler->display->display_options['fields']['field_po_target_audience_s_']['field'] = 'field_po_target_audience_s_';
  /* Field: Content: Number Impacted */
  $handler->display->display_options['fields']['field_po_number_impacted']['id'] = 'field_po_number_impacted';
  $handler->display->display_options['fields']['field_po_number_impacted']['table'] = 'field_data_field_po_number_impacted';
  $handler->display->display_options['fields']['field_po_number_impacted']['field'] = 'field_po_number_impacted';
  /* Field: Content: Impacts And Outcomes */
  $handler->display->display_options['fields']['field_impacts_outcomes']['id'] = 'field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['table'] = 'field_data_field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['field'] = 'field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['label'] = 'Impacts / Outcomes';
  /* Field: Content: Website Address */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_website_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_url']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_my_author_profile_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['pi_contributions'] = $view;

  $view = new view();
  $view->name = 'profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['profiles'] = $view;

  $view = new view();
  $view->name = 'publications_by_author';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications by Author';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['id'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['field'] = 'field_contrib_author_target_id';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['label'] = 'Author(s)';
  $handler->display->display_options['relationships']['field_contrib_author_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['sorts']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['sorts']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_contrib_author_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['publications_by_author'] = $view;

  $view = new view();
  $view->name = 'quarterly_pi_contribution_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Quarterly PI Contribution Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Quarterly PI Contribution Activity';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name], [field_first_name] ';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = '/contributions_data/contribution/[uid]';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['empty'] = 'never';
  $handler->display->display_options['fields']['access']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    4 => 'AND',
    3 => 'AND',
    2 => 'AND',
    5 => 'AND',
    6 => 'AND',
    10 => 'AND',
    9 => 'AND',
    8 => 'AND',
    7 => 'AND',
    11 => 'AND',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Participant From */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['ui_name'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['group'] = 1;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['label'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['identifier'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 3;
  /* Filter criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['group'] = 3;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['label'] = 'Student From';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['identifier'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 2;
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['label'] = 'Participant To';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['identifier'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 4;
  /* Filter criterion: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['group'] = 4;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['label'] = 'Student To';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['identifier'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_4']['id'] = 'type_4';
  $handler->display->display_options['filters']['type_4']['table'] = 'node';
  $handler->display->display_options['filters']['type_4']['field'] = 'type';
  $handler->display->display_options['filters']['type_4']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_4']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_4']['group'] = 5;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 5;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Presentation From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_7']['id'] = 'type_7';
  $handler->display->display_options['filters']['type_7']['table'] = 'node';
  $handler->display->display_options['filters']['type_7']['field'] = 'type';
  $handler->display->display_options['filters']['type_7']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_7']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_7']['group'] = 8;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_1']['id'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_1']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['group'] = 8;
  $handler->display->display_options['filters']['field_date_range_value2_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator_id'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['label'] = 'Public Outreach To';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['identifier'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_6']['id'] = 'type_6';
  $handler->display->display_options['filters']['type_6']['table'] = 'node';
  $handler->display->display_options['filters']['type_6']['field'] = 'type';
  $handler->display->display_options['filters']['type_6']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_6']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_6']['group'] = 7;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_1']['id'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_1']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['group'] = 7;
  $handler->display->display_options['filters']['field_date_range_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator_id'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['label'] = 'Public Outreach From';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['identifier'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_5']['id'] = 'type_5';
  $handler->display->display_options['filters']['type_5']['table'] = 'node';
  $handler->display->display_options['filters']['type_5']['field'] = 'type';
  $handler->display->display_options['filters']['type_5']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_5']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_5']['group'] = 6;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 6;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Presentation To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_8']['id'] = 'type_8';
  $handler->display->display_options['filters']['type_8']['table'] = 'node';
  $handler->display->display_options['filters']['type_8']['field'] = 'type';
  $handler->display->display_options['filters']['type_8']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_8']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type_8']['group'] = 9;
  /* Filter criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_published_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 9;
  $handler->display->display_options['filters']['field_date_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator_id'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['identifier'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_published_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_published_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_9']['id'] = 'type_9';
  $handler->display->display_options['filters']['type_9']['table'] = 'node';
  $handler->display->display_options['filters']['type_9']['field'] = 'type';
  $handler->display->display_options['filters']['type_9']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_9']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_9']['group'] = 10;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_2']['id'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_2']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['group'] = 10;
  $handler->display->display_options['filters']['field_date_range_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator_id'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['label'] = 'Workshop From';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['identifier'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_10']['id'] = 'type_10';
  $handler->display->display_options['filters']['type_10']['table'] = 'node';
  $handler->display->display_options['filters']['type_10']['field'] = 'type';
  $handler->display->display_options['filters']['type_10']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_10']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_10']['group'] = 11;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_2']['id'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['group'] = 11;
  $handler->display->display_options['filters']['field_date_range_value2_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator_id'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['label'] = 'Workshop To';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['identifier'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_2']['year_range'] = '2005:2100';

  /* Display: Owned Contributions */
  $handler = $view->new_display('block', 'Owned Contributions', 'block');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No PIs have made any contributions for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    4 => 'AND',
    5 => 'AND',
    3 => 'AND',
    2 => 'AND',
    6 => 'AND',
    7 => 'AND',
    11 => 'AND',
    12 => 'AND',
    10 => 'AND',
    9 => 'AND',
    8 => 'AND',
    13 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Participant From */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['ui_name'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['group'] = 1;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['label'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['identifier'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 4;
  /* Filter criterion: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['group'] = 4;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['label'] = 'Student To';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['identifier'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 3;
  /* Filter criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['group'] = 3;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['label'] = 'Student From';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['identifier'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 2;
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['label'] = 'Participant To';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['identifier'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_4']['id'] = 'type_4';
  $handler->display->display_options['filters']['type_4']['table'] = 'node';
  $handler->display->display_options['filters']['type_4']['field'] = 'type';
  $handler->display->display_options['filters']['type_4']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_4']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_4']['group'] = 5;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 5;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Presentation From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_5']['id'] = 'type_5';
  $handler->display->display_options['filters']['type_5']['table'] = 'node';
  $handler->display->display_options['filters']['type_5']['field'] = 'type';
  $handler->display->display_options['filters']['type_5']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_5']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_5']['group'] = 6;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 6;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Presentation To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_9']['id'] = 'type_9';
  $handler->display->display_options['filters']['type_9']['table'] = 'node';
  $handler->display->display_options['filters']['type_9']['field'] = 'type';
  $handler->display->display_options['filters']['type_9']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_9']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_9']['group'] = 10;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_2']['id'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_2']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['group'] = 10;
  $handler->display->display_options['filters']['field_date_range_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator_id'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['label'] = 'Workshop From';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['identifier'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_8']['id'] = 'type_8';
  $handler->display->display_options['filters']['type_8']['table'] = 'node';
  $handler->display->display_options['filters']['type_8']['field'] = 'type';
  $handler->display->display_options['filters']['type_8']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_8']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type_8']['group'] = 9;
  /* Filter criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_published_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 9;
  $handler->display->display_options['filters']['field_date_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator_id'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['identifier'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_published_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_published_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_7']['id'] = 'type_7';
  $handler->display->display_options['filters']['type_7']['table'] = 'node';
  $handler->display->display_options['filters']['type_7']['field'] = 'type';
  $handler->display->display_options['filters']['type_7']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_7']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_7']['group'] = 8;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_1']['id'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_1']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['group'] = 8;
  $handler->display->display_options['filters']['field_date_range_value2_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator_id'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['label'] = 'Public Outreach To';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['identifier'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_6']['id'] = 'type_6';
  $handler->display->display_options['filters']['type_6']['table'] = 'node';
  $handler->display->display_options['filters']['type_6']['field'] = 'type';
  $handler->display->display_options['filters']['type_6']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_6']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_6']['group'] = 7;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_1']['id'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_1']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['group'] = 7;
  $handler->display->display_options['filters']['field_date_range_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator_id'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['label'] = 'Public Outreach From';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['identifier'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_10']['id'] = 'type_10';
  $handler->display->display_options['filters']['type_10']['table'] = 'node';
  $handler->display->display_options['filters']['type_10']['field'] = 'type';
  $handler->display->display_options['filters']['type_10']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_10']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_10']['group'] = 11;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_2']['id'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['group'] = 11;
  $handler->display->display_options['filters']['field_date_range_value2_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator_id'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['label'] = 'Workshop To';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['identifier'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 12;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_11']['id'] = 'type_11';
  $handler->display->display_options['filters']['type_11']['table'] = 'node';
  $handler->display->display_options['filters']['type_11']['field'] = 'type';
  $handler->display->display_options['filters']['type_11']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_11']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_11']['group'] = 12;
  /* Filter criterion: Participant From Outside */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['id'] = 'field_participant_role_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['ui_name'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['group'] = 12;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['label'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Participant To Outside */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['id'] = 'field_participant_role_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['ui_name'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['group'] = 12;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['label'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 13;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_12']['id'] = 'type_12';
  $handler->display->display_options['filters']['type_12']['table'] = 'node';
  $handler->display->display_options['filters']['type_12']['field'] = 'type';
  $handler->display->display_options['filters']['type_12']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_12']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_12']['group'] = 13;
  /* Filter criterion: Student From Outside */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['id'] = 'field_student_type_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['ui_name'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['group'] = 13;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['label'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['identifier'] = 'field_student_type_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Student To Outside */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['id'] = 'field_student_type_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['ui_name'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['group'] = 13;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['label'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['identifier'] = 'field_student_type_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['block_description'] = 'PIs with Owned Contributions';

  /* Display: Nothing to Report */
  $handler = $view->new_display('block', 'Nothing to Report', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No PIs have listed "Nothing to Report" for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Quarter (field_quarter) */
  $handler->display->display_options['filters']['field_quarter_value']['id'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['filters']['field_quarter_value']['field'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_quarter_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_quarter_value']['expose']['operator_id'] = 'field_quarter_value_op';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['label'] = 'Quarter (field_quarter)';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['operator'] = 'field_quarter_value_op';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['identifier'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'quarterly_report_no_activity_rec' => 'quarterly_report_no_activity_rec',
  );
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_year_value']['value']['value'] = '2100';
  $handler->display->display_options['filters']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_value']['expose']['operator_id'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['label'] = 'Year (field_year)';
  $handler->display->display_options['filters']['field_year_value']['expose']['operator'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['identifier'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_year_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_year_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_year_value']['year_range'] = '2005:2100';
  $handler->display->display_options['block_description'] = 'PIs with Nothing to Report';

  /* Display: No Contributions */
  $handler = $view->new_display('block', 'No Contributions', 'block_no_contributions');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No PIs have made any contributions for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name], [field_first_name] ';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = '/contributions_data/contribution/[uid]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
    'presentation' => 'presentation',
    'public_outreach' => 'public_outreach',
    'publications' => 'publications',
    'students' => 'students',
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['label'] = 'Student To';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['identifier'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['label'] = 'Student From';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['identifier'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Participant From */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['ui_name'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['label'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['identifier'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Presentation From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['label'] = 'Participant To';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['identifier'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Presentation To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_2']['id'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_2']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator_id'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['label'] = 'Workshop From';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['identifier'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_1']['id'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_1']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator_id'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['label'] = 'Public Outreach To';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['identifier'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_1']['id'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_1']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator_id'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['label'] = 'Public Outreach From';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['identifier'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_2']['id'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator_id'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['label'] = 'Workshop To';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['identifier'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_published_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 2;
  $handler->display->display_options['filters']['field_date_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator_id'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['identifier'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_published_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_published_value']['year_range'] = '2005:2100';
  $handler->display->display_options['block_description'] = 'PIs with No Contributions';

  /* Display: All Users */
  $handler = $view->new_display('block', 'All Users', 'block_all_users');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '344',
    1 => '156',
  );
  $handler->display->display_options['block_description'] = 'All Users';

  /* Display: No Contributions */
  $handler = $view->new_display('block', 'No Contributions', 'block_no_contrib');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No PIs have made any contributions for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    5 => 'AND',
    6 => 'AND',
    4 => 'AND',
    3 => 'AND',
    2 => 'AND',
    7 => 'AND',
    8 => 'AND',
    12 => 'AND',
    13 => 'AND',
    11 => 'AND',
    10 => 'AND',
    9 => 'AND',
    14 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Participant From */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['ui_name'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['group'] = 1;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['label'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['identifier'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 4;
  /* Filter criterion: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['group'] = 4;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['label'] = 'Student To';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['identifier'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_4']['id'] = 'type_4';
  $handler->display->display_options['filters']['type_4']['table'] = 'node';
  $handler->display->display_options['filters']['type_4']['field'] = 'type';
  $handler->display->display_options['filters']['type_4']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_4']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_4']['group'] = 5;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 5;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Presentation From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 3;
  /* Filter criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['group'] = 3;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['label'] = 'Student From';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['identifier'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 2;
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['label'] = 'Participant To';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['identifier'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_5']['id'] = 'type_5';
  $handler->display->display_options['filters']['type_5']['table'] = 'node';
  $handler->display->display_options['filters']['type_5']['field'] = 'type';
  $handler->display->display_options['filters']['type_5']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_5']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_5']['group'] = 6;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 6;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Presentation To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_6']['id'] = 'type_6';
  $handler->display->display_options['filters']['type_6']['table'] = 'node';
  $handler->display->display_options['filters']['type_6']['field'] = 'type';
  $handler->display->display_options['filters']['type_6']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_6']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_6']['group'] = 7;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_1']['id'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_1']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_1']['group'] = 7;
  $handler->display->display_options['filters']['field_date_range_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator_id'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['label'] = 'Public Outreach From';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['operator'] = 'field_date_range_value_1_op';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['identifier'] = 'field_date_range_value_1';
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_10']['id'] = 'type_10';
  $handler->display->display_options['filters']['type_10']['table'] = 'node';
  $handler->display->display_options['filters']['type_10']['field'] = 'type';
  $handler->display->display_options['filters']['type_10']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_10']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_10']['group'] = 11;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_2']['id'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_2']['group'] = 11;
  $handler->display->display_options['filters']['field_date_range_value2_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator_id'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['label'] = 'Workshop To';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['operator'] = 'field_date_range_value2_2_op';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['identifier'] = 'field_date_range_value2_2';
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_11']['id'] = 'type_11';
  $handler->display->display_options['filters']['type_11']['table'] = 'node';
  $handler->display->display_options['filters']['type_11']['field'] = 'type';
  $handler->display->display_options['filters']['type_11']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_11']['value'] = array(
    'quarterly_report_no_activity_rec' => 'quarterly_report_no_activity_rec',
  );
  $handler->display->display_options['filters']['type_11']['group'] = 12;
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_year_value']['group'] = 12;
  $handler->display->display_options['filters']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_value']['expose']['operator_id'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['label'] = 'Year (field_year)';
  $handler->display->display_options['filters']['field_year_value']['expose']['operator'] = 'field_year_value_op';
  $handler->display->display_options['filters']['field_year_value']['expose']['identifier'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_year_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_year_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_year_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Quarter (field_quarter) */
  $handler->display->display_options['filters']['field_quarter_value']['id'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['filters']['field_quarter_value']['field'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_quarter_value']['group'] = 12;
  $handler->display->display_options['filters']['field_quarter_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_quarter_value']['expose']['operator_id'] = 'field_quarter_value_op';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['label'] = 'Quarter (field_quarter)';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['operator'] = 'field_quarter_value_op';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['identifier'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_9']['id'] = 'type_9';
  $handler->display->display_options['filters']['type_9']['table'] = 'node';
  $handler->display->display_options['filters']['type_9']['field'] = 'type';
  $handler->display->display_options['filters']['type_9']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_9']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_9']['group'] = 10;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value_2']['id'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value_2']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value_2']['group'] = 10;
  $handler->display->display_options['filters']['field_date_range_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator_id'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['label'] = 'Workshop From';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['operator'] = 'field_date_range_value_2_op';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['identifier'] = 'field_date_range_value_2';
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value_2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value_2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value_2']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_8']['id'] = 'type_8';
  $handler->display->display_options['filters']['type_8']['table'] = 'node';
  $handler->display->display_options['filters']['type_8']['field'] = 'type';
  $handler->display->display_options['filters']['type_8']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_8']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type_8']['group'] = 9;
  /* Filter criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_published_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 9;
  $handler->display->display_options['filters']['field_date_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator_id'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['identifier'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_published_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_published_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_7']['id'] = 'type_7';
  $handler->display->display_options['filters']['type_7']['table'] = 'node';
  $handler->display->display_options['filters']['type_7']['field'] = 'type';
  $handler->display->display_options['filters']['type_7']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_7']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_7']['group'] = 8;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2_1']['id'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2_1']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_date_range_value2_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2_1']['group'] = 8;
  $handler->display->display_options['filters']['field_date_range_value2_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator_id'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['label'] = 'Public Outreach To';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['operator'] = 'field_date_range_value2_1_op';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['identifier'] = 'field_date_range_value2_1';
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2_1']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 13;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_12']['id'] = 'type_12';
  $handler->display->display_options['filters']['type_12']['table'] = 'node';
  $handler->display->display_options['filters']['type_12']['field'] = 'type';
  $handler->display->display_options['filters']['type_12']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_12']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_12']['group'] = 13;
  /* Filter criterion: Participant From Outside */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['id'] = 'field_participant_role_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['ui_name'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['group'] = 13;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['label'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Participant To Outside */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['id'] = 'field_participant_role_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['ui_name'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['group'] = 13;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['label'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['relationship'] = 'uid';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 14;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_13']['id'] = 'type_13';
  $handler->display->display_options['filters']['type_13']['table'] = 'node';
  $handler->display->display_options['filters']['type_13']['field'] = 'type';
  $handler->display->display_options['filters']['type_13']['relationship'] = 'uid';
  $handler->display->display_options['filters']['type_13']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_13']['group'] = 14;
  /* Filter criterion: Student From Outside */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['id'] = 'field_student_type_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['ui_name'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['group'] = 14;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['label'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['identifier'] = 'field_student_type_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Student To Outside */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['id'] = 'field_student_type_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['ui_name'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['group'] = 14;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['label'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['identifier'] = 'field_student_type_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['block_description'] = 'PIs with No Contributions';
  $export['quarterly_pi_contribution_activity'] = $view;

  $view = new view();
  $view->name = 'quarterly_report_v2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Quarterly Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Workshops */
  $handler = $view->new_display('block', 'Workshops', 'block_workshops');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Workshops';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_internal_external' => 'field_internal_external',
    'field_date_range' => 'field_date_range',
    'title' => 'title',
    'field_location_city' => 'field_location_city',
    'field_organizer_s_' => 'field_organizer_s_',
    'body' => 'body',
    'field_participant_name' => 'field_participant_name',
    'field_meeting_website' => 'field_meeting_website',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_range';
  $handler->display->display_options['style_options']['info'] = array(
    'field_internal_external' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizer_s_' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No workshops found for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name] ';
  /* Field: Content: Internal / External */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s)';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_city']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Organizer(s) */
  $handler->display->display_options['fields']['field_organizer_s_']['id'] = 'field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['table'] = 'field_data_field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['field'] = 'field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_organizer_s_']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Objective(s)';
  /* Field: Content: Number of Participants */
  $handler->display->display_options['fields']['field_number_of_participants']['id'] = 'field_number_of_participants';
  $handler->display->display_options['fields']['field_number_of_participants']['table'] = 'field_data_field_number_of_participants';
  $handler->display->display_options['fields']['field_number_of_participants']['field'] = 'field_number_of_participants';
  $handler->display->display_options['fields']['field_number_of_participants']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Participant Name */
  $handler->display->display_options['fields']['field_participant_name']['id'] = 'field_participant_name';
  $handler->display->display_options['fields']['field_participant_name']['table'] = 'field_data_field_participant_name';
  $handler->display->display_options['fields']['field_participant_name']['field'] = 'field_participant_name';
  $handler->display->display_options['fields']['field_participant_name']['label'] = 'Participants';
  $handler->display->display_options['fields']['field_participant_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_participant_name']['delta_offset'] = '0';
  /* Field: Content: Meeting Website */
  $handler->display->display_options['fields']['field_meeting_website']['id'] = 'field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['table'] = 'field_data_field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['field'] = 'field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Workshop From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Workshop To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';

  /* Display: Publications */
  $handler = $view->new_display('block', 'Publications', 'block_publications');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_any_authors_student' => 'field_any_authors_student',
    'field_doi' => 'field_doi',
    'field_gomri_theme' => 'field_gomri_theme',
    'field_date_published' => 'field_date_published',
    'field_publication_notes' => 'field_publication_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_published';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_any_authors_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gomri_theme' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_published' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No publications found for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name] ';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Grant */
  $handler->display->display_options['fields']['field_grant']['id'] = 'field_grant';
  $handler->display->display_options['fields']['field_grant']['table'] = 'field_data_field_grant';
  $handler->display->display_options['fields']['field_grant']['field'] = 'field_grant';
  /* Field: Content: Citation */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['label'] = 'Publication Citation';
  /* Field: Content: Is the presenter a student? */
  $handler->display->display_options['fields']['field_any_authors_student']['id'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['table'] = 'field_data_field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['field'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['label'] = 'Are any of the authors students?';
  $handler->display->display_options['fields']['field_any_authors_student']['empty'] = 'N';
  $handler->display->display_options['fields']['field_any_authors_student']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_any_authors_student']['hide_alter_empty'] = FALSE;
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  /* Field: Workflow history: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Peer-reviewed Publication Status';
  /* Field: Content: GOMRI Theme */
  $handler->display->display_options['fields']['field_gomri_theme']['id'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['table'] = 'field_data_field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['field'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['delta_offset'] = '0';
  /* Field: Content: Link to Publication and/or PDF */
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['id'] = 'field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['table'] = 'field_data_field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['field'] = 'field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_publication_notes']['id'] = 'field_publication_notes';
  $handler->display->display_options['fields']['field_publication_notes']['table'] = 'field_data_field_publication_notes';
  $handler->display->display_options['fields']['field_publication_notes']['field'] = 'field_publication_notes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_published_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator_id'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['identifier'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_published_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_published_value']['year_range'] = '2005:2100';
  /* Filter criterion: Workflow history: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid']['value'] = array(
    '' => '',
    2 => '2',
    26 => '26',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Submission Date */
  $handler->display->display_options['filters']['field_submission_date_value']['id'] = 'field_submission_date_value';
  $handler->display->display_options['filters']['field_submission_date_value']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['filters']['field_submission_date_value']['field'] = 'field_submission_date_value';
  $handler->display->display_options['filters']['field_submission_date_value']['ui_name'] = 'Submission Date';
  $handler->display->display_options['filters']['field_submission_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_submission_date_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_submission_date_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_submission_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_submission_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['operator_id'] = 'field_submission_date_value_op';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['label'] = 'Submission Date';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['operator'] = 'field_submission_date_value_op';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['identifier'] = 'field_submission_date_value';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_submission_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_submission_date_value']['year_range'] = '2100:2100';
  /* Filter criterion: Workflow history: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    '' => '',
    2 => '2',
    26 => '26',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 2;

  /* Display: Conference Presentations */
  $handler = $view->new_display('block', 'Conference Presentations', 'block_presentations');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_contrib_author' => 'field_contrib_author',
    'field_student_authors' => 'field_student_authors',
    'title' => 'title',
    'field_presentation_type' => 'field_presentation_type',
    'field_presenter_profile' => 'field_presenter_profile',
    'field_any_authors_student' => 'field_any_authors_student',
    'field_conference_name' => 'field_conference_name',
    'field_date_range' => 'field_date_range',
    'field_location_city' => 'field_location_city',
    'field_gomri_theme' => 'field_gomri_theme',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_range';
  $handler->display->display_options['style_options']['info'] = array(
    'field_contrib_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_authors' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_presentation_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_presenter_profile' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_any_authors_student' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gomri_theme' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No presentations found for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name]';
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_contrib_author']['id'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['field'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contrib_author']['delta_offset'] = '0';
  /* Field: Content: Are any of the authors students? */
  $handler->display->display_options['fields']['field_student_authors']['id'] = 'field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['table'] = 'field_data_field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['field'] = 'field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['empty'] = 'No';
  $handler->display->display_options['fields']['field_student_authors']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_student_authors']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Presentation Type */
  $handler->display->display_options['fields']['field_presentation_type']['id'] = 'field_presentation_type';
  $handler->display->display_options['fields']['field_presentation_type']['table'] = 'field_data_field_presentation_type';
  $handler->display->display_options['fields']['field_presentation_type']['field'] = 'field_presentation_type';
  /* Field: Content: Presenter */
  $handler->display->display_options['fields']['field_presenter_profile']['id'] = 'field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['table'] = 'field_data_field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['field'] = 'field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_presenter_profile']['delta_offset'] = '0';
  /* Field: Content: Is the presenter a student? */
  $handler->display->display_options['fields']['field_any_authors_student']['id'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['table'] = 'field_data_field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['field'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['label'] = 'Is the Presenter a student?';
  $handler->display->display_options['fields']['field_any_authors_student']['empty'] = 'N';
  $handler->display->display_options['fields']['field_any_authors_student']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_any_authors_student']['hide_alter_empty'] = FALSE;
  /* Field: Content: Conference Name */
  $handler->display->display_options['fields']['field_conference_name']['id'] = 'field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['table'] = 'field_data_field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['field'] = 'field_conference_name';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s)';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_city']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: GOMRI Theme */
  $handler->display->display_options['fields']['field_gomri_theme']['id'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['table'] = 'field_data_field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['field'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: Presentation Link */
  $handler->display->display_options['fields']['field_link_single']['id'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['table'] = 'field_data_field_link_single';
  $handler->display->display_options['fields']['field_link_single']['field'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['expose']['label'] = 'Date -  start date (field_date_range)';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Presentation From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Presentation To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';

  /* Display: Participants */
  $handler = $view->new_display('block', 'Participants', 'block_participants');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_participant_role_tid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email' => 'field_email',
    'field_institutional_department' => 'field_institutional_department',
    'body' => 'body',
    'field_participant_role_date_from_timestamp' => 'field_participant_role_date_from_timestamp',
    'field_participant_role_date_to_timestamp' => 'field_participant_role_date_to_timestamp',
    'field_participant_role_tid' => 'field_participant_role_tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institutional_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_from_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_to_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No participants found for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Participant Profile */
  $handler->display->display_options['relationships']['field_participant_name_target_id']['id'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['table'] = 'field_data_field_participant_name';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['field'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['ui_name'] = 'Participant Profile';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['label'] = 'Participant Profile';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_participant_name_target_id';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_participant_name_target_id';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  /* Field: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Participant Role(s) (field_participant_role:tid) */
  $handler->display->display_options['fields']['field_participant_role_tid']['id'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_tid']['field'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['label'] = 'Role';
  $handler->display->display_options['fields']['field_participant_role_tid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['granularity'] = 'day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['group'] = 1;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['label'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['identifier'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['label'] = 'Participant To';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['identifier'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Participant From Outside */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['id'] = 'field_participant_role_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['ui_name'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['label'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Participant To Outside */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['id'] = 'field_participant_role_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['ui_name'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['label'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Student Participants */
  $handler = $view->new_display('block', 'Student Participants', 'block_students');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_student_type_tid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_participant_role_date_to_timestamp' => 'field_participant_role_date_to_timestamp',
    'field_participant_role_date_from_timestamp' => 'field_participant_role_date_from_timestamp',
    'field_middle_name' => 'field_middle_name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_expected_yr_of_completion' => 'field_expected_yr_of_completion',
    'field_institutional_department' => 'field_institutional_department',
    'field_link_to_dissertation_or_th' => 'field_link_to_dissertation_or_th',
    'field_supervisor_s_' => 'field_supervisor_s_',
    'field_tesis_or_research_topic' => 'field_tesis_or_research_topic',
    'field_email' => 'field_email',
    'field_student_type_tid' => 'field_student_type_tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_to_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_participant_role_date_from_timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expected_yr_of_completion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institutional_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link_to_dissertation_or_th' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_supervisor_s_' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tesis_or_research_topic' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_type_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No student participants found for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Student Profile */
  $handler->display->display_options['relationships']['field_student_profile_target_id']['id'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['table'] = 'field_data_field_student_profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['field'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['ui_name'] = 'Student Profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['label'] = 'Student Profile';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  /* Field: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Middle Name or Initial */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['type'] = 'hs_taxonomy_term_reference_hierarchical_links';
  /* Field: Content: Supervisor(s) */
  $handler->display->display_options['fields']['field_supervisor_s_']['id'] = 'field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['table'] = 'field_data_field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['field'] = 'field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_supervisor_s_']['delta_offset'] = '0';
  /* Field: Content: Expected Year of Completion */
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['id'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['table'] = 'field_data_field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['field'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Thesis Or Research Topic */
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['id'] = 'field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['table'] = 'field_data_field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['field'] = 'field_tesis_or_research_topic';
  /* Field: Content: Link to Dissertation or Thesis */
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['id'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['table'] = 'field_data_field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['field'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['type'] = 'link_url';
  /* Field: Content: Student Type (field_student_type:tid) */
  $handler->display->display_options['fields']['field_student_type_tid']['id'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_tid']['field'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['label'] = 'Educational Role';
  $handler->display->display_options['fields']['field_student_type_tid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['group'] = 1;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['label'] = 'Student From';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['identifier'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['label'] = 'Student To';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['identifier'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Student From Outside */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['id'] = 'field_student_type_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['ui_name'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['label'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['identifier'] = 'field_student_type_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Student To Outside */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['id'] = 'field_student_type_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['ui_name'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['label'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['identifier'] = 'field_student_type_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );

  /* Display: Outreach */
  $handler = $view->new_display('block', 'Outreach', 'block_outreach');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_other',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_outreach_type' => 'field_outreach_type',
    'field_other' => 'field_other',
    'title' => 'title',
    'field_date_range' => 'field_date_range',
    'field_po_partners_in_activity' => 'field_po_partners_in_activity',
    'body' => 'body',
    'field_po_target_audience_s_' => 'field_po_target_audience_s_',
    'field_po_number_impacted' => 'field_po_number_impacted',
    'field_impacts_outcomes' => 'field_impacts_outcomes',
    'field_website_url' => 'field_website_url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_outreach_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_po_partners_in_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_po_target_audience_s_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_po_number_impacted' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_impacts_outcomes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No outreach contributions found for the selected quarter.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name]';
  /* Field: Content: Outreach Type */
  $handler->display->display_options['fields']['field_outreach_type']['id'] = 'field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['table'] = 'field_data_field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['field'] = 'field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['exclude'] = TRUE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other']['id'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['table'] = 'field_data_field_other';
  $handler->display->display_options['fields']['field_other']['field'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['label'] = '';
  $handler->display->display_options['fields']['field_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other']['alter']['text'] = '[field_outreach_type] - [field_other]';
  $handler->display->display_options['fields']['field_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other']['empty'] = '[field_outreach_type]';
  $handler->display->display_options['fields']['field_other']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name of Activity';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s) or Date Range';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Partners in Activity */
  $handler->display->display_options['fields']['field_po_partners_in_activity']['id'] = 'field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['table'] = 'field_data_field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['field'] = 'field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['label'] = 'Partners in the Activity';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Deliverable(s)';
  /* Field: Content: Target Audience(s) */
  $handler->display->display_options['fields']['field_po_target_audience_s_']['id'] = 'field_po_target_audience_s_';
  $handler->display->display_options['fields']['field_po_target_audience_s_']['table'] = 'field_data_field_po_target_audience_s_';
  $handler->display->display_options['fields']['field_po_target_audience_s_']['field'] = 'field_po_target_audience_s_';
  /* Field: Content: Number Impacted */
  $handler->display->display_options['fields']['field_po_number_impacted']['id'] = 'field_po_number_impacted';
  $handler->display->display_options['fields']['field_po_number_impacted']['table'] = 'field_data_field_po_number_impacted';
  $handler->display->display_options['fields']['field_po_number_impacted']['field'] = 'field_po_number_impacted';
  /* Field: Content: Impacts And Outcomes */
  $handler->display->display_options['fields']['field_impacts_outcomes']['id'] = 'field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['table'] = 'field_data_field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['field'] = 'field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['label'] = 'Impacts / Outcomes';
  /* Field: Content: Website Address */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['label'] = 'URL';
  $handler->display->display_options['fields']['field_website_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_url']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Outreach From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Outreach To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';

  /* Display: Workshop CSV */
  $handler = $view->new_display('views_data_export', 'Workshop CSV', 'workshops');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'quarterly_report_%display_%1-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Internal / External */
  $handler->display->display_options['fields']['field_internal_external']['id'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['table'] = 'field_data_field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['field'] = 'field_internal_external';
  $handler->display->display_options['fields']['field_internal_external']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s)';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_city']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Organizer(s) */
  $handler->display->display_options['fields']['field_organizer_s_']['id'] = 'field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['table'] = 'field_data_field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['field'] = 'field_organizer_s_';
  $handler->display->display_options['fields']['field_organizer_s_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_organizer_s_']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Objective(s)';
  /* Field: Content: Number of Participants */
  $handler->display->display_options['fields']['field_number_of_participants']['id'] = 'field_number_of_participants';
  $handler->display->display_options['fields']['field_number_of_participants']['table'] = 'field_data_field_number_of_participants';
  $handler->display->display_options['fields']['field_number_of_participants']['field'] = 'field_number_of_participants';
  $handler->display->display_options['fields']['field_number_of_participants']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Meeting Website */
  $handler->display->display_options['fields']['field_meeting_website']['id'] = 'field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['table'] = 'field_data_field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['field'] = 'field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_meeting_website']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Workshop From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'workshop' => 'workshop',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Workshop To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';
  $handler->display->display_options['path'] = 'reports/quarterly-report/%/export-workshops';
  $handler->display->display_options['displays'] = array(
    'block_workshops' => 'block_workshops',
    'default' => 0,
    'block_publications' => 0,
    'block_presentations' => 0,
    'block_participants' => 0,
    'block_students' => 0,
    'block_outreach' => 0,
  );

  /* Display: Publications CSV */
  $handler = $view->new_display('views_data_export', 'Publications CSV', 'publications');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'quarterly_report_%display_%1-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Grant */
  $handler->display->display_options['fields']['field_grant']['id'] = 'field_grant';
  $handler->display->display_options['fields']['field_grant']['table'] = 'field_data_field_grant';
  $handler->display->display_options['fields']['field_grant']['field'] = 'field_grant';
  /* Field: Content: Citation */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['label'] = 'Publication Citation';
  /* Field: Content: Is the presenter a student? */
  $handler->display->display_options['fields']['field_any_authors_student_1']['id'] = 'field_any_authors_student_1';
  $handler->display->display_options['fields']['field_any_authors_student_1']['table'] = 'field_data_field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student_1']['field'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student_1']['label'] = 'Are any of the authors students?';
  $handler->display->display_options['fields']['field_any_authors_student_1']['empty'] = 'N';
  $handler->display->display_options['fields']['field_any_authors_student_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: DOI */
  $handler->display->display_options['fields']['field_doi']['id'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['table'] = 'field_data_field_doi';
  $handler->display->display_options['fields']['field_doi']['field'] = 'field_doi';
  $handler->display->display_options['fields']['field_doi']['type'] = 'text_plain';
  /* Field: Workflow history: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Peer-reviewed Publication Status';
  /* Field: Content: GOMRI Theme */
  $handler->display->display_options['fields']['field_gomri_theme']['id'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['table'] = 'field_data_field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['field'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gomri_theme']['delta_offset'] = '0';
  /* Field: Content: Link to Publication and/or PDF */
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['id'] = 'field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['table'] = 'field_data_field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['field'] = 'field_link_to_publication_and_or';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_to_publication_and_or']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_publication_notes']['id'] = 'field_publication_notes';
  $handler->display->display_options['fields']['field_publication_notes']['table'] = 'field_data_field_publication_notes';
  $handler->display->display_options['fields']['field_publication_notes']['field'] = 'field_publication_notes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['sorts']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['sorts']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['sorts']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication Date (field_date_published) */
  $handler->display->display_options['filters']['field_date_published_value']['id'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['table'] = 'field_data_field_date_published';
  $handler->display->display_options['filters']['field_date_published_value']['field'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_published_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_published_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator_id'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['operator'] = 'field_date_published_value_op';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['identifier'] = 'field_date_published_value';
  $handler->display->display_options['filters']['field_date_published_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_published_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_published_value']['year_range'] = '2005:2100';
  /* Filter criterion: Workflow history: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid']['value'] = array(
    '' => '',
    2 => '2',
    26 => '26',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Submission Date */
  $handler->display->display_options['filters']['field_submission_date_value']['id'] = 'field_submission_date_value';
  $handler->display->display_options['filters']['field_submission_date_value']['table'] = 'field_data_field_submission_date';
  $handler->display->display_options['filters']['field_submission_date_value']['field'] = 'field_submission_date_value';
  $handler->display->display_options['filters']['field_submission_date_value']['ui_name'] = 'Submission Date';
  $handler->display->display_options['filters']['field_submission_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_submission_date_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_submission_date_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_submission_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_submission_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['operator_id'] = 'field_submission_date_value_op';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['label'] = 'Submission Date';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['operator'] = 'field_submission_date_value_op';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['identifier'] = 'field_submission_date_value';
  $handler->display->display_options['filters']['field_submission_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_submission_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_submission_date_value']['year_range'] = '2005:2100';
  /* Filter criterion: Workflow history: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_history';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    '' => '',
    2 => '2',
    26 => '26',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 2;
  $handler->display->display_options['path'] = 'reports/quarterly-report/%/export-publications';
  $handler->display->display_options['displays'] = array(
    'block_publications' => 'block_publications',
    'default' => 0,
    'block_workshops' => 0,
    'block_presentations' => 0,
    'block_participants' => 0,
    'block_students' => 0,
    'block_outreach' => 0,
  );

  /* Display: Conference Presentations CSV */
  $handler = $view->new_display('views_data_export', 'Conference Presentations CSV', 'presentations');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'quarterly_report_%display_%1-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_contrib_author']['id'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['table'] = 'field_data_field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['field'] = 'field_contrib_author';
  $handler->display->display_options['fields']['field_contrib_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contrib_author']['delta_offset'] = '0';
  /* Field: Content: Are any of the authors students? */
  $handler->display->display_options['fields']['field_student_authors']['id'] = 'field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['table'] = 'field_data_field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['field'] = 'field_student_authors';
  $handler->display->display_options['fields']['field_student_authors']['empty'] = 'N';
  $handler->display->display_options['fields']['field_student_authors']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_student_authors']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Presentation Type */
  $handler->display->display_options['fields']['field_presentation_type']['id'] = 'field_presentation_type';
  $handler->display->display_options['fields']['field_presentation_type']['table'] = 'field_data_field_presentation_type';
  $handler->display->display_options['fields']['field_presentation_type']['field'] = 'field_presentation_type';
  /* Field: Content: Presenter */
  $handler->display->display_options['fields']['field_presenter_profile']['id'] = 'field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['table'] = 'field_data_field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['field'] = 'field_presenter_profile';
  $handler->display->display_options['fields']['field_presenter_profile']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_presenter_profile']['delta_offset'] = '0';
  /* Field: Content: Is the presenter a student? */
  $handler->display->display_options['fields']['field_any_authors_student']['id'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['table'] = 'field_data_field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['field'] = 'field_any_authors_student';
  $handler->display->display_options['fields']['field_any_authors_student']['empty'] = 'N';
  $handler->display->display_options['fields']['field_any_authors_student']['hide_alter_empty'] = FALSE;
  /* Field: Content: Conference Name */
  $handler->display->display_options['fields']['field_conference_name']['id'] = 'field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['table'] = 'field_data_field_conference_name';
  $handler->display->display_options['fields']['field_conference_name']['field'] = 'field_conference_name';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_city']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: GOMRI Theme */
  $handler->display->display_options['fields']['field_gomri_theme']['id'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['table'] = 'field_data_field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['field'] = 'field_gomri_theme';
  $handler->display->display_options['fields']['field_gomri_theme']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gomri_theme']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  /* Field: Content: Presentation Link */
  $handler->display->display_options['fields']['field_link_single']['id'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['table'] = 'field_data_field_link_single';
  $handler->display->display_options['fields']['field_link_single']['field'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['label'] = 'Presentation URL';
  $handler->display->display_options['fields']['field_link_single']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_single']['type'] = 'link_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Presentation From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'presentation' => 'presentation',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Presentation To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';
  $handler->display->display_options['path'] = 'reports/quarterly-report/%/export-presentations';
  $handler->display->display_options['displays'] = array(
    'block_presentations' => 'block_presentations',
    'default' => 0,
    'block_workshops' => 0,
    'block_publications' => 0,
    'block_participants' => 0,
    'block_students' => 0,
    'block_outreach' => 0,
  );

  /* Display: Students CSV */
  $handler = $view->new_display('views_data_export', 'Students CSV', 'students');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'quarterly_report_%display_%1-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Student Profile */
  $handler->display->display_options['relationships']['field_student_profile_target_id']['id'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['table'] = 'field_data_field_student_profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['field'] = 'field_student_profile_target_id';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['ui_name'] = 'Student Profile';
  $handler->display->display_options['relationships']['field_student_profile_target_id']['label'] = 'Student Profile';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Middle Name or Initial */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['relationship'] = 'field_student_profile_target_id';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_student_profile_target_id';
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Supervisor(s) */
  $handler->display->display_options['fields']['field_supervisor_s_']['id'] = 'field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['table'] = 'field_data_field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['field'] = 'field_supervisor_s_';
  $handler->display->display_options['fields']['field_supervisor_s_']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_supervisor_s_']['delta_offset'] = '0';
  /* Field: Content: Expected Year of Completion */
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['id'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['table'] = 'field_data_field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['field'] = 'field_expected_yr_of_completion';
  $handler->display->display_options['fields']['field_expected_yr_of_completion']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Thesis Or Research Topic */
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['id'] = 'field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['table'] = 'field_data_field_tesis_or_research_topic';
  $handler->display->display_options['fields']['field_tesis_or_research_topic']['field'] = 'field_tesis_or_research_topic';
  /* Field: Content: Link to Dissertation or Thesis */
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['id'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['table'] = 'field_data_field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['field'] = 'field_link_to_dissertation_or_th';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_dissertation_or_th']['type'] = 'link_plain';
  /* Field: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_student_type_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Student Type (field_student_type:tid) */
  $handler->display->display_options['fields']['field_student_type_tid']['id'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['fields']['field_student_type_tid']['field'] = 'field_student_type_tid';
  $handler->display->display_options['fields']['field_student_type_tid']['label'] = 'Role';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['sorts']['field_student_type_date_from_timestamp']['granularity'] = 'day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Student Type (field_student_type:date_from_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['id'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['group'] = 1;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['label'] = 'Student From';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['operator'] = 'field_student_type_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['identifier'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Student Type (field_student_type:date_to_timestamp) */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['id'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['label'] = 'Student To';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['operator'] = 'field_student_type_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['identifier'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'students' => 'students',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Student From Outside */
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['id'] = 'field_student_type_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['field'] = 'field_student_type_date_from_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['ui_name'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['label'] = 'Student From Outside';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['operator'] = 'field_student_type_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['identifier'] = 'field_student_type_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_student_type_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Student To Outside */
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['id'] = 'field_student_type_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['table'] = 'field_data_field_student_type';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['field'] = 'field_student_type_date_to_timestamp';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['ui_name'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator_id'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['label'] = 'Student To Outside';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['operator'] = 'field_student_type_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['identifier'] = 'field_student_type_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_student_type_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['path'] = 'reports/quarterly-report/%/export-students';
  $handler->display->display_options['displays'] = array(
    'block_students' => 'block_students',
    'default' => 0,
    'block_workshops' => 0,
    'block_publications' => 0,
    'block_presentations' => 0,
    'block_participants' => 0,
    'block_outreach' => 0,
  );

  /* Display: Participants CSV */
  $handler = $view->new_display('views_data_export', 'Participants CSV', 'participants');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'quarterly_report_%display_%1-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Participant Profile */
  $handler->display->display_options['relationships']['field_participant_name_target_id']['id'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['table'] = 'field_data_field_participant_name';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['field'] = 'field_participant_name_target_id';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['ui_name'] = 'Participant Profile';
  $handler->display->display_options['relationships']['field_participant_name_target_id']['label'] = 'Participant Profile';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name_1']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Full Name';
  /* Field: Content: Participant Role(s) (field_participant_role:tid) */
  $handler->display->display_options['fields']['field_participant_role_tid']['id'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_tid']['field'] = 'field_participant_role_tid';
  $handler->display->display_options['fields']['field_participant_role_tid']['label'] = 'Role';
  /* Field: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_to_timestamp']['second_date_format'] = 'long';
  /* Field: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['custom_date_format'] = 'm/Y';
  $handler->display->display_options['fields']['field_participant_role_date_from_timestamp']['second_date_format'] = 'long';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_participant_name_target_id';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_participant_name_target_id';
  /* Field: Content: Middle Name or Initial */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['relationship'] = 'field_participant_name_target_id';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Content: Institutional Department */
  $handler->display->display_options['fields']['field_institutional_department']['id'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['table'] = 'field_data_field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['field'] = 'field_institutional_department';
  $handler->display->display_options['fields']['field_institutional_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Participant Role(s) (field_participant_role:tid) */
  $handler->display->display_options['sorts']['field_participant_role_tid']['id'] = 'field_participant_role_tid';
  $handler->display->display_options['sorts']['field_participant_role_tid']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['sorts']['field_participant_role_tid']['field'] = 'field_participant_role_tid';
  /* Sort criterion: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['sorts']['field_participant_role_date_from_timestamp']['granularity'] = 'day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_from_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['id'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['group'] = 1;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['label'] = 'Participant From';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['operator'] = 'field_participant_role_date_from_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['identifier'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Participant Role(s) (field_participant_role:date_to_timestamp) */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['id'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['group'] = 2;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['label'] = 'Participant To';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['operator'] = 'field_participant_role_date_to_timestamp_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['identifier'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'participant' => 'participant',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Participant From Outside */
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['id'] = 'field_participant_role_date_from_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['field'] = 'field_participant_role_date_from_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['ui_name'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['label'] = 'Participant From Outside';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['operator'] = 'field_participant_role_date_from_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_from_timestamp_min';
  $handler->display->display_options['filters']['field_participant_role_date_from_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  /* Filter criterion: Participant To Outside */
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['id'] = 'field_participant_role_date_to_timestamp_1';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['table'] = 'field_data_field_participant_role';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['field'] = 'field_participant_role_date_to_timestamp';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['ui_name'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['value']['value'] = '2100-01';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['group'] = 3;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator_id'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['label'] = 'Participant To Outside';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['operator'] = 'field_participant_role_date_to_timestamp_1_op';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['identifier'] = 'field_participant_role_date_to_timestamp_max';
  $handler->display->display_options['filters']['field_participant_role_date_to_timestamp_1']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['path'] = 'reports/quarterly-report/%/export-participants';
  $handler->display->display_options['displays'] = array(
    'block_participants' => 'block_participants',
    'default' => 0,
    'block_workshops' => 0,
    'block_publications' => 0,
    'block_presentations' => 0,
    'block_students' => 0,
    'block_outreach' => 0,
  );

  /* Display: Outreach CSV */
  $handler = $view->new_display('views_data_export', 'Outreach CSV', 'outreach');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    9 => '9',
    10 => '10',
    5 => '5',
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'quarterly_report_%display_%1-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Workflow history: Old state sid */
  $handler->display->display_options['relationships']['old_state']['id'] = 'old_state';
  $handler->display->display_options['relationships']['old_state']['table'] = 'workflow_node_history';
  $handler->display->display_options['relationships']['old_state']['field'] = 'old_state';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Contribution Owner';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Outreach Type */
  $handler->display->display_options['fields']['field_outreach_type']['id'] = 'field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['table'] = 'field_data_field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['field'] = 'field_outreach_type';
  $handler->display->display_options['fields']['field_outreach_type']['label'] = 'Outreach Type Value';
  $handler->display->display_options['fields']['field_outreach_type']['exclude'] = TRUE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other']['id'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['table'] = 'field_data_field_other';
  $handler->display->display_options['fields']['field_other']['field'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['label'] = 'Outreach Type';
  $handler->display->display_options['fields']['field_other']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other']['alter']['text'] = '[field_outreach_type] - [field_other]';
  $handler->display->display_options['fields']['field_other']['empty'] = '[field_outreach_type]';
  $handler->display->display_options['fields']['field_other']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name of Activity';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Date(s) or Date Range';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Partners in Activity */
  $handler->display->display_options['fields']['field_po_partners_in_activity']['id'] = 'field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['table'] = 'field_data_field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['field'] = 'field_po_partners_in_activity';
  $handler->display->display_options['fields']['field_po_partners_in_activity']['label'] = 'Partners in the Activity';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Deliverable(s)';
  /* Field: Content: Target Audience(s) */
  $handler->display->display_options['fields']['field_po_target_audience_s_']['id'] = 'field_po_target_audience_s_';
  $handler->display->display_options['fields']['field_po_target_audience_s_']['table'] = 'field_data_field_po_target_audience_s_';
  $handler->display->display_options['fields']['field_po_target_audience_s_']['field'] = 'field_po_target_audience_s_';
  /* Field: Content: Number Impacted */
  $handler->display->display_options['fields']['field_po_number_impacted']['id'] = 'field_po_number_impacted';
  $handler->display->display_options['fields']['field_po_number_impacted']['table'] = 'field_data_field_po_number_impacted';
  $handler->display->display_options['fields']['field_po_number_impacted']['field'] = 'field_po_number_impacted';
  /* Field: Content: Impacts And Outcomes */
  $handler->display->display_options['fields']['field_impacts_outcomes']['id'] = 'field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['table'] = 'field_data_field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['field'] = 'field_impacts_outcomes';
  $handler->display->display_options['fields']['field_impacts_outcomes']['label'] = 'Impacts / Outcomes';
  /* Field: Content: Website Address */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_website_url']['delta_offset'] = '0';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['sorts']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['sorts']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['sorts']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date_range) */
  $handler->display->display_options['filters']['field_date_range_value']['id'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value']['field'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator_id'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['label'] = 'Outreach From';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['operator'] = 'field_date_range_value_op';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['identifier'] = 'field_date_range_value';
  $handler->display->display_options['filters']['field_date_range_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value']['year_range'] = '2005:2100';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'public_outreach' => 'public_outreach',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Date - end date (field_date_range:value2) */
  $handler->display->display_options['filters']['field_date_range_value2']['id'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['filters']['field_date_range_value2']['field'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['min'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['value']['max'] = '2100-01-01';
  $handler->display->display_options['filters']['field_date_range_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_date_range_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator_id'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['label'] = 'Outreach To';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['operator'] = 'field_date_range_value2_op';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['identifier'] = 'field_date_range_value2';
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_date_range_value2']['expose']['remember_roles'] = array(
    2 => '2',
    10 => 0,
    3 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_date_range_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_range_value2']['year_range'] = '2005:2100';
  $handler->display->display_options['path'] = 'reports/quarterly-report/%/export-outreach';
  $handler->display->display_options['displays'] = array(
    'block_outreach' => 'block_outreach',
    'default' => 0,
    'block_workshops' => 0,
    'block_publications' => 0,
    'block_presentations' => 0,
    'block_participants' => 0,
    'block_students' => 0,
  );
  $export['quarterly_report_v2'] = $view;

  return $export;
}
