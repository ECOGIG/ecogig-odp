<?php

/**
* Views handler for the taxonomy term field used by the term_with_date_range widget.
*/
class views_handler_field_term_with_date_range_tid extends views_handler_field{
  function render($values) {
    $value = $values->{$this->field_alias};
    $term = taxonomy_term_load($value);

    if(!empty($term->name)){
      return $term->name;
    }
    return '';
  }

}
