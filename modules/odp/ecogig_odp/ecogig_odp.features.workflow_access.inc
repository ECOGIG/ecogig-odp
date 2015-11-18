<?php
/**
 * @file
 * ecogig_odp.features.workflow_access.inc
 */

/**
 * Implements hook_workflow_access_features_default_settings().
 */
function ecogig_odp_workflow_access_features_default_settings() {
  $workflows = array();

  $workflows['dataset_workflows'] = array();

  $workflows['publications_workflow'] = array();
  $workflows['publications_workflow']['draft'] = array();
  $workflows['publications_workflow']['draft']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['draft']['Program Director'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['draft']['Administration'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['draft']['Principal Investigator (PI)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['draft']['Research Professional'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['draft']['Data Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['submitted_in_review'] = array();
  $workflows['publications_workflow']['submitted_in_review']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['submitted_in_review']['Program Director'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['submitted_in_review']['Administration'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['submitted_in_review']['Principal Investigator (PI)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['submitted_in_review']['Research Professional'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['submitted_in_review']['Data Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['in_press_published'] = array();
  $workflows['publications_workflow']['in_press_published']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['in_press_published']['Program Director'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['in_press_published']['Administration'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['in_press_published']['Principal Investigator (PI)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['in_press_published']['Research Professional'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['in_press_published']['Data Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['ecogig_contribution_number'] = array();
  $workflows['publications_workflow']['ecogig_contribution_number']['workflow_features_author_name'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['ecogig_contribution_number']['Program Director'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['ecogig_contribution_number']['Administration'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );
  $workflows['publications_workflow']['ecogig_contribution_number']['Principal Investigator (PI)'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['ecogig_contribution_number']['Research Professional'] = array(
    'grant_view' => 1,
    'grant_update' => 0,
    'grant_delete' => 0,
  );
  $workflows['publications_workflow']['ecogig_contribution_number']['Data Manager'] = array(
    'grant_view' => 1,
    'grant_update' => 1,
    'grant_delete' => 1,
  );

  return $workflows;
}
