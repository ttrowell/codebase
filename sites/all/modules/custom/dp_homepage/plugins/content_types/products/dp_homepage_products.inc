<?php

$plugin = array(
  'title' => t('DP Homepage - Products'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_products_pane_content_type_render',
  'hook theme' => 'dp_homepage_products_pane_content_type_theme',
);

function dp_homepage_products_pane_content_type_render($subtype, $conf, $content = NULL) {
  $view = views_embed_view('products', 'products_teaser');
  $full = views_embed_view('products', 'products_full');
  $output = theme('dp_homepage_products', array('view' => $view, 'full' => $full));
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_products_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_products'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_products',
  );
}
