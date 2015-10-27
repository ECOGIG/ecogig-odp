<?php
/**
 * @file
 * ecogig_odp.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ecogig_odp_user_default_roles() {
  $roles = array();

  // Exported role: Administration.
  $roles['Administration'] = array(
    'name' => 'Administration',
    'weight' => 4,
  );

  // Exported role: Data Manager.
  $roles['Data Manager'] = array(
    'name' => 'Data Manager',
    'weight' => 2,
  );

  // Exported role: Guest Blogger.
  $roles['Guest Blogger'] = array(
    'name' => 'Guest Blogger',
    'weight' => 7,
  );

  // Exported role: Information Technology.
  $roles['Information Technology'] = array(
    'name' => 'Information Technology',
    'weight' => 0,
  );

  // Exported role: Principal Investigator (PI).
  $roles['Principal Investigator (PI)'] = array(
    'name' => 'Principal Investigator (PI)',
    'weight' => 5,
  );

  // Exported role: Program Director.
  $roles['Program Director'] = array(
    'name' => 'Program Director',
    'weight' => 1,
  );

  // Exported role: Public Outreach.
  $roles['Public Outreach'] = array(
    'name' => 'Public Outreach',
    'weight' => 3,
  );

  // Exported role: Research Professional.
  $roles['Research Professional'] = array(
    'name' => 'Research Professional',
    'weight' => 6,
  );

  return $roles;
}
