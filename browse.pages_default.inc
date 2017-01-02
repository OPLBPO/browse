<?php
/**
 * @file
 * browse.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function browse_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'browse_collections_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Browse Collections Landing Page';
  $page->admin_description = 'Events landing page';
  $page->path = 'collections';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_browse_collections_landing_page__panel_context_cd250250-83b2-47a5-8d02-ebabdf648bbe';
  $handler->task = 'page';
  $handler->subtask = 'browse_collections_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-main-content-container-bg',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Staff Picks';
  $display->uuid = 'bc193d59-069f-4455-ad1d-84c34dcdc2f7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_browse_collections_landing_page__panel_context_cd250250-83b2-47a5-8d02-ebabdf648bbe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c5bad559-6999-4fec-8b5a-ce297bc23259';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_terms_top_level_item_formats_browse-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'browse-staff-picks',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c5bad559-6999-4fec-8b5a-ce297bc23259';
  $display->content['new-c5bad559-6999-4fec-8b5a-ce297bc23259'] = $pane;
  $display->panels['middle'][0] = 'new-c5bad559-6999-4fec-8b5a-ce297bc23259';
  $pane = new stdClass();
  $pane->pid = 'new-7e14061c-5bb6-4d29-9b4a-562a7074dd27';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_terms_top_level_item_formats_browse-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'browse-all-categories',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7e14061c-5bb6-4d29-9b4a-562a7074dd27';
  $display->content['new-7e14061c-5bb6-4d29-9b4a-562a7074dd27'] = $pane;
  $display->panels['middle'][1] = 'new-7e14061c-5bb6-4d29-9b4a-562a7074dd27';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['browse_collections_landing_page'] = $page;

  return $pages;

}
