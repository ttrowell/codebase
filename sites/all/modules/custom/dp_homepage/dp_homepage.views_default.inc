<?php
/**
 * Implementation of hook_views_default_views().
 */
function dp_homepage_views_default_views() {
    $files = file_scan_directory(drupal_get_path('module', 'dp_homepage'). '/plugins/views', '/.view/');
    foreach ($files as $absolute => $file) {
        require $absolute;
        if (isset($view)) {
            $views[$file->name] = $view;
        }
    }
    return $views;
}
