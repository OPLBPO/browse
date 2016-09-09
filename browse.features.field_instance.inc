<?php
/**
 * @file
 * browse.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function browse_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-collections-field_authors'.
  $field_instances['node-collections-field_authors'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-collections-field_details_url'.
  $field_instances['node-collections-field_details_url'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_details_url',
    'label' => 'Details url',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-collections-field_external_image_url'.
  $field_instances['node-collections-field_external_image_url'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'imagecache_external',
        'settings' => array(
          'imagecache_external_link' => '',
          'imagecache_external_style' => '',
        ),
        'type' => 'imagecache_external_image',
        'weight' => 0,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_external_image_url',
    'label' => 'External Image URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-collections-field_format'.
  $field_instances['node-collections-field_format'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_format',
    'label' => 'Format',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-collections-field_genre'.
  $field_instances['node-collections-field_genre'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_genre',
    'label' => 'Genre',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-collections-field_image_collection'.
  $field_instances['node-collections-field_image_collection'] = array(
    'bundle' => 'collections',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'event',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image_collection',
    'label' => 'Collection Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__blog_teaser_image' => 0,
          'colorbox__contact_icons' => 0,
          'colorbox__coverimage' => 0,
          'colorbox__event' => 0,
          'colorbox__event_image' => 0,
          'colorbox__event_series_image' => 0,
          'colorbox__event_subject_for_browse' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__medium' => 0,
          'colorbox__newtitle' => 0,
          'colorbox__opl_about_the_branch__308_x_180_' => 0,
          'colorbox__opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_coverimage' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-collections-field_image_url'.
  $field_instances['node-collections-field_image_url'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image_url',
    'label' => 'Image URL',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-collections-field_isbns'.
  $field_instances['node-collections-field_isbns'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_isbns',
    'label' => 'ISBNS',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-collections-field_item_format'.
  $field_instances['node-collections-field_item_format'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_item_format',
    'label' => 'Item format',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-collections-field_item_title'.
  $field_instances['node-collections-field_item_title'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_item_title',
    'label' => 'Item  Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-collections-field_items_category'.
  $field_instances['node-collections-field_items_category'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_items_category',
    'label' => 'Items category',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-collections-field_materials_type'.
  $field_instances['node-collections-field_materials_type'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_materials_type',
    'label' => 'Materials type',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-collections-field_primary_language'.
  $field_instances['node-collections-field_primary_language'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_primary_language',
    'label' => 'Primary Language',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-collections-field_publication_data'.
  $field_instances['node-collections-field_publication_data'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_publication_data',
    'label' => 'Publication Data',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-collections-field_resource_type'.
  $field_instances['node-collections-field_resource_type'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_resource_type',
    'label' => 'Resource type',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-collections-field_song_title'.
  $field_instances['node-collections-field_song_title'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_song_title',
    'label' => 'Song Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-collections-field_zinio_description'.
  $field_instances['node-collections-field_zinio_description'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_zinio_description',
    'label' => 'Zinio Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 180,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-collections-field_zinio_rbid'.
  $field_instances['node-collections-field_zinio_rbid'] = array(
    'bundle' => 'collections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'database_vendor_help_guide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'database_vendor_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'resource_title_help' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_grid_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_zinio_rbid',
    'label' => 'Zinio RBID',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          9 => 9,
          10 => 10,
          'blog_teaser_field' => 'blog_teaser_field',
          'image_only' => 'image_only',
          'newcomers_full_html' => 'newcomers_full_html',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -8,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -7,
            ),
            4 => array(
              'weight' => -6,
            ),
            5 => array(
              'weight' => -5,
            ),
            9 => array(
              'weight' => -4,
            ),
            10 => array(
              'weight' => -3,
            ),
            'blog_teaser_field' => array(
              'weight' => 0,
            ),
            'image_only' => array(
              'weight' => -9,
            ),
            'newcomers_full_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'taxonomy_term-item_formats-field_database'.
  $field_instances['taxonomy_term-item_formats-field_database'] = array(
    'bundle' => 'item_formats',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_database',
    'label' => 'Database',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-item_formats-field_faq'.
  $field_instances['taxonomy_term-item_formats-field_faq'] = array(
    'bundle' => 'item_formats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Used to reference help guides / FAQs related to current term.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_faq',
    'label' => 'FAQ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-vocabulary_21-field_content_type'.
  $field_instances['taxonomy_term-vocabulary_21-field_content_type'] = array(
    'bundle' => 'vocabulary_21',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_content_type',
    'label' => 'content type',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-vocabulary_21-field_front_page'.
  $field_instances['taxonomy_term-vocabulary_21-field_front_page'] = array(
    'bundle' => 'vocabulary_21',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_front_page',
    'label' => 'Front page',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-vocabulary_21-field_front_page_database'.
  $field_instances['taxonomy_term-vocabulary_21-field_front_page_database'] = array(
    'bundle' => 'vocabulary_21',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_front_page_database',
    'label' => 'Front Page Database',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'taxonomy_term-vocabulary_21-field_term_image'.
  $field_instances['taxonomy_term-vocabulary_21-field_term_image'] = array(
    'bundle' => 'vocabulary_21',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_term_image',
    'label' => 'term_image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'taxonomy_images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_blog_teaser_image' => 0,
          'image_contact_icons' => 0,
          'image_event' => 0,
          'image_event_image' => 0,
          'image_event_series_image' => 0,
          'image_event_subject_for_browse' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_newtitle' => 0,
          'image_opl_about_the_branch__308_x_180_' => 0,
          'image_opl_carousel_or_featured_image__350px_x_240px_' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Authors');
  t('Collection Image');
  t('Database');
  t('Details url');
  t('External Image URL');
  t('FAQ');
  t('Format');
  t('Front Page Database');
  t('Front page');
  t('Genre');
  t('ISBNS');
  t('Image URL');
  t('Item  Title');
  t('Item format');
  t('Items category');
  t('Materials type');
  t('Primary Language');
  t('Publication Data');
  t('Resource type');
  t('Song Title');
  t('Used to reference help guides / FAQs related to current term.');
  t('Zinio Description');
  t('Zinio RBID');
  t('content type');
  t('term_image');

  return $field_instances;
}
