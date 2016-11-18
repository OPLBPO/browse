<?php
/**
 * @file
 * browse.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function browse_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|collections|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Titles / Images',
    'weight' => '0',
    'children' => array(
      0 => 'field_details_url',
      1 => 'field_image_url',
      2 => 'field_item_format',
      3 => 'field_item_title',
      4 => 'field_resource_type',
      5 => 'field_parent_database',
      6 => 'field_external_image_url',
      7 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic|node|collections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptors|node|collections|form';
  $field_group->group_name = 'group_descriptors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descriptors',
    'weight' => '3',
    'children' => array(
      0 => 'field_format',
      1 => 'field_primary_language',
      2 => 'field_publication_data',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-descriptors field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_descriptors|node|collections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ids|node|collections|form';
  $field_group->group_name = 'group_ids';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'IDs',
    'weight' => '2',
    'children' => array(
      0 => 'field_isbns',
      1 => 'field_content_server_nid',
      2 => 'field_upcs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ids field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ids|node|collections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|help_guide|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-title field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_title|node|help_guide|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Descriptors');
  t('IDs');
  t('Title');
  t('Titles / Images');

  return $field_groups;
}
