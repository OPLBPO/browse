<?php
/**
 * @file
 * browse.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function browse_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_term_item_formats';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy term - Item Formats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h4>We got nothing in this format, absolutely nothing.</h4>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Item Format */
  $handler->display->display_options['fields']['field_browse_local_format']['id'] = 'field_browse_local_format';
  $handler->display->display_options['fields']['field_browse_local_format']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['fields']['field_browse_local_format']['field'] = 'field_browse_local_format';
  $handler->display->display_options['fields']['field_browse_local_format']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'browse_items' => 'browse_items',
    'database' => 'database',
    'zinio_data' => 'zinio_data',
    'freegal' => 'freegal',
    'hoopla' => 'hoopla',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/xxxxxx/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Embed - Parent-Child Term */
  $handler = $view->new_display('embed', 'Embed - Parent-Child Term', 'embed_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'new_browse_version';
  $handler->display->display_options['style_options']['skin'] = 'fullwidth';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_browse_local_format' => 0,
    'nid' => 0,
    'type' => 0,
    'title_field' => 0,
    'field_browse_authors' => 0,
    'title_field_1' => 0,
    'field_database' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Title overwritten by image */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'Title overwritten by image';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = '[title]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_browse_authors']['id'] = 'field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['table'] = 'field_data_field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['field'] = 'field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['label'] = '';
  $handler->display->display_options['fields']['field_browse_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_browse_authors']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_browse_authors']['alter']['text'] = '<div class="overlay">
