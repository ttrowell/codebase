<?php

$plugin = array(
  'title' => t('DP Homepage - About'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_about_pane_content_type_render',
  'hook theme' => 'dp_homepage_about_pane_content_type_theme',
);

function dp_homepage_about_pane_content_type_render($subtype, $conf, $content = NULL) {
  $our_approach_view = views_embed_view('about_our_approach', 'block_1');
  $key_staff_view = views_embed_view('about_key_staff', 'block_1');
  $all_staff_view = views_embed_view('about_key_staff', 'block_3');
  $company_bio = node_load(preg_replace('{node/}', '', drupal_lookup_path("source", "content/company-bio")));
  $partners_view = views_embed_view('about_partners', 'block_1');
  $our_approach_full = views_embed_view('about_our_approach', 'block_2');
  $key_staff_full = views_embed_view('about_key_staff', 'block_2');
  $partners_full = views_embed_view('about_partners', 'block_2');
  $output = theme('dp_homepage_about', array(
    'our_approach_view' => $our_approach_view,
    'key_staff_view' => $key_staff_view,
    'all_staff_view' => $all_staff_view,
    'company_bio' => $company_bio->body['und'][0]['safe_value'],
    'partners_view' => $partners_view,
    'our_approach_full' => $our_approach_full,
    'key_staff_full' => $key_staff_full,
    'partners_full' => $partners_full)
  );
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_about_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_about'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_about',
  );
}
