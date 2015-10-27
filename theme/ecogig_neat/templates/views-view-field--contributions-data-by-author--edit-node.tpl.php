<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php

  if(module_exists('dataset_conditional_display')){
    global $user;
    if(!empty($row->workflow_node_current_sid)){
      $workflow_sid = $row->workflow_node_current_sid;
      if(!user_access('override dataset edit', $user)){
        if($workflow_sid == DS_CON_NEW_REQUEST
          || $workflow_sid == DS_CON_METADATA_SUPPLIED
          || $workflow_sid == DS_CON_METADATA_APPROVED
          || $workflow_sid == DS_CON_DATA_FILES_SUPPLIED
          || $workflow_sid == DS_CON_DATA_FILES_APPROVED
          || $workflow_sid == DS_CON_DATA_SUBMITTED_TO_GRIIDC
          || $workflow_sid == DS_CON_DATA_LIST_DATA_AS_PUBLIC
          || $workflow_sid == DS_CON_DATA_LISTED_PUBLIC
          || $workflow_sid == DS_CON_MARKED_FOR_DELETION)
          {
            unset($output);
          }
      }
    }
  }
    print $output;
  ?>
