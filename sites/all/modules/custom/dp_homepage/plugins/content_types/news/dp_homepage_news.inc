<?php

$plugin = array(
  'title' => t('DP Homepage - News'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_news_pane_content_type_render',
  'hook theme' => 'dp_homepage_news_pane_content_type_theme',
);

function dp_homepage_news_pane_content_type_render($subtype, $conf, $content = NULL) {
  $press_view = views_embed_view('news_press', 'press_releases_teaser');
  $white_papers_view = views_embed_view('news_press', 'white_papers_teaser');
  $articles_view = views_embed_view('news_press', 'articles_teaser');
  $press_full = views_embed_view('news_press', 'press_releases_full');
  $white_papers_full = views_embed_view('news_press', 'white_papers_full');
  $articles_full = views_embed_view('news_press', 'articles_full');
  $output = theme('dp_homepage_news', array('press_view' => $press_view,
    'white_papers_view' => $white_papers_view,
    'articles_view' => $articles_view,
    'press_full' => $press_full,
    'white_papers_full' => $white_papers_full,
    'articles_full' => $articles_full));
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_news_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_news'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_news',
  );
}
