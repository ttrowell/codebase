<?php
/**
 * @file
 * dp_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function dp_content_types_node_info() {
  $items = array(
    'about_key_staff' => array(
      'name' => t('About-Key Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'about_our_approach' => array(
      'name' => t('About-Our Approach'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'about_partners' => array(
      'name' => t('About-Partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Blog content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'case_studies' => array(
      'name' => t('Case Studies'),
      'base' => 'node_content',
      'description' => t('Content type for Case Studies.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A content type for news types (Press Release, White Papers, Articles).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'products' => array(
      'name' => t('Products'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'staff_bios' => array(
      'name' => t('Staff Bios'),
      'base' => 'node_content',
      'description' => t('Small staff biography. Includes image and a 1-2 paragraph summary about them.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'white_papers' => array(
      'name' => t('White Papers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
