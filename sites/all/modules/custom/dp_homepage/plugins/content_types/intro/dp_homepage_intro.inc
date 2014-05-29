<?php

$plugin = array(
  'title' => t('DP Homepage - Intro'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_intro_pane_content_type_render',
  'hook theme' => 'dp_homepage_intro_pane_content_type_theme',
);

function dp_homepage_intro_pane_content_type_render($subtype, $conf, $content = NULL) {
  drupal_add_js(drupal_get_path('module', 'dp_homepage') . '/plugins/content_types/intro/dp_homepage_intro.js');
  $output = theme('dp_homepage_intro', array());
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_intro_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_intro'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_intro',
  );
}