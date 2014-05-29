<?php

$plugin = array(
  'title' => t('DP Homepage - Services'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_services_pane_content_type_render',
  'hook theme' => 'dp_homepage_services_pane_content_type_theme',
);

function dp_homepage_services_pane_content_type_render($subtype, $conf, $content = NULL) {
  $view = views_embed_view('services', 'block_1');
  $full = views_embed_view('services', 'block_2');
  $output = theme('dp_homepage_services', array('view' => $view, 'full' => $full));
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_services_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_services'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_services',
  );
}
