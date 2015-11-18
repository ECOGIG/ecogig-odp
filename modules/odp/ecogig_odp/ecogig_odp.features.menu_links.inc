<?php
/**
 * @file
 * ecogig_odp.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ecogig_odp_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-contributions-and-data_1-identify-a-new-dataset:node/add/dataset
  $menu_links['menu-contributions-and-data_1-identify-a-new-dataset:node/add/dataset'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/dataset',
    'router_path' => 'node/add/dataset',
    'link_title' => '1. Identify a NEW DATASET',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_1-identify-a-new-dataset:node/add/dataset',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-datasets:contributions_data/my-datasets',
  );
  // Exported menu link: menu-contributions-and-data_2-metadata-action-items:contributions_data/my-datasets/metadata-action-items
  $menu_links['menu-contributions-and-data_2-metadata-action-items:contributions_data/my-datasets/metadata-action-items'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/metadata-action-items',
    'router_path' => 'contributions_data/my-datasets/metadata-action-items',
    'link_title' => '2. METADATA Action Items',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_2-metadata-action-items:contributions_data/my-datasets/metadata-action-items',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-datasets:contributions_data/my-datasets',
  );
  // Exported menu link: menu-contributions-and-data_3-data-action-items:contributions_data/my-datasets/data-action-items
  $menu_links['menu-contributions-and-data_3-data-action-items:contributions_data/my-datasets/data-action-items'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/data-action-items',
    'router_path' => 'contributions_data/my-datasets/data-action-items',
    'link_title' => '3. DATA Action Items',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_3-data-action-items:contributions_data/my-datasets/data-action-items',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-datasets:contributions_data/my-datasets',
  );
  // Exported menu link: menu-contributions-and-data_add-a-conference-presentation:node/add/presentation
  $menu_links['menu-contributions-and-data_add-a-conference-presentation:node/add/presentation'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/presentation',
    'router_path' => 'node/add/presentation',
    'link_title' => 'Add a Conference Presentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_add-a-conference-presentation:node/add/presentation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-contributions:contributions_data/my-contributions',
  );
  // Exported menu link: menu-contributions-and-data_add-a-participant:node/add/participant
  $menu_links['menu-contributions-and-data_add-a-participant:node/add/participant'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/participant',
    'router_path' => 'node/add/participant',
    'link_title' => 'Add a Participant',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_add-a-participant:node/add/participant',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-contributions:contributions_data/my-contributions',
  );
  // Exported menu link: menu-contributions-and-data_add-a-publication:node/add/publications
  $menu_links['menu-contributions-and-data_add-a-publication:node/add/publications'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/publications',
    'router_path' => 'node/add/publications',
    'link_title' => 'Add a Publication',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_add-a-publication:node/add/publications',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-publications:contributions_data/my-publications',
  );
  // Exported menu link: menu-contributions-and-data_add-a-student:node/add/students
  $menu_links['menu-contributions-and-data_add-a-student:node/add/students'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/students',
    'router_path' => 'node/add/students',
    'link_title' => 'Add a Student',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_add-a-student:node/add/students',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-contributions:contributions_data/my-contributions',
  );
  // Exported menu link: menu-contributions-and-data_add-a-workshop:node/add/workshop
  $menu_links['menu-contributions-and-data_add-a-workshop:node/add/workshop'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/workshop',
    'router_path' => 'node/add/workshop',
    'link_title' => 'Add a Workshop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_add-a-workshop:node/add/workshop',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-contributions:contributions_data/my-contributions',
  );
  // Exported menu link: menu-contributions-and-data_add-blog-post:node/add/blog-post
  $menu_links['menu-contributions-and-data_add-blog-post:node/add/blog-post'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/blog-post',
    'router_path' => 'node/add/blog-post',
    'link_title' => 'Add Blog Post',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_add-blog-post:node/add/blog-post',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_blog:blog-by-author',
  );
  // Exported menu link: menu-contributions-and-data_add-public-outreach:node/add/public-outreach
  $menu_links['menu-contributions-and-data_add-public-outreach:node/add/public-outreach'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'node/add/public-outreach',
    'router_path' => 'node/add/public-outreach',
    'link_title' => 'Add Public Outreach',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_add-public-outreach:node/add/public-outreach',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-contributions:contributions_data/my-contributions',
  );
  // Exported menu link: menu-contributions-and-data_archived-datasets:contributions-data/datasets-archived
  $menu_links['menu-contributions-and-data_archived-datasets:contributions-data/datasets-archived'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions-data/datasets-archived',
    'router_path' => 'contributions-data/datasets-archived',
    'link_title' => 'Archived Datasets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_archived-datasets:contributions-data/datasets-archived',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_author-profile-list:contributions-data/profiles
  $menu_links['menu-contributions-and-data_author-profile-list:contributions-data/profiles'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions-data/profiles',
    'router_path' => 'contributions-data/profiles',
    'link_title' => 'Author Profile list',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_author-profile-list:contributions-data/profiles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_blog:blog-by-author
  $menu_links['menu-contributions-and-data_blog:blog-by-author'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'blog-by-author',
    'router_path' => 'blog-by-author',
    'link_title' => 'Blog',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_blog:blog-by-author',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-contributions-and-data_contributions-owned:contributions_data/contribution
  $menu_links['menu-contributions-and-data_contributions-owned:contributions_data/contribution'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/contribution',
    'router_path' => 'contributions_data/contribution',
    'link_title' => 'Contributions Owned',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_contributions-owned:contributions_data/contribution',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-contributions:contributions_data/my-contributions',
  );
  // Exported menu link: menu-contributions-and-data_data-action-items---data-mgr:contributions_data/my-datasets/data-action-items/data-mgr
  $menu_links['menu-contributions-and-data_data-action-items---data-mgr:contributions_data/my-datasets/data-action-items/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/data-action-items/data-mgr',
    'router_path' => 'contributions_data/my-datasets/data-action-items/data-mgr',
    'link_title' => 'DATA Action Items - Data Mgr',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_data-action-items---data-mgr:contributions_data/my-datasets/data-action-items/data-mgr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_data-action-items:contributions_data/my-datasets/data-action-items/data-mgr
  $menu_links['menu-contributions-and-data_data-action-items:contributions_data/my-datasets/data-action-items/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/data-action-items/data-mgr',
    'router_path' => 'contributions_data/my-datasets/data-action-items/data-mgr',
    'link_title' => 'DATA Action Items',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_data-action-items:contributions_data/my-datasets/data-action-items/data-mgr',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_dataset-action-items:contributions_data/my-datasets/action-items
  $menu_links['menu-contributions-and-data_dataset-action-items:contributions_data/my-datasets/action-items'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/action-items',
    'router_path' => 'contributions_data/my-datasets',
    'link_title' => 'Dataset Action Items',
    'options' => array(
      'identifier' => 'menu-contributions-and-data_dataset-action-items:contributions_data/my-datasets/action-items',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-datasets:contributions_data/my-datasets',
  );
  // Exported menu link: menu-contributions-and-data_dataset-monitoring:dataset-monitoring
  $menu_links['menu-contributions-and-data_dataset-monitoring:dataset-monitoring'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'dataset-monitoring',
    'router_path' => 'dataset-monitoring',
    'link_title' => 'Dataset Monitoring',
    'options' => array(
      'identifier' => 'menu-contributions-and-data_dataset-monitoring:dataset-monitoring',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_reports:reports/quarterly-report',
  );
  // Exported menu link: menu-contributions-and-data_dataset-progress-report:reports/dataset-progress-report
  $menu_links['menu-contributions-and-data_dataset-progress-report:reports/dataset-progress-report'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'reports/dataset-progress-report',
    'router_path' => 'reports/dataset-progress-report',
    'link_title' => 'Dataset Progress Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_dataset-progress-report:reports/dataset-progress-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_datasets-owned:contributions_data/dataset
  $menu_links['menu-contributions-and-data_datasets-owned:contributions_data/dataset'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/dataset',
    'router_path' => 'contributions_data/dataset',
    'link_title' => 'Datasets Owned',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_datasets-owned:contributions_data/dataset',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-datasets:contributions_data/my-datasets',
  );
  // Exported menu link: menu-contributions-and-data_edit-my-profile:user/me/edit
  $menu_links['menu-contributions-and-data_edit-my-profile:user/me/edit'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'user/me/edit',
    'router_path' => 'user/%/edit',
    'link_title' => 'Edit My Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_edit-my-profile:user/me/edit',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-profile:contributions_data/profile',
  );
  // Exported menu link: menu-contributions-and-data_griidc-action-items---data-mgr:contributions_data/my-datasets/griidc-action-items/data-mgr
  $menu_links['menu-contributions-and-data_griidc-action-items---data-mgr:contributions_data/my-datasets/griidc-action-items/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/griidc-action-items/data-mgr',
    'router_path' => 'contributions_data/my-datasets/griidc-action-items/data-mgr',
    'link_title' => 'GRIIDC Action Items - Data Mgr',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_griidc-action-items---data-mgr:contributions_data/my-datasets/griidc-action-items/data-mgr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_griidc-action-items:contributions_data/my-datasets/griidc-action-items/data-mgr
  $menu_links['menu-contributions-and-data_griidc-action-items:contributions_data/my-datasets/griidc-action-items/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/griidc-action-items/data-mgr',
    'router_path' => 'contributions_data/my-datasets/griidc-action-items/data-mgr',
    'link_title' => 'GRIIDC Action Items',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_griidc-action-items:contributions_data/my-datasets/griidc-action-items/data-mgr',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_manage-data:<front>
  $menu_links['menu-contributions-and-data_manage-data:<front>'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Manage Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_manage-data:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-contributions-and-data_metadata-action-items---data-mgr:contributions_data/my-datasets/metadata-action-items/data-mgr
  $menu_links['menu-contributions-and-data_metadata-action-items---data-mgr:contributions_data/my-datasets/metadata-action-items/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/metadata-action-items/data-mgr',
    'router_path' => 'contributions_data/my-datasets/metadata-action-items/data-mgr',
    'link_title' => 'Metadata Action Items - Data Mgr',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_metadata-action-items---data-mgr:contributions_data/my-datasets/metadata-action-items/data-mgr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_metadata-action-items:contributions_data/my-datasets/metadata-action-items/data-mgr
  $menu_links['menu-contributions-and-data_metadata-action-items:contributions_data/my-datasets/metadata-action-items/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/metadata-action-items/data-mgr',
    'router_path' => 'contributions_data/my-datasets/metadata-action-items/data-mgr',
    'link_title' => 'Metadata Action Items',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_metadata-action-items:contributions_data/my-datasets/metadata-action-items/data-mgr',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_my-contributions:contributions_data/my-contributions
  $menu_links['menu-contributions-and-data_my-contributions:contributions_data/my-contributions'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-contributions',
    'router_path' => 'contributions_data/my-contributions',
    'link_title' => 'My Contributions',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_my-contributions:contributions_data/my-contributions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-contributions-and-data_my-dashboard:dashboard
  $menu_links['menu-contributions-and-data_my-dashboard:dashboard'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'My Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_my-dashboard:dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-contributions-and-data_my-dataset-templates:contributions_data/my-datasets/my-templates
  $menu_links['menu-contributions-and-data_my-dataset-templates:contributions_data/my-datasets/my-templates'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/my-templates',
    'router_path' => 'contributions_data/my-datasets/my-templates',
    'link_title' => 'My Dataset Templates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_my-dataset-templates:contributions_data/my-datasets/my-templates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-datasets:contributions_data/my-datasets',
  );
  // Exported menu link: menu-contributions-and-data_my-datasets:contributions_data/my-datasets
  $menu_links['menu-contributions-and-data_my-datasets:contributions_data/my-datasets'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets',
    'router_path' => 'contributions_data/my-datasets',
    'link_title' => 'My Datasets',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_my-datasets:contributions_data/my-datasets',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-contributions-and-data_my-profile:contributions_data/profile
  $menu_links['menu-contributions-and-data_my-profile:contributions_data/profile'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/profile',
    'router_path' => 'contributions_data/profile',
    'link_title' => 'My Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_my-profile:contributions_data/profile',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-contributions-and-data_my-publications:contributions_data/my-publications
  $menu_links['menu-contributions-and-data_my-publications:contributions_data/my-publications'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-publications',
    'router_path' => 'contributions_data/my-publications',
    'link_title' => 'My Publications',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_my-publications:contributions_data/my-publications',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-contributions-and-data_orphans---data-mgr:contributions_data/my-datasets/orphans/data-mgr
  $menu_links['menu-contributions-and-data_orphans---data-mgr:contributions_data/my-datasets/orphans/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/orphans/data-mgr',
    'router_path' => 'contributions_data/my-datasets/orphans/data-mgr',
    'link_title' => 'Orphans - Data Mgr',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_orphans---data-mgr:contributions_data/my-datasets/orphans/data-mgr',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_orphans:contributions_data/my-datasets/orphans/data-mgr
  $menu_links['menu-contributions-and-data_orphans:contributions_data/my-datasets/orphans/data-mgr'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/my-datasets/orphans/data-mgr',
    'router_path' => 'contributions_data/my-datasets/orphans/data-mgr',
    'link_title' => 'Orphans',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_orphans:contributions_data/my-datasets/orphans/data-mgr',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_profile-contributions:reports/profile-contributions
  $menu_links['menu-contributions-and-data_profile-contributions:reports/profile-contributions'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'reports/profile-contributions',
    'router_path' => 'reports/profile-contributions',
    'link_title' => 'Profile Contributions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_profile-contributions:reports/profile-contributions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_manage-data:<front>',
  );
  // Exported menu link: menu-contributions-and-data_publications-owned:contributions_data/publication
  $menu_links['menu-contributions-and-data_publications-owned:contributions_data/publication'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'contributions_data/publication',
    'router_path' => 'contributions_data/publication',
    'link_title' => 'Publications Owned',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributions-and-data_publications-owned:contributions_data/publication',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_my-publications:contributions_data/my-publications',
  );
  // Exported menu link: menu-contributions-and-data_quarterly-pi-contribution-activity:reports/quarterly-activity
  $menu_links['menu-contributions-and-data_quarterly-pi-contribution-activity:reports/quarterly-activity'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'reports/quarterly-activity',
    'router_path' => 'reports/quarterly-activity',
    'link_title' => 'Quarterly PI Contribution Activity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_quarterly-pi-contribution-activity:reports/quarterly-activity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_reports:reports/quarterly-report',
  );
  // Exported menu link: menu-contributions-and-data_quarterly-report:reports/quarterly-report/
  $menu_links['menu-contributions-and-data_quarterly-report:reports/quarterly-report/'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'reports/quarterly-report/',
    'router_path' => 'reports/quarterly-report',
    'link_title' => 'Quarterly Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_quarterly-report:reports/quarterly-report/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-contributions-and-data_reports:reports/quarterly-report',
  );
  // Exported menu link: menu-contributions-and-data_reports:reports/quarterly-report
  $menu_links['menu-contributions-and-data_reports:reports/quarterly-report'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'link_path' => 'reports/quarterly-report',
    'router_path' => 'reports/quarterly-report',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-contributions-and-data_reports:reports/quarterly-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('1. Identify a NEW DATASET');
  t('2. METADATA Action Items');
  t('3. DATA Action Items');
  t('Add Blog Post');
  t('Add Public Outreach');
  t('Add a Conference Presentation');
  t('Add a Participant');
  t('Add a Publication');
  t('Add a Student');
  t('Add a Workshop');
  t('Archived Datasets');
  t('Author Profile list');
  t('Blog');
  t('Contributions Owned');
  t('DATA Action Items');
  t('DATA Action Items - Data Mgr');
  t('Dataset Action Items');
  t('Dataset Monitoring');
  t('Dataset Progress Report');
  t('Datasets Owned');
  t('Edit My Profile');
  t('GRIIDC Action Items');
  t('GRIIDC Action Items - Data Mgr');
  t('Manage Data');
  t('Metadata Action Items');
  t('Metadata Action Items - Data Mgr');
  t('My Contributions');
  t('My Dashboard');
  t('My Dataset Templates');
  t('My Datasets');
  t('My Profile');
  t('My Publications');
  t('Orphans');
  t('Orphans - Data Mgr');
  t('Profile Contributions');
  t('Publications Owned');
  t('Quarterly PI Contribution Activity');
  t('Quarterly Report');
  t('Reports');

  return $menu_links;
}