<div class="title-author-text">
<span class="title">[title]</span><br>
<span class="author">[field_browse_authors]</span>
</div>
</div>';
  $handler->display->display_options['fields']['field_browse_authors']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Item format (field_item_format) */
  $handler->display->display_options['arguments']['field_item_format_tid']['id'] = 'field_item_format_tid';
  $handler->display->display_options['arguments']['field_item_format_tid']['table'] = 'field_data_field_item_format';
  $handler->display->display_options['arguments']['field_item_format_tid']['field'] = 'field_item_format_tid';
  $handler->display->display_options['arguments']['field_item_format_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_item_format_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_item_format_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_item_format_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collections' => 'collections',
  );

  /* Display: Embed - Child Term - Image Grid */
  $handler = $view->new_display('embed', 'Embed - Child Term - Image Grid', 'embed_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = 'WHY NO TITLE??';
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Item format (field_item_format) */
  $handler->display->display_options['arguments']['field_item_format_tid']['id'] = 'field_item_format_tid';
  $handler->display->display_options['arguments']['field_item_format_tid']['table'] = 'field_data_field_item_format';
  $handler->display->display_options['arguments']['field_item_format_tid']['field'] = 'field_item_format_tid';
  $handler->display->display_options['arguments']['field_item_format_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_item_format_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_item_format_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_item_format_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collections' => 'collections',
  );

  /* Display: Embed - Parent-Child Term - Test */
  $handler = $view->new_display('embed', 'Embed - Parent-Child Term - Test', 'embed_3');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'new_browse_version';
  $handler->display->display_options['style_options']['skin'] = 'fullwidth';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_browse_local_format' => 0,
    'nid' => 0,
    'type' => 0,
    'title_field' => 0,
    'field_browse_authors' => 0,
    'title_field_1' => 0,
    'field_database' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '[field_database]';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Item Format (field_browse_local_format) */
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['id'] = 'field_browse_local_format_tid';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['field'] = 'field_browse_local_format_tid';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_faq_target_id']['id'] = 'field_faq_target_id';
  $handler->display->display_options['relationships']['field_faq_target_id']['table'] = 'field_data_field_faq';
  $handler->display->display_options['relationships']['field_faq_target_id']['field'] = 'field_faq_target_id';
  $handler->display->display_options['relationships']['field_faq_target_id']['relationship'] = 'field_browse_local_format_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = 'WHY NO TITLE??';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_browse_authors']['id'] = 'field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['table'] = 'field_data_field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['field'] = 'field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['label'] = '';
  $handler->display->display_options['fields']['field_browse_authors']['element_label_colon'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['type'] = 'ul';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_30' => 0,
    'forums' => 0,
    'vocabulary_37' => 0,
    'vocabulary_38' => 0,
    'vocabulary_40' => 0,
    'vocabulary_39' => 0,
    'age_group' => 0,
    'appointment_types' => 0,
    'audience' => 0,
    'event_series' => 0,
    'event_type' => 0,
    'faq_tag' => 0,
    'item_formats' => 0,
    'vocabulary_21' => 0,
    'vocabulary_11' => 0,
    'meeting_room_rate_classes' => 0,
    'opening_hours_types' => 0,
    'search_tags' => 0,
    'vocabulary_31' => 0,
    'vocabulary_41' => 0,
    'vocabulary_27' => 0,
    'vocabulary_4' => 0,
    'vocabulary_29' => 0,
  );
  /* Field: Taxonomy term: Database */
  $handler->display->display_options['fields']['field_database']['id'] = 'field_database';
  $handler->display->display_options['fields']['field_database']['table'] = 'field_data_field_database';
  $handler->display->display_options['fields']['field_database']['field'] = 'field_database';
  $handler->display->display_options['fields']['field_database']['relationship'] = 'field_browse_local_format_tid';
  $handler->display->display_options['fields']['field_database']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_database']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_database']['settings'] = array(
    'view_mode' => 'resource_title_help',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_database']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_database']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_database']['multi_type'] = 'ul';

  /* Display: Embed - Parent-Child Term - Test/Temp */
  $handler = $view->new_display('embed', 'Embed - Parent-Child Term - Test/Temp', 'embed_4');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'new_browse_version';
  $handler->display->display_options['style_options']['skin'] = 'fullwidth';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_browse_local_format' => 0,
    'nid' => 0,
    'type' => 0,
    'title_field' => 0,
    'field_browse_authors' => 0,
    'title_field_1' => 0,
    'field_database' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Item Format (field_browse_local_format) */
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['id'] = 'field_browse_local_format_tid';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['field'] = 'field_browse_local_format_tid';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item Format */
  $handler->display->display_options['fields']['field_browse_local_format']['id'] = 'field_browse_local_format';
  $handler->display->display_options['fields']['field_browse_local_format']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['fields']['field_browse_local_format']['field'] = 'field_browse_local_format';
  $handler->display->display_options['fields']['field_browse_local_format']['label'] = '';
  $handler->display->display_options['fields']['field_browse_local_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_browse_local_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_browse_local_format']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'TYPE';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = 'WHY NO TITLE??';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_browse_authors']['id'] = 'field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['table'] = 'field_data_field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['field'] = 'field_browse_authors';
  $handler->display->display_options['fields']['field_browse_authors']['label'] = '';
  $handler->display->display_options['fields']['field_browse_authors']['element_label_colon'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  /* Field: Field: FAQ */
  $handler->display->display_options['fields']['field_faq']['id'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['table'] = 'field_data_field_faq';
  $handler->display->display_options['fields']['field_faq']['field'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['settings'] = array(
    'link' => 0,
  );

  /* Display: Embed - Link | Help */
  $handler = $view->new_display('embed', 'Embed - Link | Help', 'embed_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found: %1';
  $handler->display->display_options['empty']['area']['format'] = '2';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_database_taxonomy_term_1']['id'] = 'reverse_field_database_taxonomy_term_1';
  $handler->display->display_options['relationships']['reverse_field_database_taxonomy_term_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_database_taxonomy_term_1']['field'] = 'reverse_field_database_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_database_taxonomy_term_1']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Database Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['alter']['text'] = 'Go To Resource';
  $handler->display->display_options['fields']['field_database_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['alter']['path'] = '[field_database_link-url]';
  $handler->display->display_options['fields']['field_database_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  /* Field: Field: FAQ */
  $handler->display->display_options['fields']['field_faq']['id'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['table'] = 'field_data_field_faq';
  $handler->display->display_options['fields']['field_faq']['field'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['label'] = '';
  $handler->display->display_options['fields']['field_faq']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faq']['alter']['text'] = 'Help Guide';
  $handler->display->display_options['fields']['field_faq']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_faq']['alter']['path'] = '[field_faq]';
  $handler->display->display_options['fields']['field_faq']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq']['settings'] = array(
    'link' => 1,
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'reverse_field_database_taxonomy_term_1';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Field: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'reverse_field_database_taxonomy_term_1';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['taxonomy_term_item_formats'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<h4>We got nothing in this format, absolutely nothing.</h4>'),
    t('Title'),
    t('Item Format'),
    t('Nid'),
    t('Type'),
    t('All'),
    t('%1'),
    t('Page'),
    t('Feed'),
    t('Embed - Parent-Child Term'),
    t('[title]'),
    t('<div class="overlay">
<div class="title-author-text">
<span class="title">[title]</span><br>
<span class="author">[field_browse_authors]</span>
</div>
</div>'),
    t('&nbsp;'),
    t('Embed - Child Term - Image Grid'),
    t('WHY NO TITLE??'),
    t('Embed - Parent-Child Term - Test'),
    t('[field_database]'),
    t('term from field_browse_local_format'),
    t('Content entity referenced from field_faq'),
    t('All taxonomy terms'),
    t('Database'),
    t('Embed - Parent-Child Term - Test/Temp'),
    t('TYPE'),
    t('FAQ'),
    t('Embed - Link | Help'),
    t('No Results Found: %1'),
    t('Taxonomy term referencing Content from field_database'),
    t('Go To Resource'),
    t('Help Guide'),
    t('Term ID'),
    t('.'),
  );
  $export['taxonomy_term_item_formats'] = $view;

  $view = new view();
  $view->name = 'taxonomy_terms_item_format_parents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy terms - Item Format Parents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Field: FAQ */
  $handler->display->display_options['fields']['field_faq']['id'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['table'] = 'field_data_field_faq';
  $handler->display->display_options['fields']['field_faq']['field'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['label'] = 'Related Help / FAQs';
  $handler->display->display_options['fields']['field_faq']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_faq']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_faq']['multi_type'] = 'ul';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats';
  $handler->display->display_options['fields']['view']['display'] = 'embed_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Field: Taxonomy view - item format parents */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['ui_name'] = 'Taxonomy view - item format parents';
  $handler->display->display_options['fields']['view_1']['view'] = 'taxonomy_terms_item_format_parents';
  $handler->display->display_options['fields']['view_1']['display'] = 'page';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    50 => '50',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    7 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy-viewer';

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term_1']['id'] = 'edit_term_1';
  $handler->display->display_options['fields']['edit_term_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term_1']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term_1']['label'] = '';
  $handler->display->display_options['fields']['edit_term_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term_1']['text'] = 'Edit Term';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats';
  $handler->display->display_options['fields']['view']['display'] = 'embed_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_faq_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Help';
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_class'] = 'colorbox-inline';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;

  /* Display: Embed - Temp (test) */
  $handler = $view->new_display('embed', 'Embed - Temp (test)', 'embed_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Database Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['relationship'] = 'field_database_target_id';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['alter']['text'] = '<div>[field_database_link-attributes]</div>
<div>[field_database_link] </div>
<div>[field_database_link-url] </div>';
  $handler->display->display_options['fields']['field_database_link']['alter']['path'] = '[field_database_link-url] ';
  $handler->display->display_options['fields']['field_database_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_faq_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Help Guide';
  $handler->display->display_options['fields']['nid']['element_class'] = '[name]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term_1']['id'] = 'edit_term_1';
  $handler->display->display_options['fields']['edit_term_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term_1']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term_1']['label'] = '';
  $handler->display->display_options['fields']['edit_term_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term_1']['text'] = 'Edit Term';

  /* Display: Embed - Child Term - Description + Links */
  $handler = $view->new_display('embed', 'Embed - Child Term - Description + Links', 'embed_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_faq_target_id']['id'] = 'field_faq_target_id';
  $handler->display->display_options['relationships']['field_faq_target_id']['table'] = 'field_data_field_faq';
  $handler->display->display_options['relationships']['field_faq_target_id']['field'] = 'field_faq_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_database_target_id']['id'] = 'field_database_target_id';
  $handler->display->display_options['relationships']['field_database_target_id']['table'] = 'field_data_field_database';
  $handler->display->display_options['relationships']['field_database_target_id']['field'] = 'field_database_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_class'] = 'term-detail-page-description';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Content: Database Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['relationship'] = 'field_database_target_id';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['alter']['text'] = '<div>[field_database_link-attributes]</div>
<div>[field_database_link] </div>
<div>[field_database_link-url] </div>';
  $handler->display->display_options['fields']['field_database_link']['alter']['path'] = '[field_database_link-url] ';
  $handler->display->display_options['fields']['field_database_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['element_class'] = 'opl-resource-link';
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_faq_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Help Guide';
  $handler->display->display_options['fields']['nid']['element_class'] = '[name]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Embed - Test */
  $handler = $view->new_display('embed', 'Embed - Test', 'embed_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'format-li';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_database_target_id']['id'] = 'field_database_target_id';
  $handler->display->display_options['relationships']['field_database_target_id']['table'] = 'field_data_field_database';
  $handler->display->display_options['relationships']['field_database_target_id']['field'] = 'field_database_target_id';
  $handler->display->display_options['relationships']['field_database_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Database */
  $handler->display->display_options['fields']['field_database']['id'] = 'field_database';
  $handler->display->display_options['fields']['field_database']['table'] = 'field_data_field_database';
  $handler->display->display_options['fields']['field_database']['field'] = 'field_database';
  $handler->display->display_options['fields']['field_database']['label'] = '';
  $handler->display->display_options['fields']['field_database']['element_class'] = 'database-child';
  $handler->display->display_options['fields']['field_database']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_database']['settings'] = array(
    'view_mode' => 'database_vendor_link',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_database']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_database']['multi_type'] = 'ul';
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term_1']['id'] = 'edit_term_1';
  $handler->display->display_options['fields']['edit_term_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term_1']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term_1']['label'] = '';
  $handler->display->display_options['fields']['edit_term_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term_1']['text'] = 'Edit Term';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats';
  $handler->display->display_options['fields']['view']['display'] = 'embed_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $translatables['taxonomy_terms_item_format_parents'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Parent'),
    t('.'),
    t('Related Help / FAQs'),
    t('View'),
    t('All'),
    t('Vocabulary'),
    t('Page'),
    t('Embed'),
    t('Edit Term'),
    t('Help'),
    t('Embed - Temp (test)'),
    t('<div>[field_database_link-attributes]</div>
<div>[field_database_link] </div>
<div>[field_database_link-url] </div>'),
    t('Help Guide'),
    t('Embed - Child Term - Description + Links'),
    t('Content entity referenced from field_faq'),
    t('Content entity referenced from field_database'),
    t('Embed - Test'),
  );
  $export['taxonomy_terms_item_format_parents'] = $view;

  return $export;
}
