<?php

$plugin = array(
  'title' => t('DP Homepage - Menu'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_menu_pane_content_type_render',
  'hook theme' => 'dp_homepage_menu_pane_content_type_theme',
);

function dp_homepage_menu_pane_content_type_render($subtype, $conf, $content = NULL) {
  $logo = drupal_get_path('theme', 'omega_doubleprime') . '/images/logo.png';
  $output = theme('dp_homepage_menu', array('logo' => $logo));
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_menu_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_menu'] = array(
    'variables' => array('logo' => NULL),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_menu',
  );
}