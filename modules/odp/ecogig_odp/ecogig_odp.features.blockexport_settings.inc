<?php

/**
 * Implements hook_default_blockexport_settings().
 */
function ecogig_odp_default_blockexport_settings() {
  $export = array();

  $export['block_custom'][] = array(
  'bid' => 130,
  'body' => '<a class="btn btn-grey" href="/content/report-bug">Report a Bug</a>&nbsp;&nbsp;<a class="btn btn-grey" href="/content/suggest-feature">Suggest a Feature</a>',
  'info' => 'Buttons to submit bug reports and feature requests.',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 131,
  'body' => '<p><a class="btn btn-create-dataset" href="/node/add/dataset?mode=default">Request a UDI</a></p>

<p><a class="btn btn-create-dataset" href="/node/add/dataset?mode=complete">Add a COMPLETE Dataset</a></p>
',
  'info' => 'Create Dataset Button',
  'format' => 'full_html',
);

  $export['block'][] = array(
	  'bid' => 1642,
	  'module' => 'block',
	  'delta' => 130,
	  'theme' => 'ecogig_neat',
	  'status' => 0,
	  'weight' => 0,
	  'region' => -1,
	  'custom' => 0,
	  'visibility' => 0,
	  'pages' => '',
	  'title' => 'Ticket Buttons',
	  'cache' => -1,
	);
	  $export['block'][] = array(
	  'bid' => 1643,
	  'module' => 'block',
	  'delta' => 130,
	  'theme' => 'ecogig_omega',
	  'status' => 0,
	  'weight' => 0,
	  'region' => -1,
	  'custom' => 0,
	  'visibility' => 0,
	  'pages' => '',
	  'title' => 'Ticket Buttons',
	  'cache' => -1,
	);
	  $export['block'][] = array(
	  'bid' => 1644,
	  'module' => 'block',
	  'delta' => 130,
	  'theme' => 'omega',
	  'status' => 0,
	  'weight' => 0,
	  'region' => -1,
	  'custom' => 0,
	  'visibility' => 0,
	  'pages' => '',
	  'title' => 'Ticket Buttons',
	  'cache' => -1,
	);
	  $export['block'][] = array(
	  'bid' => 1645,
	  'module' => 'block',
	  'delta' => 130,
	  'theme' => 'seven',
	  'status' => 0,
	  'weight' => 0,
	  'region' => -1,
	  'custom' => 0,
	  'visibility' => 0,
	  'pages' => '',
	  'title' => 'Ticket Buttons',
	  'cache' => -1,
	);
  return $export;
}