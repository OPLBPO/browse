<?php
/**
 * @file
 * browse.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function browse_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_server_collections_feed-xpathparser_10-rewrite';
  $feeds_tamper->importer = 'content_server_collections_feed';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Media cover for [xpathparser:1]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['content_server_collections_feed-xpathparser_10-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'content_server_collections_feed-xpathparser_7-rewrite';
  $feeds_tamper->importer = 'content_server_collections_feed';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Cover for [xpathparser:7]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['content_server_collections_feed-xpathparser_7-rewrite'] = $feeds_tamper;

  return $export;
}
