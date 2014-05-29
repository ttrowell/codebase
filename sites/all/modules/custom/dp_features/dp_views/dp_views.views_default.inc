<?php
/**
 * @file
 * dp_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dp_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about_key_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About-Key Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[nid]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'key_staff_order' => 'key_staff_order',
    'home_offerings' => 0,
    'home_case_studies' => 0,
    'homepage_top' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Button Group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Button Group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#node-[nid]" class="button">[field_key_staff_picture]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_key_staff_position']['id'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['table'] = 'field_data_field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['field'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['label'] = '';
  $handler->display->display_options['fields']['field_key_staff_position']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'about_key_staff' => 'about_key_staff',
  );

  /* Display: Content */
  $handler = $view->new_display('block', 'Content', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="about-section-title">About / Key Staff</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Color Picture */
  $handler->display->display_options['fields']['field_color_picture']['id'] = 'field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['table'] = 'field_data_field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['field'] = 'field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['label'] = '';
  $handler->display->display_options['fields']['field_color_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_color_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_key_staff_name']['id'] = 'field_key_staff_name';
  $handler->display->display_options['fields']['field_key_staff_name']['table'] = 'field_data_field_key_staff_name';
  $handler->display->display_options['fields']['field_key_staff_name']['field'] = 'field_key_staff_name';
  $handler->display->display_options['fields']['field_key_staff_name']['label'] = '';
  $handler->display->display_options['fields']['field_key_staff_name']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_key_staff_position']['id'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['table'] = 'field_data_field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['field'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['label'] = '';
  $handler->display->display_options['fields']['field_key_staff_position']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_key_staff_summary']['id'] = 'field_key_staff_summary';
  $handler->display->display_options['fields']['field_key_staff_summary']['table'] = 'field_data_field_key_staff_summary';
  $handler->display->display_options['fields']['field_key_staff_summary']['field'] = 'field_key_staff_summary';
  $handler->display->display_options['fields']['field_key_staff_summary']['label'] = '';
  $handler->display->display_options['fields']['field_key_staff_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;

  /* Display: Teaser */
  $handler = $view->new_display('block', 'Teaser', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Color Picture */
  $handler->display->display_options['fields']['field_color_picture']['id'] = 'field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['table'] = 'field_data_field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['field'] = 'field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['label'] = '';
  $handler->display->display_options['fields']['field_color_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color_picture']['alter']['path'] = '#node-[nid]';
  $handler->display->display_options['fields']['field_color_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_color_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_color_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#node-[nid]" class="button">[field_color_picture]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_key_staff_position']['id'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['table'] = 'field_data_field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['field'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['label'] = '';
  $handler->display->display_options['fields']['field_key_staff_position']['element_label_colon'] = FALSE;

  /* Display: All Staff */
  $handler = $view->new_display('block', 'All Staff', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Color Picture */
  $handler->display->display_options['fields']['field_color_picture']['id'] = 'field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['table'] = 'field_data_field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['field'] = 'field_color_picture';
  $handler->display->display_options['fields']['field_color_picture']['label'] = '';
  $handler->display->display_options['fields']['field_color_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_color_picture']['settings'] = array(
    'image_style' => 'all-staff-photos',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_key_staff_position']['id'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['table'] = 'field_data_field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['field'] = 'field_key_staff_position';
  $handler->display->display_options['fields']['field_key_staff_position']['label'] = '';
  $handler->display->display_options['fields']['field_key_staff_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $export['about_key_staff'] = $view;

  $view = new view();
  $view->name = 'about_our_approach';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About-Our Approach';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[nid]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_our_approach_icon']['id'] = 'field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['table'] = 'field_data_field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['field'] = 'field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['label'] = '';
  $handler->display->display_options['fields']['field_our_approach_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_our_approach_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_our_approach_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'about_our_approach' => 'about_our_approach',
  );

  /* Display: Content */
  $handler = $view->new_display('block', 'Content', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_our_approach_icon']['id'] = 'field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['table'] = 'field_data_field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['field'] = 'field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['label'] = '';
  $handler->display->display_options['fields']['field_our_approach_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_our_approach_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_our_approach_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['block_description'] = 'About-Our Approach';

  /* Display: Teaser */
  $handler = $view->new_display('block', 'Teaser', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_our_approach_icon']['id'] = 'field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['table'] = 'field_data_field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['field'] = 'field_our_approach_icon';
  $handler->display->display_options['fields']['field_our_approach_icon']['label'] = '';
  $handler->display->display_options['fields']['field_our_approach_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_our_approach_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_our_approach_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $export['about_our_approach'] = $view;

  $view = new view();
  $view->name = 'about_partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About-Partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[nid]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_partners_image']['id'] = 'field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['table'] = 'field_data_field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['field'] = 'field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['label'] = '';
  $handler->display->display_options['fields']['field_partners_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partners_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partners_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slug */
  $handler->display->display_options['fields']['field_partners_slug']['id'] = 'field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['table'] = 'field_data_field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['field'] = 'field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['label'] = '';
  $handler->display->display_options['fields']['field_partners_slug']['element_label_colon'] = FALSE;
  /* Field: Button Group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Button Group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#node-[nid]" class="button">[field_partners_image] <span class="views-field-title">[title]</span> <span class="views-field-slug">[field_partners_slug]</span></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'about_partners' => 'about_partners',
  );

  /* Display: Content */
  $handler = $view->new_display('block', 'Content', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="about-section-title">About / Partners</span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_partners_image']['id'] = 'field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['table'] = 'field_data_field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['field'] = 'field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['label'] = '';
  $handler->display->display_options['fields']['field_partners_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partners_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partners_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slug */
  $handler->display->display_options['fields']['field_partners_slug']['id'] = 'field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['table'] = 'field_data_field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['field'] = 'field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['label'] = '';
  $handler->display->display_options['fields']['field_partners_slug']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_partners_summary']['id'] = 'field_partners_summary';
  $handler->display->display_options['fields']['field_partners_summary']['table'] = 'field_data_field_partners_summary';
  $handler->display->display_options['fields']['field_partners_summary']['field'] = 'field_partners_summary';
  $handler->display->display_options['fields']['field_partners_summary']['label'] = '';
  $handler->display->display_options['fields']['field_partners_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Partner URL */
  $handler->display->display_options['fields']['field_partner_url']['id'] = 'field_partner_url';
  $handler->display->display_options['fields']['field_partner_url']['table'] = 'field_data_field_partner_url';
  $handler->display->display_options['fields']['field_partner_url']['field'] = 'field_partner_url';
  $handler->display->display_options['fields']['field_partner_url']['label'] = '';
  $handler->display->display_options['fields']['field_partner_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner_url']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_partner_url]" class="button">Visit Partner &rsaquo;</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;

  /* Display: Teaser */
  $handler = $view->new_display('block', 'Teaser', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_partners_image']['id'] = 'field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['table'] = 'field_data_field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['field'] = 'field_partners_image';
  $handler->display->display_options['fields']['field_partners_image']['label'] = '';
  $handler->display->display_options['fields']['field_partners_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partners_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partners_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partners_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slug */
  $handler->display->display_options['fields']['field_partners_slug']['id'] = 'field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['table'] = 'field_data_field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['field'] = 'field_partners_slug';
  $handler->display->display_options['fields']['field_partners_slug']['label'] = '';
  $handler->display->display_options['fields']['field_partners_slug']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partners_slug']['element_label_colon'] = FALSE;
  /* Field: Button Group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Button Group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#node-[nid]" class="button">[field_partners_image] <span class="views-field-title">[title]</span> <span class="views-field-slug">[field_partners_slug]</span></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['about_partners'] = $view;

  $view = new view();
  $view->name = 'case_studies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Studies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[nid]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cs_image']['id'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['field'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['label'] = '';
  $handler->display->display_options['fields']['field_cs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cs_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Services */
  $handler->display->display_options['fields']['field_cs_services']['id'] = 'field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['table'] = 'field_data_field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['field'] = 'field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['label'] = '';
  $handler->display->display_options['fields']['field_cs_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_services']['delta_offset'] = '0';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_cs_url']['id'] = 'field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['table'] = 'field_data_field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['field'] = 'field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['label'] = '';
  $handler->display->display_options['fields']['field_cs_url']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'case_studies' => 'case_studies',
  );

  /* Display: Content */
  $handler = $view->new_display('block', 'Content', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_cs_url_1']['id'] = 'field_cs_url_1';
  $handler->display->display_options['fields']['field_cs_url_1']['table'] = 'field_data_field_cs_url';
  $handler->display->display_options['fields']['field_cs_url_1']['field'] = 'field_cs_url';
  $handler->display->display_options['fields']['field_cs_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_cs_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cs_url_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_cs_url-value]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_cs_url']['id'] = 'field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['table'] = 'field_data_field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['field'] = 'field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['label'] = '';
  $handler->display->display_options['fields']['field_cs_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cs_url']['alter']['text'] = '<a class="button" href="[field_cs_url-value]" target="_blank">Launch Website &rsaquo;</a>';
  $handler->display->display_options['fields']['field_cs_url']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cs_image']['id'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['field'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['label'] = '';
  $handler->display->display_options['fields']['field_cs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cs_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Services */
  $handler->display->display_options['fields']['field_cs_services']['id'] = 'field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['table'] = 'field_data_field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['field'] = 'field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['label'] = '';
  $handler->display->display_options['fields']['field_cs_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_services']['delta_offset'] = '0';

  /* Display: Carousel */
  $handler = $view->new_display('block', 'Carousel', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'services';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_service_image' => 0,
    'title' => 0,
    'field_service_slug' => 0,
    'field_service_button_icon' => 0,
    'field_service_button_label' => 0,
    'field_service_button_url' => 0,
    'nothing' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_service_image' => 0,
    'title' => 0,
    'field_service_slug' => 0,
    'field_service_button_icon' => 0,
    'field_service_button_label' => 0,
    'field_service_button_url' => 0,
    'nothing' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_cs_url']['id'] = 'field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['table'] = 'field_data_field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['field'] = 'field_cs_url';
  $handler->display->display_options['fields']['field_cs_url']['label'] = '';
  $handler->display->display_options['fields']['field_cs_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cs_url']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cs_image']['id'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['table'] = 'field_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['field'] = 'field_cs_image';
  $handler->display->display_options['fields']['field_cs_image']['label'] = '';
  $handler->display->display_options['fields']['field_cs_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cs_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Services */
  $handler->display->display_options['fields']['field_cs_services']['id'] = 'field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['table'] = 'field_data_field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['field'] = 'field_cs_services';
  $handler->display->display_options['fields']['field_cs_services']['label'] = '';
  $handler->display->display_options['fields']['field_cs_services']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cs_services']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_services']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cs_services']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_cs_url]" target="_blank" class="ext-link-title">[title]</a><a class="ext-link" href="[field_cs_url]" target="_blank"></a>
[body_1]
<h3>Services Provided</h3>
[field_cs_services]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['case_studies'] = $view;

  $view = new view();
  $view->name = 'contact_pages';
  $view->description = 'Display a list of all nodes in queue \'Key Staff Order\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Contact pages';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Queue \'Contact pages\'';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'contact_pages' => 'contact_pages',
    'home_offerings' => 0,
    'home_case_studies' => 0,
    'homepage_top' => 0,
    'key_staff_order' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'nodequeue/4';
  $export['contact_pages'] = $view;

  $view = new view();
  $view->name = 'news_press';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[nid]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Button Group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Button Group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#node-[nid]" class="button">Read More &rsaquo;</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Press Type */
  $handler->display->display_options['fields']['field_press_type']['id'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['fields']['field_press_type']['field'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Press Type (field_press_type) */
  $handler->display->display_options['filters']['field_press_type_tid']['id'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['filters']['field_press_type_tid']['field'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_press_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_press_type_tid']['vocabulary'] = 'press_types';

  /* Display: Articles - Content */
  $handler = $view->new_display('block', 'Articles - Content', 'articles_full');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_press_image']['id'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['table'] = 'field_data_field_press_image';
  $handler->display->display_options['fields']['field_press_image']['field'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['label'] = '';
  $handler->display->display_options['fields']['field_press_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image Body */
  $handler->display->display_options['fields']['field_press_image_body']['id'] = 'field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['table'] = 'field_data_field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['field'] = 'field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['label'] = '';
  $handler->display->display_options['fields']['field_press_image_body']['element_label_colon'] = FALSE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_press_image_caption']['id'] = 'field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['table'] = 'field_data_field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['field'] = 'field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_press_image_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Press Contact */
  $handler->display->display_options['fields']['field_press_contact']['id'] = 'field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['table'] = 'field_data_field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['field'] = 'field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['label'] = '';
  $handler->display->display_options['fields']['field_press_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_contact']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_press_contact']['delta_offset'] = '0';
  /* Field: Content: Press Type */
  $handler->display->display_options['fields']['field_press_type']['id'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['fields']['field_press_type']['field'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['alter']['text'] = '<a href="[field_pdf]" class="button" target="_blank">Download PDF &rsaquo;</a>';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';

  /* Display: Articles - Teaser */
  $handler = $view->new_display('block', 'Articles - Teaser', 'articles_teaser');

  /* Display: Press Releases - Teaser */
  $handler = $view->new_display('block', 'Press Releases - Teaser', 'press_releases_teaser');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Press Type (field_press_type) */
  $handler->display->display_options['filters']['field_press_type_tid']['id'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['filters']['field_press_type_tid']['field'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_press_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_press_type_tid']['vocabulary'] = 'press_types';

  /* Display: Press Releases - Content */
  $handler = $view->new_display('block', 'Press Releases - Content', 'press_releases_full');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_press_image']['id'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['table'] = 'field_data_field_press_image';
  $handler->display->display_options['fields']['field_press_image']['field'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['label'] = '';
  $handler->display->display_options['fields']['field_press_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image Body */
  $handler->display->display_options['fields']['field_press_image_body']['id'] = 'field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['table'] = 'field_data_field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['field'] = 'field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['label'] = '';
  $handler->display->display_options['fields']['field_press_image_body']['element_label_colon'] = FALSE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_press_image_caption']['id'] = 'field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['table'] = 'field_data_field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['field'] = 'field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_press_image_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Press Contact */
  $handler->display->display_options['fields']['field_press_contact']['id'] = 'field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['table'] = 'field_data_field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['field'] = 'field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['label'] = '';
  $handler->display->display_options['fields']['field_press_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_contact']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_press_contact']['delta_offset'] = '0';
  /* Field: Content: Press Type */
  $handler->display->display_options['fields']['field_press_type']['id'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['fields']['field_press_type']['field'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['alter']['text'] = '<a href="[field_pdf]" class="button" target="_blank">Download PDF &rsaquo;</a>';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Press Type (field_press_type) */
  $handler->display->display_options['filters']['field_press_type_tid']['id'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['filters']['field_press_type_tid']['field'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_press_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_press_type_tid']['vocabulary'] = 'press_types';

  /* Display: White Papers - Content */
  $handler = $view->new_display('block', 'White Papers - Content', 'white_papers_full');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_press_image']['id'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['table'] = 'field_data_field_press_image';
  $handler->display->display_options['fields']['field_press_image']['field'] = 'field_press_image';
  $handler->display->display_options['fields']['field_press_image']['label'] = '';
  $handler->display->display_options['fields']['field_press_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image Body */
  $handler->display->display_options['fields']['field_press_image_body']['id'] = 'field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['table'] = 'field_data_field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['field'] = 'field_press_image_body';
  $handler->display->display_options['fields']['field_press_image_body']['label'] = '';
  $handler->display->display_options['fields']['field_press_image_body']['element_label_colon'] = FALSE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_press_image_caption']['id'] = 'field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['table'] = 'field_data_field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['field'] = 'field_press_image_caption';
  $handler->display->display_options['fields']['field_press_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_press_image_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Press Contact */
  $handler->display->display_options['fields']['field_press_contact']['id'] = 'field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['table'] = 'field_data_field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['field'] = 'field_press_contact';
  $handler->display->display_options['fields']['field_press_contact']['label'] = '';
  $handler->display->display_options['fields']['field_press_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_contact']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_press_contact']['delta_offset'] = '0';
  /* Field: Content: Press Type */
  $handler->display->display_options['fields']['field_press_type']['id'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['fields']['field_press_type']['field'] = 'field_press_type';
  $handler->display->display_options['fields']['field_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['alter']['text'] = '<a href="[field_pdf]" class="button" target="_blank">Download PDF &rsaquo;</a>
';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Press Type (field_press_type) */
  $handler->display->display_options['filters']['field_press_type_tid']['id'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['filters']['field_press_type_tid']['field'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_press_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_press_type_tid']['vocabulary'] = 'press_types';

  /* Display: White Papers - Teaser */
  $handler = $view->new_display('block', 'White Papers - Teaser', 'white_papers_teaser');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Press Type (field_press_type) */
  $handler->display->display_options['filters']['field_press_type_tid']['id'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['table'] = 'field_data_field_press_type';
  $handler->display->display_options['filters']['field_press_type_tid']['field'] = 'field_press_type_tid';
  $handler->display->display_options['filters']['field_press_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_press_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_press_type_tid']['vocabulary'] = 'press_types';
  $export['news_press'] = $view;

  $view = new view();
  $view->name = 'press_releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Releases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press Releases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '255',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'press_release' => 'press_release',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['press_releases'] = $view;

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Big Icon */
  $handler->display->display_options['fields']['field_product_big_icon']['id'] = 'field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['table'] = 'field_data_field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['field'] = 'field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['label'] = '';
  $handler->display->display_options['fields']['field_product_big_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_big_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_big_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_product_summary']['id'] = 'field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['table'] = 'field_data_field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['field'] = 'field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['label'] = '';
  $handler->display->display_options['fields']['field_product_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'products' => 'products',
  );

  /* Display: Content */
  $handler = $view->new_display('block', 'Content', 'products_full');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'node-[nid]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Big Icon */
  $handler->display->display_options['fields']['field_product_big_icon']['id'] = 'field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['table'] = 'field_data_field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['field'] = 'field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['label'] = '';
  $handler->display->display_options['fields']['field_product_big_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_big_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_big_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_product_summary']['id'] = 'field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['table'] = 'field_data_field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['field'] = 'field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['label'] = '';
  $handler->display->display_options['fields']['field_product_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Double Prime - Products';

  /* Display: Teaser */
  $handler = $view->new_display('block', 'Teaser', 'products_teaser');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Big Icon */
  $handler->display->display_options['fields']['field_product_big_icon']['id'] = 'field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['table'] = 'field_data_field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['field'] = 'field_product_big_icon';
  $handler->display->display_options['fields']['field_product_big_icon']['label'] = '';
  $handler->display->display_options['fields']['field_product_big_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_big_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_big_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_product_summary']['id'] = 'field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['table'] = 'field_data_field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['field'] = 'field_product_summary';
  $handler->display->display_options['fields']['field_product_summary']['label'] = '';
  $handler->display->display_options['fields']['field_product_summary']['element_label_colon'] = FALSE;
  /* Field: Button Group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Button Group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="button" href="#node-[nid]">Read More &rsaquo;</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Double Prime - Products';
  $export['products'] = $view;

  $view = new view();
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow';
  $handler->display->display_options['css_class'] = 'slideshow-display';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'homepage_carousel';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slide_image' => 0,
    'title' => 0,
    'field_alignment' => 0,
    'field_slide_body' => 0,
    'field_slide_link_text' => 0,
    'field_slide_link_url' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slide_image' => 0,
    'title' => 0,
    'field_alignment' => 0,
    'field_slide_body' => 0,
    'field_slide_link_text' => 0,
    'field_slide_link_url' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ss_image' => 'field_ss_image',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Alignment */
  $handler->display->display_options['fields']['field_alignment']['id'] = 'field_alignment';
  $handler->display->display_options['fields']['field_alignment']['table'] = 'field_data_field_alignment';
  $handler->display->display_options['fields']['field_alignment']['field'] = 'field_alignment';
  $handler->display->display_options['fields']['field_alignment']['label'] = '';
  $handler->display->display_options['fields']['field_alignment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alignment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alignment']['type'] = 'list_key';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_slide_body']['id'] = 'field_slide_body';
  $handler->display->display_options['fields']['field_slide_body']['table'] = 'field_data_field_slide_body';
  $handler->display->display_options['fields']['field_slide_body']['field'] = 'field_slide_body';
  $handler->display->display_options['fields']['field_slide_body']['label'] = '';
  $handler->display->display_options['fields']['field_slide_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_body']['element_default_classes'] = FALSE;
  /* Field: Content: Link Text */
  $handler->display->display_options['fields']['field_slide_link_text']['id'] = 'field_slide_link_text';
  $handler->display->display_options['fields']['field_slide_link_text']['table'] = 'field_data_field_slide_link_text';
  $handler->display->display_options['fields']['field_slide_link_text']['field'] = 'field_slide_link_text';
  $handler->display->display_options['fields']['field_slide_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_text']['type'] = 'text_plain';
  /* Field: Content: Link URL */
  $handler->display->display_options['fields']['field_slide_link_url']['id'] = 'field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['table'] = 'field_data_field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['field'] = 'field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_url']['type'] = 'text_plain';
  /* Field: Slide content */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Slide content';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="custom-slide">
  <div class="slide-background">[field_slide_image]</div>
  <div class="slide-wrapper">
    <div class="slide-content"><div class="inner [field_alignment]">
      <div class="title">[title]</div>
      <div class="body">[field_slide_body]</div>
      <div class ="link"><a href="[field_slide_link_url]">[field_slide_link_text]</a></div>
    </div></div>
  </div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'slide' => 'slide',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'ss';

  /* Display: Home Offerings */
  $handler = $view->new_display('block', 'Home Offerings', 'block_home_offerings');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow-display home-offerings-display';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Home Offerings queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['ui_name'] = 'Home Offerings queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Home Offerings queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'home_offerings' => 'home_offerings',
    'home_case_studies' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'slide' => 'slide',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Home Case Studies */
  $handler = $view->new_display('block', 'Home Case Studies', 'block_home_casestudies');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow-display home-casestudies-display';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Home Case Studies queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['ui_name'] = 'Home Case Studies queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Home Case Studies queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'home_case_studies' => 'home_case_studies',
    'home_offerings' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'slide' => 'slide',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Home Top */
  $handler = $view->new_display('block', 'Home Top', 'block_home_top');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow-display home-top-display';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Home Top queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['ui_name'] = 'Home Top queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Home Top queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'homepage_top' => 'homepage_top',
    'home_offerings' => 0,
    'home_case_studies' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'slide' => 'slide',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $export['slideshow'] = $view;

  $view = new view();
  $view->name = 'white_papers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'White Papers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'White Papers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_wp_summary']['id'] = 'field_wp_summary';
  $handler->display->display_options['fields']['field_wp_summary']['table'] = 'field_data_field_wp_summary';
  $handler->display->display_options['fields']['field_wp_summary']['field'] = 'field_wp_summary';
  $handler->display->display_options['fields']['field_wp_summary']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_wp_summary']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_wp_file']['id'] = 'field_wp_file';
  $handler->display->display_options['fields']['field_wp_file']['table'] = 'field_data_field_wp_file';
  $handler->display->display_options['fields']['field_wp_file']['field'] = 'field_wp_file';
  $handler->display->display_options['fields']['field_wp_file']['click_sort_column'] = 'fid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'white_papers' => 'white_papers',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['white_papers'] = $view;

  return $export;
}
