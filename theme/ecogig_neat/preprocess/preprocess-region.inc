<?php

function ecogig_neat_alpha_preprocess_region(&$vars) {
  $theme = alpha_get_theme();

  if ($vars['region'] == 'content') {
    $vars['breadcrumb'] = $theme->page['breadcrumb'];
  }
}