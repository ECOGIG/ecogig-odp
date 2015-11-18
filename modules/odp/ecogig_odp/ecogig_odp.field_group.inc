<?php
/**
 * @file
 * ecogig_odp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecogig_odp_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|public_outreach|default';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_outreach';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Audience and Impact',
    'weight' => '14',
    'children' => array(
      0 => 'field_po_target_audience_s_',
      1 => 'field_po_number_impacted',
      2 => 'field_impacts_outcomes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Audience and Impact',
      'instance_settings' => array(
        'classes' => 'group-audience field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_audience|node|public_outreach|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience|node|public_outreach|form';
  $field_group->group_name = 'group_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_outreach';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Audience and Impact',
    'weight' => '1',
    'children' => array(
      0 => 'field_po_target_audience_s_',
      1 => 'field_po_number_impacted',
      2 => 'field_impacts_outcomes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audience field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_audience|node|public_outreach|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contacts|node|dataset|default';
  $field_group->group_name = 'group_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts and Stakeholders',
    'weight' => '1',
    'children' => array(
      0 => 'field_dataset_contact_person',
      1 => 'field_metadata_contact_person',
      2 => 'field_dataset_contact_person_rol',
      3 => 'field_metadata_contact_person_ro',
      4 => 'field_dataset_stakeholders',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contacts and Stakeholders',
      'instance_settings' => array(
        'classes' => 'group-contacts field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_contacts|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_extent|node|dataset|default';
  $field_group->group_name = 'group_data_extent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_metadata_information';
  $field_group->data = array(
    'label' => 'Data Extent',
    'weight' => '18',
    'children' => array(
      0 => 'field_spatial_non_spatial_select',
      1 => 'field_coordinate_list',
      2 => 'field_time_period_description',
      3 => 'field_date_range',
      4 => 'field_coordinate_list_descriptio',
      5 => 'field_research_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-data-extent field-group-fieldset',
      ),
    ),
  );
  $export['group_data_extent|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_files|node|dataset|default';
  $field_group->group_name = 'group_data_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data Files',
    'weight' => '3',
    'children' => array(
      0 => 'field_dataset_source',
      1 => 'field_file_upload',
      2 => 'field_external_data_source_url_',
      3 => 'field_file_on_server',
      4 => 'field_data_transfer_format',
      5 => 'field_existing_file_on_server',
      6 => 'field_ds_file_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Data Files',
      'instance_settings' => array(
        'classes' => 'group-data-files field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_data_files|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_information|node|dataset|form';
  $field_group->group_name = 'group_data_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Provide Data',
    'weight' => '8',
    'children' => array(
      0 => 'field_public_availability',
      1 => 'group_dataset_data',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Provide Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-data-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_data_information|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_contact|node|dataset|form';
  $field_group->group_name = 'group_dataset_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_udi_information';
  $field_group->data = array(
    'label' => 'Dataset Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_dataset_contact_person',
      1 => 'field_dataset_contact_person_rol',
      2 => 'field_dataset_stakeholders',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dataset-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dataset_contact|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_data_extent|node|dataset|form';
  $field_group->group_name = 'group_dataset_data_extent';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata_information';
  $field_group->data = array(
    'label' => 'Data Extent',
    'weight' => '13',
    'children' => array(
      0 => 'field_spatial_non_spatial_select',
      1 => 'field_coordinate_list',
      2 => 'field_time_period_description',
      3 => 'field_date_range',
      4 => 'field_coordinate_list_descriptio',
      5 => 'field_research_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dataset-data-extent field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dataset_data_extent|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_data|node|dataset|form';
  $field_group->group_name = 'group_dataset_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data_information';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '26',
    'children' => array(
      0 => 'field_dataset_source',
      1 => 'field_file_upload',
      2 => 'field_external_data_source_url_',
      3 => 'field_file_on_server',
      4 => 'field_data_transfer_format',
      5 => 'field_file_size',
      6 => 'field_existing_file_on_server',
      7 => 'field_ds_file_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dataset-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dataset_data|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_information|node|dataset|default';
  $field_group->group_name = 'group_dataset_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_dataset_purpose',
      1 => 'field_abstract',
      2 => 'field_supplemental_information_d',
      3 => 'field_griidc_udi',
      4 => 'field_task',
      5 => 'field_blog_title',
      6 => 'field_methods',
      7 => 'field_instruments',
      8 => 'field_sampling_scales_and_rates',
      9 => 'field_error_analysis',
      10 => 'field_provenance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dataset Information',
      'instance_settings' => array(
        'classes' => 'group-dataset-information field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_dataset_information|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_info|node|dataset|form';
  $field_group->group_name = 'group_dataset_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_udi_information';
  $field_group->data = array(
    'label' => 'Dataset Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_dataset_purpose',
      1 => 'field_abstract',
      2 => 'field_supplemental_information_d',
      3 => 'field_blog_title',
      4 => 'field_methods',
      5 => 'field_instruments',
      6 => 'field_sampling_scales_and_rates',
      7 => 'field_error_analysis',
      8 => 'field_provenance',
      9 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dataset-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dataset_info|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_keywords|node|dataset|form';
  $field_group->group_name = 'group_dataset_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata_information';
  $field_group->data = array(
    'label' => 'Keywords',
    'weight' => '12',
    'children' => array(
      0 => 'field_theme_keywords',
      1 => 'field_place_keywords',
      2 => 'field_topic_category_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dataset-keywords field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dataset_keywords|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_metadata_contact|node|dataset|form';
  $field_group->group_name = 'group_dataset_metadata_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata_information';
  $field_group->data = array(
    'label' => 'Metadata Contact',
    'weight' => '14',
    'children' => array(
      0 => 'field_metadata_contact_person',
      1 => 'field_metadata_contact_person_ro',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dataset-metadata-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dataset_metadata_contact|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_workflow|node|dataset|default';
  $field_group->group_name = 'group_dataset_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset Status',
    'weight' => '4',
    'children' => array(
      0 => 'field_dataset_workflow',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dataset Status',
      'instance_settings' => array(
        'classes' => 'group-dataset-workflow field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_dataset_workflow|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|students|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'students';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden Items',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'path',
      3 => 'xmlsitemap',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hidden Items',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hidden field-group-fieldset hidden',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_hidden|node|students|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_keywords|node|dataset|default';
  $field_group->group_name = 'group_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_metadata_information';
  $field_group->data = array(
    'label' => 'Keywords',
    'weight' => '17',
    'children' => array(
      0 => 'field_theme_keywords',
      1 => 'field_place_keywords',
      2 => 'field_topic_category_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-keywords field-group-fieldset',
      ),
    ),
  );
  $export['group_keywords|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata_information|node|dataset|default';
  $field_group->group_name = 'group_metadata_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata Information',
    'weight' => '2',
    'children' => array(
      0 => 'group_keywords',
      1 => 'group_data_extent',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Metadata Information',
      'instance_settings' => array(
        'classes' => 'group-metadata-information field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_metadata_information|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata_information|node|dataset|form';
  $field_group->group_name = 'group_metadata_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Provide METADATA',
    'weight' => '7',
    'children' => array(
      0 => 'field_griidc_udi',
      1 => 'group_dataset_keywords',
      2 => 'group_dataset_data_extent',
      3 => 'group_dataset_metadata_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata_information|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|participant|default';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'participant';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '6',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'classes' => 'group-notes field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_notes|node|participant|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|participant|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'participant';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '9',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notes|node|participant|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|presentation|default';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '12',
    'children' => array(
      0 => 'body',
      1 => 'field_gomri_theme',
      2 => 'field_ecogig_contribution_number',
      3 => 'field_link_single',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'classes' => 'group-notes field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_notes|node|presentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|presentation|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_gomri_theme',
      2 => 'field_ecogig_contribution_number',
      3 => 'field_link_single',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notes|node|presentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|public_outreach|default';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_outreach';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '15',
    'children' => array(
      0 => 'field_website_url',
      1 => 'field_ecogig_contribution_number',
      2 => 'field_gomri_theme',
      3 => 'field_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'classes' => 'group-notes field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_notes|node|public_outreach|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|public_outreach|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_outreach';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '2',
    'children' => array(
      0 => 'field_website_url',
      1 => 'field_ecogig_contribution_number',
      2 => 'field_gomri_theme',
      3 => 'field_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notes|node|public_outreach|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|publications|default';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '3',
    'children' => array(
      0 => 'field_ecogig_contribution_number',
      1 => 'field_publication_notes',
      2 => 'field_dataset',
      3 => 'field_gomri_theme',
      4 => 'field_link_to_publication_and_or',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'classes' => 'group-notes field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_notes|node|publications|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|publications|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '3',
    'children' => array(
      0 => 'field_ecogig_contribution_number',
      1 => 'field_publication_notes',
      2 => 'field_dataset',
      3 => 'field_gomri_theme',
      4 => 'field_link_to_publication_and_or',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notes|node|publications|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|students|default';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'students';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '3',
    'children' => array(
      0 => 'field_tesis_or_research_topic',
      1 => 'field_expected_yr_of_completion',
      2 => 'field_link_to_dissertation_or_th',
      3 => 'field_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'classes' => 'group-notes field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_notes|node|students|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|students|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'students';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '1',
    'children' => array(
      0 => 'field_tesis_or_research_topic',
      1 => 'field_expected_yr_of_completion',
      2 => 'field_link_to_dissertation_or_th',
      3 => 'field_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notes|node|students|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|workshop|default';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '2',
    'children' => array(
      0 => 'field_ecogig_contribution_number',
      1 => 'field_meeting_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
      ),
    ),
  );
  $export['group_notes|node|workshop|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|workshop|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '2',
    'children' => array(
      0 => 'field_ecogig_contribution_number',
      1 => 'field_meeting_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_notes|node|workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organizers_participants|node|workshop|default';
  $field_group->group_name = 'group_organizers_participants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organizers and Participants',
    'weight' => '1',
    'children' => array(
      0 => 'field_participant_name',
      1 => 'field_organizer_s_',
      2 => 'field_number_of_participants',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organizers-participants field-group-fieldset',
      ),
    ),
  );
  $export['group_organizers_participants|node|workshop|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organizers_participants|node|workshop|form';
  $field_group->group_name = 'group_organizers_participants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organizers and Participants',
    'weight' => '1',
    'children' => array(
      0 => 'field_participant_name',
      1 => 'field_organizer_s_',
      2 => 'field_number_of_participants',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organizers-participants field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organizers_participants|node|workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outreach_info|node|public_outreach|default';
  $field_group->group_name = 'group_outreach_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_outreach';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Outreach Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_po_partners_in_activity',
      2 => 'field_contrib_author',
      3 => 'field_date_range',
      4 => 'field_outreach_type',
      5 => 'field_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Outreach Info',
      'instance_settings' => array(
        'classes' => 'group-outreach-info field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_outreach_info|node|public_outreach|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outreach_info|node|public_outreach|form';
  $field_group->group_name = 'group_outreach_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'public_outreach';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Outreach Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_po_partners_in_activity',
      2 => 'field_contrib_author',
      3 => 'field_date_range',
      4 => 'field_outreach_type',
      5 => 'field_other',
      6 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-outreach-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_outreach_info|node|public_outreach|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participant_info|node|participant|default';
  $field_group->group_name = 'group_participant_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'participant';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participant Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_participant_role',
      1 => 'field_participant_name',
      2 => 'field_institutional_department',
      3 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Participant Information',
      'instance_settings' => array(
        'classes' => 'group-participant-info field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_participant_info|node|participant|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participant_info|node|participant|form';
  $field_group->group_name = 'group_participant_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'participant';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participant Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_participant_role',
      1 => 'field_participant_name',
      2 => 'field_institutional_department',
      3 => 'field_email',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-participant-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_participant_info|node|participant|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation_info|node|presentation|default';
  $field_group->group_name = 'group_presentation_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presentation Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_conference_name',
      1 => 'field_date_range',
      2 => 'field_presentation_type',
      3 => 'field_location_city',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Presentation Info',
      'instance_settings' => array(
        'classes' => 'group-presentation-info field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_presentation_info|node|presentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation_info|node|presentation|form';
  $field_group->group_name = 'group_presentation_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presentation Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_conference_name',
      1 => 'field_date_range',
      2 => 'field_presentation_type',
      3 => 'field_location_city',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-presentation-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_presentation_info|node|presentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presenters_authors|node|presentation|default';
  $field_group->group_name = 'group_presenters_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presenters and Authors',
    'weight' => '1',
    'children' => array(
      0 => 'field_contrib_author',
      1 => 'field_presenter_profile',
      2 => 'field_any_authors_student',
      3 => 'field_student_authors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Presenters and Authors',
      'instance_settings' => array(
        'classes' => 'group-presenters-authors field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_presenters_authors|node|presentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presenters_authors|node|presentation|form';
  $field_group->group_name = 'group_presenters_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presenters and Authors',
    'weight' => '1',
    'children' => array(
      0 => 'field_contrib_author',
      1 => 'field_presenter_profile',
      2 => 'field_any_authors_student',
      3 => 'field_student_authors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-presenters-authors field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_presenters_authors|node|presentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_info|node|publications|default';
  $field_group->group_name = 'group_publication_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_contrib_author',
      2 => 'field_any_authors_student',
      3 => 'field_grant',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publication Info',
      'instance_settings' => array(
        'classes' => 'group-publication-info field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_publication_info|node|publications|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_info|node|publications|form';
  $field_group->group_name = 'group_publication_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_contrib_author',
      2 => 'field_any_authors_student',
      3 => 'field_grant',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publication-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publication_info|node|publications|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_status|node|publications|default';
  $field_group->group_name = 'group_publication_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Status',
    'weight' => '2',
    'children' => array(
      0 => 'field_date_published',
      1 => 'field_publications_workflow',
      2 => 'field_submission_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publication Status',
      'instance_settings' => array(
        'classes' => 'group-publication-status field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_publication_status|node|publications|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_status|node|publications|form';
  $field_group->group_name = 'group_publication_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Status',
    'weight' => '2',
    'children' => array(
      0 => 'field_date_published',
      1 => 'field_publications_workflow',
      2 => 'field_submission_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publication-status field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publication_status|node|publications|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference_info|node|publications|default';
  $field_group->group_name = 'group_reference_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reference Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_doi',
      1 => 'field_year',
      2 => 'field_journal_title',
      3 => 'field_journal_volume',
      4 => 'field_page_numbers',
      5 => 'field_citation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reference Information',
      'instance_settings' => array(
        'classes' => 'group-reference-info field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_reference_info|node|publications|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference_info|node|publications|form';
  $field_group->group_name = 'group_reference_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reference Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_doi',
      1 => 'field_year',
      2 => 'field_journal_title',
      3 => 'field_journal_volume',
      4 => 'field_page_numbers',
      5 => 'field_citation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reference-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reference_info|node|publications|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_info|node|students|default';
  $field_group->group_name = 'group_student_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'students';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_institutional_department',
      1 => 'field_student_type',
      2 => 'field_student_profile',
      3 => 'field_supervisor_s_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Student Info',
      'instance_settings' => array(
        'classes' => 'group-student-info field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_student_info|node|students|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_info|node|students|form';
  $field_group->group_name = 'group_student_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'students';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_institutional_department',
      1 => 'field_student_type',
      2 => 'field_student_profile',
      3 => 'field_supervisor_s_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-student-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_student_info|node|students|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_udi_information|node|dataset|form';
  $field_group->group_name = 'group_udi_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identify a Dataset',
    'weight' => '6',
    'children' => array(
      0 => 'group_dataset_info',
      1 => 'group_dataset_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Identify a Dataset',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-udi-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_udi_information|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow_state|node|dataset|form';
  $field_group->group_name = 'group_workflow_state';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow State',
    'weight' => '9',
    'children' => array(
      0 => 'field_dataset_workflow',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Workflow State',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-workflow-state field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_workflow_state|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workshop_info|node|workshop|form';
  $field_group->group_name = 'group_workshop_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workshop Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_date_range',
      2 => 'field_location_city',
      3 => 'field_internal_external',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-workshop-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_workshop_info|node|workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workshop|node|workshop|default';
  $field_group->group_name = 'group_workshop';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workshop',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_date_range',
      2 => 'field_location_city',
      3 => 'field_internal_external',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Workshop',
      'instance_settings' => array(
        'classes' => 'group-workshop field-group-fieldset fieldset-parent',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_workshop|node|workshop|default'] = $field_group;

  return $export;
}
