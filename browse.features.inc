<?php
/**
 * @file
 * browse.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function browse_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function browse_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function browse_node_info() {
  $items = array(
    'collections' => array(
      'name' => t('Collections'),
      'base' => 'node_content',
      'description' => t('OPL collections from API provider resources'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
