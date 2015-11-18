<?php

class views_handler_field_term_with_date_range_date extends views_handler_field_date {

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['date_format']['#options']['example_custom'] = t('My custom format');
  }

  function render($values) {
    $format = $this->options['date_format'];
    $value = $values->{$this->field_alias};
    dpm(array($format,$value));
    // check for our custom format
    //if ($format == 'example_custom') {
      // check to see whether value is whithin today range
      $timezone = new DateTimeZone("Australia/Melbourne");
      $date = new DateTime();
      $date->setTimezone($timezone);
      $today = strtotime($date->format('Y-m-d 00:00:00'));
      if ($value >= $today) {
        // this value is still within today
        //return format_date($value, 'custom', 'g:i A');
      }
      else {
        // this value is older than today
        //return format_date($value, 'custom', 'j M Y g:i A');
      }
    //}
    // otherwise render the date using the normal date handler
    //else {
      //return parent::render($values);
    //}
  }

}
