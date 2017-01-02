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
  $view->name = 'opl_databases_in_collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OPL Databases in Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Online resources';
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'search-result-item';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* Relationship: Flags: bookmarks */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarks';
  /* Relationship: Content: Item Format (field_browse_local_format) */
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['id'] = 'field_browse_local_format_tid';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['relationships']['field_browse_local_format_tid']['field'] = 'field_browse_local_format_tid';
  /* Field: Content: Database Link */
  $handler->display->display_options['fields']['field_database_link']['id'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['table'] = 'field_data_field_database_link';
  $handler->display->display_options['fields']['field_database_link']['field'] = 'field_database_link';
  $handler->display->display_options['fields']['field_database_link']['label'] = '';
  $handler->display->display_options['fields']['field_database_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_database_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_database_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_database_link']['type'] = 'link_plain';
  /* Field: Content: Feature Box Image */
  $handler->display->display_options['fields']['field_image_feature_box']['id'] = 'field_image_feature_box';
  $handler->display->display_options['fields']['field_image_feature_box']['table'] = 'field_data_field_image_feature_box';
  $handler->display->display_options['fields']['field_image_feature_box']['field'] = 'field_image_feature_box';
  $handler->display->display_options['fields']['field_image_feature_box']['label'] = '';
  $handler->display->display_options['fields']['field_image_feature_box']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_feature_box']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_feature_box']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_feature_box']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_db_abstract']['id'] = 'field_db_abstract';
  $handler->display->display_options['fields']['field_db_abstract']['table'] = 'field_data_field_db_abstract';
  $handler->display->display_options['fields']['field_db_abstract']['field'] = 'field_db_abstract';
  $handler->display->display_options['fields']['field_db_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_db_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Note */
  $handler->display->display_options['fields']['field_resource_note']['id'] = 'field_resource_note';
  $handler->display->display_options['fields']['field_resource_note']['table'] = 'field_data_field_resource_note';
  $handler->display->display_options['fields']['field_resource_note']['field'] = 'field_resource_note';
  $handler->display->display_options['fields']['field_resource_note']['hide_empty'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: In library use only */
  $handler->display->display_options['fields']['field_resource_in_library']['id'] = 'field_resource_in_library';
  $handler->display->display_options['fields']['field_resource_in_library']['table'] = 'field_data_field_resource_in_library';
  $handler->display->display_options['fields']['field_resource_in_library']['field'] = 'field_resource_in_library';
  $handler->display->display_options['fields']['field_resource_in_library']['element_label_colon'] = FALSE;
  /* Field: Content: Unilingual resource */
  $handler->display->display_options['fields']['field_unilingual_resource']['id'] = 'field_unilingual_resource';
  $handler->display->display_options['fields']['field_unilingual_resource']['table'] = 'field_data_field_unilingual_resource';
  $handler->display->display_options['fields']['field_unilingual_resource']['field'] = 'field_unilingual_resource';
  $handler->display->display_options['fields']['field_unilingual_resource']['label'] = '';
  $handler->display->display_options['fields']['field_unilingual_resource']['element_label_colon'] = FALSE;
  /* Field: Content: Licence expires */
  $handler->display->display_options['fields']['field_licence_expires']['id'] = 'field_licence_expires';
  $handler->display->display_options['fields']['field_licence_expires']['table'] = 'field_data_field_licence_expires';
  $handler->display->display_options['fields']['field_licence_expires']['field'] = 'field_licence_expires';
  $handler->display->display_options['fields']['field_licence_expires']['settings'] = array(
    'format_type' => 'event_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'multiple_relative' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'item_formats' => 'item_formats',
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
    'imagine_space_project_streams' => 0,
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
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Item Format (field_browse_local_format) */
  $handler->display->display_options['filters']['field_browse_local_format_tid']['id'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['field'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['value'] = array(
    1711 => '1711',
  );
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['operator_id'] = 'field_browse_local_format_tid_op';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['label'] = 'Item Format (field_browse_local_format)';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['operator'] = 'field_browse_local_format_tid_op';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['identifier'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
  );
  $handler->display->display_options['filters']['field_browse_local_format_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['vocabulary'] = 'item_formats';

  /* Display: Embed - Research Databases */
  $handler = $view->new_display('embed', 'Embed - Research Databases', 'embed_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Item Format (field_browse_local_format) */
  $handler->display->display_options['filters']['field_browse_local_format_tid']['id'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['field'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['value'] = array(
    1711 => '1711',
  );
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['operator_id'] = 'field_browse_local_format_tid_op';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['label'] = 'Item Format (field_browse_local_format)';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['operator'] = 'field_browse_local_format_tid_op';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['identifier'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
  );
  $handler->display->display_options['filters']['field_browse_local_format_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['vocabulary'] = 'item_formats';
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_target_id']['id'] = 'field_category_target_id';
  $handler->display->display_options['filters']['field_category_target_id']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_target_id']['field'] = 'field_category_target_id';
  $handler->display->display_options['filters']['field_category_target_id']['value'] = array(
    1780 => '1780',
    1785 => '1785',
    1786 => '1786',
    1787 => '1787',
    1788 => '1788',
    1789 => '1789',
    1790 => '1790',
    1791 => '1791',
    1792 => '1792',
    1793 => '1793',
    1795 => '1795',
    1796 => '1796',
    1799 => '1799',
    1800 => '1800',
    1801 => '1801',
    1802 => '1802',
    1803 => '1803',
    1804 => '1804',
    1805 => '1805',
    1806 => '1806',
    1807 => '1807',
    1808 => '1808',
    1809 => '1809',
    1810 => '1810',
    1811 => '1811',
    1812 => '1812',
    1813 => '1813',
    1815 => '1815',
    1816 => '1816',
    1817 => '1817',
    1818 => '1818',
    1819 => '1819',
    1820 => '1820',
    1821 => '1821',
    1822 => '1822',
    1823 => '1823',
    1825 => '1825',
    1827 => '1827',
    1828 => '1828',
    1830 => '1830',
  );
  $handler->display->display_options['filters']['field_category_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_target_id']['expose']['operator_id'] = 'field_category_target_id_op';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['operator'] = 'field_category_target_id_op';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_category_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
  );
  $handler->display->display_options['filters']['field_category_target_id']['expose']['reduce'] = TRUE;

  /* Display: Embed - Online Courses */
  $handler = $view->new_display('embed', 'Embed - Online Courses', 'embed_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'database' => 'database',
  );
  /* Filter criterion: Content: Item Format (field_browse_local_format) */
  $handler->display->display_options['filters']['field_browse_local_format_tid']['id'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['table'] = 'field_data_field_browse_local_format';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['field'] = 'field_browse_local_format_tid';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['value'] = array(
    1659 => '1659',
  );
  $handler->display->display_options['filters']['field_browse_local_format_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_browse_local_format_tid']['vocabulary'] = 'item_formats';
  $translatables['opl_databases_in_collections'] = array(
    t('Master'),
    t('Online resources'),
    t('plus'),
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
    t('flag'),
    t('term from field_browse_local_format'),
    t('Note'),
    t('In library use only'),
    t('Licence expires'),
    t('All taxonomy terms'),
    t('Item Format (field_browse_local_format)'),
    t('Embed - Research Databases'),
    t('more'),
    t('Category'),
    t('Embed - Online Courses'),
  );
  $export['opl_databases_in_collections'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_item_formats_front_page';
  $view->description = 'Displays the grid of Collection Items for each taxonomy term on the front page';
  $view->tag = 'Front Page, Collection Items';
  $view->base_table = 'node';
  $view->human_name = 'Collection Items - Front Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  $handler->display->display_options['empty']['area']['content'] = '<h4>Content coming soon!</h4>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Field: Content: Title */
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
    'zinio_data' => 'zinio_data',
    'freegal' => 'freegal',
    'hoopla' => 'hoopla',
  );

  /* Display: Embed - Collection Items */
  $handler = $view->new_display('embed', 'Embed - Collection Items', 'embed_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Details url */
  $handler->display->display_options['fields']['field_details_url']['id'] = 'field_details_url';
  $handler->display->display_options['fields']['field_details_url']['table'] = 'field_data_field_details_url';
  $handler->display->display_options['fields']['field_details_url']['field'] = 'field_details_url';
  $handler->display->display_options['fields']['field_details_url']['label'] = '';
  $handler->display->display_options['fields']['field_details_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_details_url']['element_label_colon'] = FALSE;
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
  /* Field: Content: External Image URL */
  $handler->display->display_options['fields']['field_external_image_url']['id'] = 'field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['field'] = 'field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_external_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_external_image_url']['alter']['path'] = '[field_details_url]';
  $handler->display->display_options['fields']['field_external_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_image_url']['type'] = 'imagecache_external_image';
  $handler->display->display_options['fields']['field_external_image_url']['settings'] = array(
    'imagecache_external_style' => 'opl_carousel_or_featured_image__350px_x_240px_',
    'imagecache_external_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_details_url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
  /* Filter criterion: Content: External Image URL (field_external_image_url:url) */
  $handler->display->display_options['filters']['field_external_image_url_url']['id'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['field'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: External Image URL (field_external_image_url:url) */
  $handler->display->display_options['filters']['field_external_image_url_url_1']['id'] = 'field_external_image_url_url_1';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['field'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['value'] = 'http://sandbox.biblioottawalibrary.ca/content-server/';
  $translatables['taxonomy_term_item_formats_front_page'] = array(
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
    t('<h4>Content coming soon!</h4>'),
    t('Title'),
    t('Item Format'),
    t('Nid'),
    t('Type'),
    t('All'),
    t('%1'),
    t('Embed - Collection Items'),
  );
  $export['taxonomy_term_item_formats_front_page'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_item_formats_top_level';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy term - Item Formats - Top Level';
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
  $handler->display->display_options['empty']['area']['content'] = '<h4>Content coming soon!</h4>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Field: Content: Title */
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'WHY NO RESULT??';
  $handler->display->display_options['empty']['area']['format'] = '2';
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
  /* Field: Content: Image URL */
  $handler->display->display_options['fields']['field_image_url']['id'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['table'] = 'field_data_field_image_url';
  $handler->display->display_options['fields']['field_image_url']['field'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_url']['alter']['text'] = '<img src="[field_image_url]" />';
  $handler->display->display_options['fields']['field_image_url']['settings'] = array(
    'imagecache_external_style' => 'thumbnail',
    'imagecache_external_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
  /* Filter criterion: Content: Image URL (field_image_url) */
  $handler->display->display_options['filters']['field_image_url_value']['id'] = 'field_image_url_value';
  $handler->display->display_options['filters']['field_image_url_value']['table'] = 'field_data_field_image_url';
  $handler->display->display_options['filters']['field_image_url_value']['field'] = 'field_image_url_value';
  $handler->display->display_options['filters']['field_image_url_value']['operator'] = 'not empty';

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
  /* Field: Content: Title */
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
  /* Field: Taxonomy term: FAQ */
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
  /* Sort criterion: Content: Title (title_field) */
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

  /* Display: Embed - Parent-Child Card */
  $handler = $view->new_display('embed', 'Embed - Parent-Child Card', 'embed_2');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  $handler->display->display_options['empty']['area']['content'] = 'Content coming soon!';
  $handler->display->display_options['empty']['area']['format'] = '2';
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
  /* Field: Content: Details url */
  $handler->display->display_options['fields']['field_details_url']['id'] = 'field_details_url';
  $handler->display->display_options['fields']['field_details_url']['table'] = 'field_data_field_details_url';
  $handler->display->display_options['fields']['field_details_url']['field'] = 'field_details_url';
  $handler->display->display_options['fields']['field_details_url']['label'] = '';
  $handler->display->display_options['fields']['field_details_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_details_url']['alter']['text'] = '<a href="[field_details_url]" >[title]</a>';
  $handler->display->display_options['fields']['field_details_url']['element_label_colon'] = FALSE;
  /* Field: Content: External Image URL */
  $handler->display->display_options['fields']['field_external_image_url']['id'] = 'field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['field'] = 'field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_external_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_external_image_url']['alter']['path'] = '[field_details_url]';
  $handler->display->display_options['fields']['field_external_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_image_url']['type'] = 'imagecache_external_image';
  $handler->display->display_options['fields']['field_external_image_url']['settings'] = array(
    'imagecache_external_style' => 'blog_event_card_image',
    'imagecache_external_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_details_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
  /* Filter criterion: Content: External Image URL (field_external_image_url:url) */
  $handler->display->display_options['filters']['field_external_image_url_url']['id'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['field'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: External Image URL (field_external_image_url:url) */
  $handler->display->display_options['filters']['field_external_image_url_url_1']['id'] = 'field_external_image_url_url_1';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['field'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['value'] = 'http://sandbox.biblioottawalibrary.ca/content-server/';

  /* Display: Embed - Parent-Child Card (Medium Size) */
  $handler = $view->new_display('embed', 'Embed - Parent-Child Card (Medium Size)', 'embed_3');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  $handler->display->display_options['empty']['area']['content'] = 'Content coming soon!';
  $handler->display->display_options['empty']['area']['format'] = '2';
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
  /* Field: Content: Details url */
  $handler->display->display_options['fields']['field_details_url']['id'] = 'field_details_url';
  $handler->display->display_options['fields']['field_details_url']['table'] = 'field_data_field_details_url';
  $handler->display->display_options['fields']['field_details_url']['field'] = 'field_details_url';
  $handler->display->display_options['fields']['field_details_url']['label'] = '';
  $handler->display->display_options['fields']['field_details_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_details_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image URL */
  $handler->display->display_options['fields']['field_image_url']['id'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['table'] = 'field_data_field_image_url';
  $handler->display->display_options['fields']['field_image_url']['field'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_url']['type'] = 'imagecache_external_image';
  $handler->display->display_options['fields']['field_image_url']['settings'] = array(
    'imagecache_external_style' => 'medium',
    'imagecache_external_link' => '',
  );
  /* Field: Content: External Image URL */
  $handler->display->display_options['fields']['field_external_image_url']['id'] = 'field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['field'] = 'field_external_image_url';
  $handler->display->display_options['fields']['field_external_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_external_image_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_external_image_url']['alter']['path'] = '[field_details_url]';
  $handler->display->display_options['fields']['field_external_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_image_url']['type'] = 'imagecache_external_image';
  $handler->display->display_options['fields']['field_external_image_url']['settings'] = array(
    'imagecache_external_style' => 'medium',
    'imagecache_external_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_details_url]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
  /* Filter criterion: Content: External Image URL (field_external_image_url:url) */
  $handler->display->display_options['filters']['field_external_image_url_url']['id'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['field'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: External Image URL (field_external_image_url:url) */
  $handler->display->display_options['filters']['field_external_image_url_url_1']['id'] = 'field_external_image_url_url_1';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['table'] = 'field_data_field_external_image_url';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['field'] = 'field_external_image_url_url';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_external_image_url_url_1']['value'] = 'http://sandbox.biblioottawalibrary.ca/content-server/';
  $translatables['taxonomy_term_item_formats_top_level'] = array(
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
    t('<h4>Content coming soon!</h4>'),
    t('Title'),
    t('Item Format'),
    t('Nid'),
    t('Type'),
    t('All'),
    t('%1'),
    t('Embed - Parent-Child Term'),
    t('WHY NO RESULT??'),
    t('[title]'),
    t('<div class="overlay">
<div class="title-author-text">
<span class="title">[title]</span><br>
<span class="author">[field_browse_authors]</span>
</div>
</div>'),
    t('&nbsp;'),
    t('Image URL'),
    t('<img src="[field_image_url]" />'),
    t('Embed - Link | Help'),
    t('No Results Found: %1'),
    t('Taxonomy term referencing Content from field_database'),
    t('Go To Resource'),
    t('Help Guide'),
    t('Term ID'),
    t('.'),
    t('Embed - Parent-Child Card'),
    t('Content coming soon!'),
    t('<a href="[field_details_url]" >[title]</a>'),
    t('Embed - Parent-Child Card (Medium Size)'),
  );
  $export['taxonomy_term_item_formats_top_level'] = $view;

  $view = new view();
  $view->name = 'taxonomy_terms_item_formats_front_page';
  $view->description = 'Displays the parent taxonomy terms used in the Collection Items block';
  $view->tag = 'Front Page, Collection Items';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Collection Items - Front Page - Parent Taxonomy Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['field_language'] = 'fr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Entityqueue: Taxonomy term Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'item_formats_front_page' => 'item_formats_front_page',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['label'] = '';
  $handler->display->display_options['fields']['name_field_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['name_field_et']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et_1']['id'] = 'name_field_et_1';
  $handler->display->display_options['fields']['name_field_et_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et_1']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_field_et_1']['label'] = '';
  $handler->display->display_options['fields']['name_field_et_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_field_et_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_et_1']['type'] = 'title_linked';
  $handler->display->display_options['fields']['name_field_et_1']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[name_field_et_1] / [name_field_et]</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats_front_page';
  $handler->display->display_options['fields']['view']['display'] = 'embed_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Sort criterion: Entityqueue: Taxonomy term Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $translatables['taxonomy_terms_item_formats_front_page'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Parent'),
    t('Taxonomy term Queue'),
    t('.'),
    t('<h3>[name_field_et_1] / [name_field_et]</h3>'),
    t('Vocabulary'),
    t('Content pane'),
    t('View panes'),
    t('Block'),
  );
  $export['taxonomy_terms_item_formats_front_page'] = $view;

  $view = new view();
  $view->name = 'taxonomy_terms_top_level_item_formats_browse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy terms - Top Level Item Formats Browse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
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
  /* Field: Taxonomy term: FAQ */
  $handler->display->display_options['fields']['field_faq']['id'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['table'] = 'field_data_field_faq';
  $handler->display->display_options['fields']['field_faq']['field'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['label'] = 'Related Help / FAQs';
  $handler->display->display_options['fields']['field_faq']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['view']['empty'] = '?????';
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats_top_level';
  $handler->display->display_options['fields']['view']['display'] = 'embed_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
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
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['relationship'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = 'empty';

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: FAQ */
  $handler->display->display_options['fields']['field_faq']['id'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['table'] = 'field_data_field_faq';
  $handler->display->display_options['fields']['field_faq']['field'] = 'field_faq';
  $handler->display->display_options['fields']['field_faq']['label'] = 'Related Help / FAQs';
  $handler->display->display_options['fields']['field_faq']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['view']['empty'] = '?????';
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats_top_level';
  $handler->display->display_options['fields']['view']['display'] = 'embed_2';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = 'See 200 more [name] ';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    50 => '50',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
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

  /* Display: Content pane - Main Section */
  $handler = $view->new_display('panel_pane', 'Content pane - Main Section', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_field_et']['label'] = '';
  $handler->display->display_options['fields']['name_field_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['name_field_et']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et_1']['id'] = 'name_field_et_1';
  $handler->display->display_options['fields']['name_field_et_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et_1']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et_1']['label'] = '';
  $handler->display->display_options['fields']['name_field_et_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_field_et_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_et_1']['type'] = 'title_linked';
  $handler->display->display_options['fields']['name_field_et_1']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[name_field_et] / [name_field_et_1] </h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['empty'] = '?????';
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats_top_level';
  $handler->display->display_options['fields']['view']['display'] = 'embed_2';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['relationship'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '1694';
  $handler->display->display_options['pane_title'] = 'Taxonomy Terms - Item Formats - Main Listing';

  /* Display: Content pane - Staff Picks */
  $handler = $view->new_display('panel_pane', 'Content pane - Staff Picks', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['label'] = '';
  $handler->display->display_options['fields']['name_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['name_field_et']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2>[name_1] / [name]</h2>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['empty'] = '?????';
  $handler->display->display_options['fields']['view']['view'] = 'taxonomy_term_item_formats_top_level';
  $handler->display->display_options['fields']['view']['display'] = 'embed_3';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['relationship'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid_raw']['operator'] = 'regular_expression';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '1694';
  $handler->display->display_options['pane_title'] = 'Taxonomy Terms - Item Formats - Staff Picks (Featured)';
  $translatables['taxonomy_terms_top_level_item_formats_browse'] = array(
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
    t('?????'),
    t('Vocabulary'),
    t('Embed'),
    t('See 200 more [name] '),
    t('All'),
    t('Content pane - Main Section'),
    t('<h3>[name_field_et] / [name_field_et_1] </h3>'),
    t('Taxonomy Terms - Item Formats - Main Listing'),
    t('View panes'),
    t('Content pane - Staff Picks'),
    t('<h2>[name_1] / [name]</h2>'),
    t('Taxonomy Terms - Item Formats - Staff Picks (Featured)'),
  );
  $export['taxonomy_terms_top_level_item_formats_browse'] = $view;

  return $export;
}
