<?php

function ecogig_odp_get_vocabs(){
  $vocab_objects = taxonomy_get_vocabularies();
  $vocabs = array();
  foreach($vocab_objects as $obj){
    $vocabs[$obj->machine_name] = $obj->vid;
  }
  return $vocabs;
}

function ecogig_odp_get_workflow_id($machine_name){
  $wid = '';

  $result = db_select('workflows')
    ->fields('workflows', array('wid'))
    ->condition('name', $machine_name, '=')
    ->execute();

  foreach ($result as $workflow) {
    $wid = $workflow->wid;
  }

  return $wid;
}

function ecogig_odp_get_workflows(){
  $workflows = array();

  $result = db_select('workflows')
    ->fields('workflows')
    ->execute();

  foreach ($result as $workflow) {
    $workflows[$workflow->wid] = $workflow;
  }

  return $workflows;
}

function ecogig_odp_get_workflow($machine_name){
  $wid = '';

  $result = db_select('workflows')
    ->fields('workflows', array('wid'))
    ->condition('name', $machine_name, '=')
    ->execute();

  foreach ($result as $workflow) {
    $wid = $workflow->wid;
  }

  return $wid;
}

function ecogig_odp_get_workflow_state($wid, $machine_name){
  $sid = '';

  $result = db_select('workflow_states')
    ->fields('workflow_states', array('sid'))
    ->condition('wid', $wid, '=')
    ->condition('name', $machine_name, '=')
    ->execute();

  foreach ($result as $state) {
    $sid = $state->sid;
  }

  return $sid;
}

function ecogig_odp_get_workflow_states($wid = NULL){
  $states = array();

  if(!empty($wid)){
    $result = db_select('workflow_states')
      ->fields('workflow_states')
      ->condition('wid', $wid, '=')
      ->execute();
  }
  else{
    $result = db_select('workflow_states')
      ->fields('workflow_states')
      ->execute();
  }

  foreach ($result as $state) {
    $states[$state->name] = $state;
  }

  return $states;
}

function ecogig_odp_load_profiles(){
  $profiles = array();

  $query = new EntityFieldQuery;

  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'profile')
    ->propertyCondition('status', 1);

  $results = $query->execute();
  if (isset($results['node'])) {
    $profiles = node_load_multiple(array_keys($results['node']));
  }

  return $profiles;
}

