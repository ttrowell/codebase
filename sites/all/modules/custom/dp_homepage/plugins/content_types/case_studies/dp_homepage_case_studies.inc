<?php

$plugin = array(
  'title' => t('DP Homepage - Case Studies'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_case_studies_pane_content_type_render',
  'hook theme' => 'dp_homepage_case_studies_pane_content_type_theme',
);

function dp_homepage_case_studies_pane_content_type_render($subtype, $conf, $content = NULL) {
  $view = views_embed_view('case_studies', 'block_1');
  $full = views_embed_view('case_studies', 'block_2');
  $output = theme('dp_homepage_case_studies', array('view' => $view, 'full' => $full));
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_case_studies_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_case_studies'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_case_studies',
  );
}
