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
  $field_group->identifier = 'group_databases|taxonomy_term|item_formats|form';
  $field_group->group_name = 'group_databases';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'item_formats';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Database(s)',
    'weight' => '1',
    'children' => array(
      0 => 'field_database',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-databases field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_databases|taxonomy_term|item_formats|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq|taxonomy_term|item_formats|form';
  $field_group->group_name = 'group_faq';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'item_formats';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FAQ Reference',
    'weight' => '2',
    'children' => array(
      0 => 'field_faq',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faq field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_faq|taxonomy_term|item_formats|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Database(s)');
  t('FAQ Reference');

  return $field_groups;
}
