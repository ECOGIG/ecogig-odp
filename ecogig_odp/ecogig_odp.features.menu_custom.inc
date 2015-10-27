<?php
/**
 * @file
 * ecogig_odp.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ecogig_odp_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-contributions-and-data.
  $menus['menu-contributions-and-data'] = array(
    'menu_name' => 'menu-contributions-and-data',
    'title' => 'Contributions and Data',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contributions and Data');


  return $menus;
}
