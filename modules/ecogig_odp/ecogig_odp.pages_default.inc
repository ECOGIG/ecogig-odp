<?php
/**
 * @file
 * ecogig_odp.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ecogig_odp_default_page_manager_pages() {
  $roles = array_flip(user_roles());

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dataset_progress_report';
  $page->task = 'page';
  $page->admin_title = 'Dataset Progress Report';
  $page->admin_description = '';
  $page->path = 'reports/dataset-progress-report';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dataset_progress_report__panel';
  $handler->task = 'page';
  $handler->subtask = 'dataset_progress_report';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'pnl-dataset-progress-report',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dataset Progress Report';
  $display->uuid = '09337af8-d43f-4ea6-9fef-8f64fb7532ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-55ed689b-c408-43ae-8d10-996df6de710a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Date Range Selection',
      'title' => '',
      'body' => '<label for="date-filter">Showing datasets updated:</label><select name="date-filter" id="dataset-progress-report-filter"><option value="all">All Time</option><option value="today">Today</option><option value="week">This Week</option><option value="month">This Month</option><option value="year">This Year</option></select>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'views-filter',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55ed689b-c408-43ae-8d10-996df6de710a';
    $display->content['new-55ed689b-c408-43ae-8d10-996df6de710a'] = $pane;
    $display->panels['middle'][0] = 'new-55ed689b-c408-43ae-8d10-996df6de710a';
    $pane = new stdClass();
    $pane->pid = 'new-b25411dc-68ed-4e8b-81e9-972b9c0d1131';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Loading Notice',
      'title' => '',
      'body' => '<div id="pnl-report-loading" class="pnl-redirect-notice" style="display: none;">Loading...</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b25411dc-68ed-4e8b-81e9-972b9c0d1131';
    $display->content['new-b25411dc-68ed-4e8b-81e9-972b9c0d1131'] = $pane;
    $display->panels['middle'][1] = 'new-b25411dc-68ed-4e8b-81e9-972b9c0d1131';
    $pane = new stdClass();
    $pane->pid = 'new-b47e7834-1b06-483a-be89-51fcde22860f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Datasets Identified',
      'title' => '',
      'body' => '<h2>Datasets Identified</h2>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pnl-section-title',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b47e7834-1b06-483a-be89-51fcde22860f';
    $display->content['new-b47e7834-1b06-483a-be89-51fcde22860f'] = $pane;
    $display->panels['middle'][2] = 'new-b47e7834-1b06-483a-be89-51fcde22860f';
    $pane = new stdClass();
    $pane->pid = 'new-1e28fb6e-b236-403d-9503-ec7a722c7925';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_all_datasets',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1e28fb6e-b236-403d-9503-ec7a722c7925';
    $display->content['new-1e28fb6e-b236-403d-9503-ec7a722c7925'] = $pane;
    $display->panels['middle'][3] = 'new-1e28fb6e-b236-403d-9503-ec7a722c7925';
    $pane = new stdClass();
    $pane->pid = 'new-fd871dd3-e8d8-456f-b2c2-532e07dd10b3';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_active',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fd871dd3-e8d8-456f-b2c2-532e07dd10b3';
    $display->content['new-fd871dd3-e8d8-456f-b2c2-532e07dd10b3'] = $pane;
    $display->panels['middle'][4] = 'new-fd871dd3-e8d8-456f-b2c2-532e07dd10b3';
    $pane = new stdClass();
    $pane->pid = 'new-3ec994fe-3d32-4021-966c-c591e3172cef';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_inactive',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3ec994fe-3d32-4021-966c-c591e3172cef';
    $display->content['new-3ec994fe-3d32-4021-966c-c591e3172cef'] = $pane;
    $display->panels['middle'][5] = 'new-3ec994fe-3d32-4021-966c-c591e3172cef';
    $pane = new stdClass();
    $pane->pid = 'new-c6104bf3-5ff3-44ce-880c-9a8bbe8a7d9a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Datasets by Track',
      'title' => '',
      'body' => '<h2>Datasets by Track</h2>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pnl-section-title',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c6104bf3-5ff3-44ce-880c-9a8bbe8a7d9a';
    $display->content['new-c6104bf3-5ff3-44ce-880c-9a8bbe8a7d9a'] = $pane;
    $display->panels['middle'][6] = 'new-c6104bf3-5ff3-44ce-880c-9a8bbe8a7d9a';
    $pane = new stdClass();
    $pane->pid = 'new-d0885db8-fabb-4661-84c1-670103381a41';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_identification',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd0885db8-fabb-4661-84c1-670103381a41';
    $display->content['new-d0885db8-fabb-4661-84c1-670103381a41'] = $pane;
    $display->panels['middle'][7] = 'new-d0885db8-fabb-4661-84c1-670103381a41';
    $pane = new stdClass();
    $pane->pid = 'new-039e2430-f3c5-4a7e-a3d7-2003f60bf7d8';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_metadata',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '039e2430-f3c5-4a7e-a3d7-2003f60bf7d8';
    $display->content['new-039e2430-f3c5-4a7e-a3d7-2003f60bf7d8'] = $pane;
    $display->panels['middle'][8] = 'new-039e2430-f3c5-4a7e-a3d7-2003f60bf7d8';
    $pane = new stdClass();
    $pane->pid = 'new-692bcf52-e85c-4df4-b10f-5f856700df87';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_data',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '692bcf52-e85c-4df4-b10f-5f856700df87';
    $display->content['new-692bcf52-e85c-4df4-b10f-5f856700df87'] = $pane;
    $display->panels['middle'][9] = 'new-692bcf52-e85c-4df4-b10f-5f856700df87';
    $pane = new stdClass();
    $pane->pid = 'new-ba8bd01d-0add-404b-b132-297286addeca';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_permanent_repository',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'ba8bd01d-0add-404b-b132-297286addeca';
    $display->content['new-ba8bd01d-0add-404b-b132-297286addeca'] = $pane;
    $display->panels['middle'][10] = 'new-ba8bd01d-0add-404b-b132-297286addeca';
    $pane = new stdClass();
    $pane->pid = 'new-8aa28fda-d271-4540-aa5c-5fedb45d75e3';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_availability',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-totals',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '8aa28fda-d271-4540-aa5c-5fedb45d75e3';
    $display->content['new-8aa28fda-d271-4540-aa5c-5fedb45d75e3'] = $pane;
    $display->panels['middle'][11] = 'new-8aa28fda-d271-4540-aa5c-5fedb45d75e3';
    $pane = new stdClass();
    $pane->pid = 'new-9616f452-aeb6-43cc-90e3-0c00332da2f7';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Totals by Workflow State',
      'title' => '',
      'body' => '<h2>Totals by Workflow State</h2>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pnl-section-title',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '9616f452-aeb6-43cc-90e3-0c00332da2f7';
    $display->content['new-9616f452-aeb6-43cc-90e3-0c00332da2f7'] = $pane;
    $display->panels['middle'][12] = 'new-9616f452-aeb6-43cc-90e3-0c00332da2f7';
    $pane = new stdClass();
    $pane->pid = 'new-ae6111d3-4e80-4120-8c36-e403b0b014bd';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'dataset_progress_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_status_chart',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-chart',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'ae6111d3-4e80-4120-8c36-e403b0b014bd';
    $display->content['new-ae6111d3-4e80-4120-8c36-e403b0b014bd'] = $pane;
    $display->panels['middle'][13] = 'new-ae6111d3-4e80-4120-8c36-e403b0b014bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b47e7834-1b06-483a-be89-51fcde22860f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dataset_progress_report'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'datasets_archived';
  $page->task = 'page';
  $page->admin_title = 'Datasets Archived';
  $page->admin_description = '';
  $page->path = 'contributions-data/datasets-archived';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => $roles['Data Manager'],
            1 => $roles['Information Technology'],
            2 => $roles['administrator'],
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_datasets_archived__panel';
  $handler->task = 'page';
  $handler->subtask = 'datasets_archived';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Archived Datasets';
  $display->uuid = '29a82094-b344-4797-9672-d72700d611af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60a4e645-ffd6-49b5-8b65-905952b86c41';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'datasets_archived';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'datasets_archived',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60a4e645-ffd6-49b5-8b65-905952b86c41';
    $display->content['new-60a4e645-ffd6-49b5-8b65-905952b86c41'] = $pane;
    $display->panels['center'][0] = 'new-60a4e645-ffd6-49b5-8b65-905952b86c41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-60a4e645-ffd6-49b5-8b65-905952b86c41';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['datasets_archived'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'datasets_test';
  $page->task = 'page';
  $page->admin_title = 'My Datasets';
  $page->admin_description = '';
  $page->path = 'contributions_data/my-datasets/!uid';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => $roles['authenticated user'],
          ),
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'uid' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_datasets_test__panel_context_5ca461e5-7809-4a3d-b03e-df2aa0364609';
  $handler->task = 'page';
  $handler->subtask = 'datasets_test';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '76b9e618-4b1b-424b-9f60-3972d74fb238';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b139c412-ab04-490c-9eac-af0018c3b27b';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'my_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ds-view-header',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b139c412-ab04-490c-9eac-af0018c3b27b';
    $display->content['new-b139c412-ab04-490c-9eac-af0018c3b27b'] = $pane;
    $display->panels['middle'][0] = 'new-b139c412-ab04-490c-9eac-af0018c3b27b';
    $pane = new stdClass();
    $pane->pid = 'new-f09f069d-824a-410c-9486-16c7c816fd39';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'my_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'datasets_owned',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Datasets Owned',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ds-view-display',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f09f069d-824a-410c-9486-16c7c816fd39';
    $display->content['new-f09f069d-824a-410c-9486-16c7c816fd39'] = $pane;
    $display->panels['middle'][1] = 'new-f09f069d-824a-410c-9486-16c7c816fd39';
    $pane = new stdClass();
    $pane->pid = 'new-c48b2c7f-ad5a-4d06-90fa-705cb12681b2';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'my_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'datasets_contact',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Listed as Dataset Contact',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ds-view-display',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c48b2c7f-ad5a-4d06-90fa-705cb12681b2';
    $display->content['new-c48b2c7f-ad5a-4d06-90fa-705cb12681b2'] = $pane;
    $display->panels['middle'][2] = 'new-c48b2c7f-ad5a-4d06-90fa-705cb12681b2';
    $pane = new stdClass();
    $pane->pid = 'new-03beba11-026e-4219-aa17-1b0885115ae1';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'my_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'datasets_metadata_contact',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Listed as Metadata Contact',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ds-view-display',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '03beba11-026e-4219-aa17-1b0885115ae1';
    $display->content['new-03beba11-026e-4219-aa17-1b0885115ae1'] = $pane;
    $display->panels['middle'][3] = 'new-03beba11-026e-4219-aa17-1b0885115ae1';
    $pane = new stdClass();
    $pane->pid = 'new-66411eb3-755f-40db-8e83-9e2e4fba4bf6';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'my_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'datasets_stakeholder',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Listed as Stakeholder',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '66411eb3-755f-40db-8e83-9e2e4fba4bf6';
    $display->content['new-66411eb3-755f-40db-8e83-9e2e4fba4bf6'] = $pane;
    $display->panels['middle'][4] = 'new-66411eb3-755f-40db-8e83-9e2e4fba4bf6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['datasets_test'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_contributions';
  $page->task = 'page';
  $page->admin_title = 'My Contributions';
  $page->admin_description = 'A listing of Contributions for a given PI. Contributions are listed if the PI has contributed to them in any way (Author, Supervisor, etc.). If the PI\'s user id is not supplied in the URL, results will be shown for the logged in user.';
  $page->path = 'contributions_data/my-contributions/!uid';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => $roles['Administration'],
            1 => $roles['Data Manager'],
            2 => $roles['Information Technology'],
            3 => $roles['Principal Investigator (PI)'],
            4 => $roles['Program Director'],
            5 => $roles['Public Outreach'],
            6 => $roles['Research Professional'],
            7 => $roles['administrator'],
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'uid' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_contributions__panel_context_4a93df91-a768-4984-acc9-2bd91e69b3d9';
  $handler->task = 'page';
  $handler->subtask = 'my_contributions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'page-my-contributions',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My Contributions';
  $display->uuid = 'c6909ab2-4b50-4fb3-842d-8f42cdf7d6be';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-412cb05d-bab1-4846-8315-46e1776130e9';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'pi_contributions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_workshops',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Workshops',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '412cb05d-bab1-4846-8315-46e1776130e9';
    $display->content['new-412cb05d-bab1-4846-8315-46e1776130e9'] = $pane;
    $display->panels['middle'][0] = 'new-412cb05d-bab1-4846-8315-46e1776130e9';
    $pane = new stdClass();
    $pane->pid = 'new-83d7e188-89f4-4ad5-876c-46cd90934b44';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'pi_contributions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_publications',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => 'Publications',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '83d7e188-89f4-4ad5-876c-46cd90934b44';
    $display->content['new-83d7e188-89f4-4ad5-876c-46cd90934b44'] = $pane;
    $display->panels['middle'][1] = 'new-83d7e188-89f4-4ad5-876c-46cd90934b44';
    $pane = new stdClass();
    $pane->pid = 'new-aa3b0344-386c-4f32-998f-62b676c9dde7';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'pi_contributions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_presentations',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'aa3b0344-386c-4f32-998f-62b676c9dde7';
    $display->content['new-aa3b0344-386c-4f32-998f-62b676c9dde7'] = $pane;
    $display->panels['middle'][2] = 'new-aa3b0344-386c-4f32-998f-62b676c9dde7';
    $pane = new stdClass();
    $pane->pid = 'new-bd07382e-2e2f-4f0a-a76c-d4394bfe0ce6';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'pi_contributions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_participants',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bd07382e-2e2f-4f0a-a76c-d4394bfe0ce6';
    $display->content['new-bd07382e-2e2f-4f0a-a76c-d4394bfe0ce6'] = $pane;
    $display->panels['middle'][3] = 'new-bd07382e-2e2f-4f0a-a76c-d4394bfe0ce6';
    $pane = new stdClass();
    $pane->pid = 'new-caa290f2-a09f-4749-ab2e-4da00ab5ad74';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'pi_contributions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_students',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'caa290f2-a09f-4749-ab2e-4da00ab5ad74';
    $display->content['new-caa290f2-a09f-4749-ab2e-4da00ab5ad74'] = $pane;
    $display->panels['middle'][4] = 'new-caa290f2-a09f-4749-ab2e-4da00ab5ad74';
    $pane = new stdClass();
    $pane->pid = 'new-0779621b-7e5d-4b3e-8d6b-8418278a2f6b';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'pi_contributions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_outreach',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0779621b-7e5d-4b3e-8d6b-8418278a2f6b';
    $display->content['new-0779621b-7e5d-4b3e-8d6b-8418278a2f6b'] = $pane;
    $display->panels['middle'][5] = 'new-0779621b-7e5d-4b3e-8d6b-8418278a2f6b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-412cb05d-bab1-4846-8315-46e1776130e9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_contributions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pi_dashboard';
  $page->task = 'page';
  $page->admin_title = 'PI Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => $roles['Administration'],
            1 => $roles['Data Manager'],
            2 => $roles['Information Technology'],
            3 => $roles['Principal Investigator (PI)'],
            4 => $roles['Program Director'],
            5 => $roles['Public Outreach'],
            6 => $roles['Research Professional'],
            7 => $roles['administrator'],
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pi_dashboard__panel_context_c3228f63-15b8-4ede-8de7-4f21268a8eb6';
  $handler->task = 'page';
  $handler->subtask = 'pi_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = 'a6edc4c6-2ff3-458f-9737-0815d7493fbf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f7b2b21-a572-43c3-8ea5-24d58472318a';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'user_welcome_message';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f7b2b21-a572-43c3-8ea5-24d58472318a';
    $display->content['new-1f7b2b21-a572-43c3-8ea5-24d58472318a'] = $pane;
    $display->panels['left'][0] = 'new-1f7b2b21-a572-43c3-8ea5-24d58472318a';
    $pane = new stdClass();
    $pane->pid = 'new-c32c41ef-7cca-4af2-9008-a27fc986d7fb';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'dataset_action_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_metadata',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c32c41ef-7cca-4af2-9008-a27fc986d7fb';
    $display->content['new-c32c41ef-7cca-4af2-9008-a27fc986d7fb'] = $pane;
    $display->panels['left'][1] = 'new-c32c41ef-7cca-4af2-9008-a27fc986d7fb';
    $pane = new stdClass();
    $pane->pid = 'new-e82c54c1-da0b-4a44-90c2-948200e0f420';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'dataset_action_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_data',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e82c54c1-da0b-4a44-90c2-948200e0f420';
    $display->content['new-e82c54c1-da0b-4a44-90c2-948200e0f420'] = $pane;
    $display->panels['left'][2] = 'new-e82c54c1-da0b-4a44-90c2-948200e0f420';
    $pane = new stdClass();
    $pane->pid = 'new-9e384785-5480-41a9-a3b6-1c8ee151aaea';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ecogig_odp-ticket_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e384785-5480-41a9-a3b6-1c8ee151aaea';
    $display->content['new-9e384785-5480-41a9-a3b6-1c8ee151aaea'] = $pane;
    $display->panels['right'][0] = 'new-9e384785-5480-41a9-a3b6-1c8ee151aaea';
    $pane = new stdClass();
    $pane->pid = 'new-03dd205c-c213-4db1-946c-569f68fefcb2';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ecogig_odp-create_dataset_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '03dd205c-c213-4db1-946c-569f68fefcb2';
    $display->content['new-03dd205c-c213-4db1-946c-569f68fefcb2'] = $pane;
    $display->panels['right'][1] = 'new-03dd205c-c213-4db1-946c-569f68fefcb2';
    $pane = new stdClass();
    $pane->pid = 'new-7e5c517a-0117-48e0-ae88-6d87e0f5ed49';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'my_templates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_templates',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7e5c517a-0117-48e0-ae88-6d87e0f5ed49';
    $display->content['new-7e5c517a-0117-48e0-ae88-6d87e0f5ed49'] = $pane;
    $display->panels['right'][2] = 'new-7e5c517a-0117-48e0-ae88-6d87e0f5ed49';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pi_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profiles_and_associated_contributions';
  $page->task = 'page';
  $page->admin_title = 'Profiles and Associated Contributions';
  $page->admin_description = '';
  $page->path = 'reports/profile-contributions';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => $roles['Data Manager'],
            1 => $roles['Information Technology'],
            2 => $roles['administrator'],
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_profiles_and_associated_contributions__panel_context_b033be83-b251-4e7c-aa6a-4483061a3e5f';
  $handler->task = 'page';
  $handler->subtask = 'profiles_and_associated_contributions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'page-profile-contribs',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Profiles and Contributions';
  $display->uuid = '0b295e4d-4bb9-437d-943a-8712f881068b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0624bb8a-c39b-45e9-9cda-05c96c6e9930';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'contribution_profile_associations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'pnl-contrib-profiles',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0624bb8a-c39b-45e9-9cda-05c96c6e9930';
    $display->content['new-0624bb8a-c39b-45e9-9cda-05c96c6e9930'] = $pane;
    $display->panels['left'][0] = 'new-0624bb8a-c39b-45e9-9cda-05c96c6e9930';
    $pane = new stdClass();
    $pane->pid = 'new-b1af86d4-4c46-47ba-a6fb-1208245eeb68';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'contribution_profile_associations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'pnl-contrib-data',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1af86d4-4c46-47ba-a6fb-1208245eeb68';
    $display->content['new-b1af86d4-4c46-47ba-a6fb-1208245eeb68'] = $pane;
    $display->panels['right'][0] = 'new-b1af86d4-4c46-47ba-a6fb-1208245eeb68';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0624bb8a-c39b-45e9-9cda-05c96c6e9930';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profiles_and_associated_contributions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'quarterly_pi_contribution_activity';
  $page->task = 'page';
  $page->admin_title = 'Quarterly PI Contribution Activity';
  $page->admin_description = '';
  $page->path = 'reports/quarterly-activity';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => $roles['Administration'],
            1 => $roles['Data Manager'],
            2 => $roles['Information Technology'],
            3 => $roles['Program Director'],
            4 => $roles['Public Outreach'],
            5 => $roles['administrator'],
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_quarterly_pi_contribution_activity__panel_context_e4d13142-7ae6-460f-87ae-992141c4c00f';
  $handler->task = 'page';
  $handler->subtask = 'quarterly_pi_contribution_activity';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'page-quarterly-activity',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Quarterly PI Contribution Activity';
  $display->uuid = '6bdae363-2f71-4fad-a36b-770974c3978c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3c076178-4b3d-4f98-b750-b5622ec955ca';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_pi_contribution_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'PIs with Owned Contributions',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c076178-4b3d-4f98-b750-b5622ec955ca';
    $display->content['new-3c076178-4b3d-4f98-b750-b5622ec955ca'] = $pane;
    $display->panels['middle'][0] = 'new-3c076178-4b3d-4f98-b750-b5622ec955ca';
    $pane = new stdClass();
    $pane->pid = 'new-23b90428-6db9-4d61-8a0d-8f9d7ec4d6ed';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_pi_contribution_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'PIs with Nothing to Report',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '23b90428-6db9-4d61-8a0d-8f9d7ec4d6ed';
    $display->content['new-23b90428-6db9-4d61-8a0d-8f9d7ec4d6ed'] = $pane;
    $display->panels['middle'][1] = 'new-23b90428-6db9-4d61-8a0d-8f9d7ec4d6ed';
    $pane = new stdClass();
    $pane->pid = 'new-7c49320c-fcea-4126-8b01-6c4c9c74c8ff';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_pi_contribution_activity';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_no_contrib',
      'override_title' => 1,
      'override_title_text' => 'PIs with No Contributions',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7c49320c-fcea-4126-8b01-6c4c9c74c8ff';
    $display->content['new-7c49320c-fcea-4126-8b01-6c4c9c74c8ff'] = $pane;
    $display->panels['middle'][2] = 'new-7c49320c-fcea-4126-8b01-6c4c9c74c8ff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3c076178-4b3d-4f98-b750-b5622ec955ca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['quarterly_pi_contribution_activity'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'quarterly_report';
  $page->task = 'page';
  $page->admin_title = 'Quarterly Report';
  $page->admin_description = '';
  $page->path = 'reports/quarterly-report/!dates';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => $roles['Administration'],
            1 => $roles['Data Manager'],
            2 => $roles['Information Technology'],
            3 => $roles['Principal Investigator (PI)'],
            4 => $roles['Program Director'],
            5 => $roles['Public Outreach'],
            6 => $roles['Research Professional'],
            7 => $roles['administrator'],
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'dates' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_quarterly_report__panel_context_9a3206da-18b3-4f34-a4e8-3802a6908232';
  $handler->task = 'page';
  $handler->subtask = 'quarterly_report';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'pnl-quarterly-report',
    'css_id' => 'page-quarterly-report',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = 'Quarterly Report';
  $display->uuid = '410ccd10-2cc1-48d6-875a-4ab36a01a6a2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f8cbca80-4849-484f-939a-38d32c6f619e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'dataset_no_report-no_report';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'pnl-nothing-to-report',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f8cbca80-4849-484f-939a-38d32c6f619e';
    $display->content['new-f8cbca80-4849-484f-939a-38d32c6f619e'] = $pane;
    $display->panels['center'][0] = 'new-f8cbca80-4849-484f-939a-38d32c6f619e';
    $pane = new stdClass();
    $pane->pid = 'new-f1bb0bdd-5121-4ceb-9bf2-cf70364f5569';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_report_v2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_workshops',
      'override_title' => 1,
      'override_title_text' => 'Workshops',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f1bb0bdd-5121-4ceb-9bf2-cf70364f5569';
    $display->content['new-f1bb0bdd-5121-4ceb-9bf2-cf70364f5569'] = $pane;
    $display->panels['center'][1] = 'new-f1bb0bdd-5121-4ceb-9bf2-cf70364f5569';
    $pane = new stdClass();
    $pane->pid = 'new-95dfd778-b912-4287-a3c2-86e915de7554';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_report_v2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_publications',
      'override_title' => 1,
      'override_title_text' => 'Publications',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '95dfd778-b912-4287-a3c2-86e915de7554';
    $display->content['new-95dfd778-b912-4287-a3c2-86e915de7554'] = $pane;
    $display->panels['center'][2] = 'new-95dfd778-b912-4287-a3c2-86e915de7554';
    $pane = new stdClass();
    $pane->pid = 'new-b6ddd1fb-9f0e-44c2-8026-a4aa94f716c5';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_report_v2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_presentations',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Conference Presentations',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b6ddd1fb-9f0e-44c2-8026-a4aa94f716c5';
    $display->content['new-b6ddd1fb-9f0e-44c2-8026-a4aa94f716c5'] = $pane;
    $display->panels['center'][3] = 'new-b6ddd1fb-9f0e-44c2-8026-a4aa94f716c5';
    $pane = new stdClass();
    $pane->pid = 'new-489dd84c-1765-47d5-8936-012899647177';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_report_v2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_participants',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Participants',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '489dd84c-1765-47d5-8936-012899647177';
    $display->content['new-489dd84c-1765-47d5-8936-012899647177'] = $pane;
    $display->panels['center'][4] = 'new-489dd84c-1765-47d5-8936-012899647177';
    $pane = new stdClass();
    $pane->pid = 'new-17119276-5c24-42ea-8feb-3da55ac10d32';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_report_v2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_students',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Student Participants',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '17119276-5c24-42ea-8feb-3da55ac10d32';
    $display->content['new-17119276-5c24-42ea-8feb-3da55ac10d32'] = $pane;
    $display->panels['center'][5] = 'new-17119276-5c24-42ea-8feb-3da55ac10d32';
    $pane = new stdClass();
    $pane->pid = 'new-c0f8bd46-c64d-4ad7-b560-62b4e9b888e7';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'quarterly_report_v2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_outreach',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Outreach',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c0f8bd46-c64d-4ad7-b560-62b4e9b888e7';
    $display->content['new-c0f8bd46-c64d-4ad7-b560-62b4e9b888e7'] = $pane;
    $display->panels['center'][6] = 'new-c0f8bd46-c64d-4ad7-b560-62b4e9b888e7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['quarterly_report'] = $page;

  return $pages;

}
