<?php

/*
* Implements hook_field_views_data().
* 
* Enable sorting and filtering for fields defined in this module.
*/
function term_with_date_range_field_views_data($field){
  $data = field_views_field_default_views_data($field);
  if(!empty($data)){
    foreach($data as $table_name => $table_data){
      foreach ($table_data as $field_name => $field_data) {
        $data[$table_name][$field_name]['field']['click_sortable'] = TRUE;

        if(strpos($field_name, 'timestamp') !== false){
          $data[$table_name][$field_name]['filter']['is_date'] = TRUE;
          $data[$table_name][$field_name]['filter']['handler'] = 'views_handler_filter_date';

          $data[$table_name][$field_name]['sort']['is_date'] = TRUE;
          $data[$table_name][$field_name]['sort']['handler'] = 'views_handler_sort_date';

          $data[$table_name][$field_name]['field']['is_date'] = TRUE;
          $data[$table_name][$field_name]['field']['handler'] = 'views_handler_field_date';
        }

        if(strpos($field_name, 'tid') !== false){
          $data[$table_name][$field_name]['sort']['handler'] = 'views_handler_sort';
          $data[$table_name][$field_name]['field']['handler'] = 'views_handler_field_term_with_date_range_tid';
        }
      }
    }
  }
  return $data;
}