function ecogig_odp_convert_country_code($code){
  $codes = array(
  	'AF' => 'AFG','AX' => 'ALA','AL' => 'ALB','DZ' => 'DZA','AS' => 'ASM','AD' => 'AND','AO' => 'AGO','AI' => 'AIA',
  	'AQ' => 'ATA','AG' => 'ATG','AR' => 'ARG','AM' => 'ARM','AW' => 'ABW','AU' => 'AUS','AT' => 'AUT','AZ' => 'AZE',
  	'BS' => 'BHS','BH' => 'BHR','BD' => 'BGD','BB' => 'BRB','BY' => 'BLR','BE' => 'BEL','BZ' => 'BLZ','BJ' => 'BEN',
  	'BM' => 'BMU','BT' => 'BTN','BO' => 'BOL','BQ' => 'BES','BA' => 'BIH','BW' => 'BWA','BV' => 'BVT','BR' => 'BRA',
  	'IO' => 'IOT','BN' => 'BRN','BG' => 'BGR','BF' => 'BFA','BI' => 'BDI','CV' => 'CPV','KH' => 'KHM','CM' => 'CMR',
  	'CA' => 'CAN','KY' => 'CYM','CF' => 'CAF','TD' => 'TCD','CL' => 'CHL','CN' => 'CHN','CX' => 'CXR','CC' => 'CCK',
  	'CO' => 'COL','KM' => 'COM','CD' => 'COD','CG' => 'COG','CK' => 'COK','CR' => 'CRI','CI' => 'CIV','HR' => 'HRV',
  	'CU' => 'CUB','CW' => 'CUW','CY' => 'CYP','CZ' => 'CZE','DK' => 'DNK','DJ' => 'DJI','DM' => 'DMA','DO' => 'DOM',
  	'EC' => 'ECU','EG' => 'EGY','SV' => 'SLV','GQ' => 'GNQ','ER' => 'ERI','EE' => 'EST','ET' => 'ETH','FK' => 'FLK',
  	'FO' => 'FRO','FJ' => 'FJI','FI' => 'FIN','FR' => 'FRA','GF' => 'GUF','PF' => 'PYF','TF' => 'ATF','GA' => 'GAB',
  	'GM' => 'GMB','GE' => 'GEO','DE' => 'DEU','GH' => 'GHA','GI' => 'GIB','GR' => 'GRC','GL' => 'GRL','GD' => 'GRD',
  	'GP' => 'GLP','GU' => 'GUM','GT' => 'GTM','GG' => 'GGY','GN' => 'GIN','GW' => 'GNB','GY' => 'GUY','HT' => 'HTI',
  	'HM' => 'HMD','VA' => 'VAT','HN' => 'HND','HK' => 'HKG','HU' => 'HUN','IS' => 'ISL','IN' => 'IND','ID' => 'IDN',
  	'IR' => 'IRN','IQ' => 'IRQ','IE' => 'IRL','IM' => 'IMN','IL' => 'ISR','IT' => 'ITA','JM' => 'JAM','JP' => 'JPN',
  	'JE' => 'JEY','JO' => 'JOR','KZ' => 'KAZ','KE' => 'KEN','KI' => 'KIR','KP' => 'PRK','KR' => 'KOR','KW' => 'KWT',
  	'KG' => 'KGZ','LA' => 'LAO','LV' => 'LVA','LB' => 'LBN','LS' => 'LSO','LR' => 'LBR','LY' => 'LBY','LI' => 'LIE',
  	'LT' => 'LTU','LU' => 'LUX','MO' => 'MAC','MK' => 'MKD','MG' => 'MDG','MW' => 'MWI','MY' => 'MYS','MV' => 'MDV',
  	'ML' => 'MLI','MT' => 'MLT','MH' => 'MHL','MQ' => 'MTQ','MR' => 'MRT','MU' => 'MUS','YT' => 'MYT','MX' => 'MEX',
  	'FM' => 'FSM','MD' => 'MDA','MC' => 'MCO','MN' => 'MNG','ME' => 'MNE','MS' => 'MSR','MA' => 'MAR','MZ' => 'MOZ',
  	'MM' => 'MMR','NA' => 'NAM','NR' => 'NRU','NP' => 'NPL','NL' => 'NLD','NC' => 'NCL','NZ' => 'NZL','NI' => 'NIC',
  	'NE' => 'NER','NG' => 'NGA','NU' => 'NIU','NF' => 'NFK','MP' => 'MNP','NO' => 'NOR','OM' => 'OMN','PK' => 'PAK',
  	'PW' => 'PLW','PS' => 'PSE','PA' => 'PAN','PG' => 'PNG','PY' => 'PRY','PE' => 'PER','PH' => 'PHL','PN' => 'PCN',
  	'PL' => 'POL','PT' => 'PRT','PR' => 'PRI','QA' => 'QAT','RE' => 'REU','RO' => 'ROU','RU' => 'RUS','RW' => 'RWA',
  	'BL' => 'BLM','SH' => 'SHN','KN' => 'KNA','LC' => 'LCA','MF' => 'MAF','PM' => 'SPM','VC' => 'VCT','WS' => 'WSM',
  	'SM' => 'SMR','ST' => 'STP','SA' => 'SAU','SN' => 'SEN','RS' => 'SRB','SC' => 'SYC','SL' => 'SLE','SG' => 'SGP',
  	'SX' => 'SXM','SK' => 'SVK','SI' => 'SVN','SB' => 'SLB','SO' => 'SOM','ZA' => 'ZAF','GS' => 'SGS','SS' => 'SSD',
  	'ES' => 'ESP','LK' => 'LKA','SD' => 'SDN','SR' => 'SUR','SJ' => 'SJM','SZ' => 'SWZ','SE' => 'SWE','CH' => 'CHE',
  	'SY' => 'SYR','TW' => 'TWN','TJ' => 'TJK','TZ' => 'TZA','TH' => 'THA','TL' => 'TLS','TG' => 'TGO','TK' => 'TKL',
  	'TO' => 'TON','TT' => 'TTO','TN' => 'TUN','TR' => 'TUR','TM' => 'TKM','TC' => 'TCA','TV' => 'TUV','UG' => 'UGA',
  	'UA' => 'UKR','AE' => 'ARE','GB' => 'GBR','UM' => 'UMI','US' => 'USA','UY' => 'URY','UZ' => 'UZB','VU' => 'VUT',
  	'VE' => 'VEN','VN' => 'VNM','VG' => 'VGB','VI' => 'VIR','WF' => 'WLF','EH' => 'ESH','YE' => 'YEM','ZM' => 'ZMB',
  	'ZW' => 'ZWE',
  );

  $converted_code = !empty($codes[$code]) ? $codes[$code] : $code;
  return $converted_code;
}
