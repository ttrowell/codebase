<?php

function contact_form_menu(){
  $items = array();
  $items['contact'] = array(
    'title' => t('Contact Us'),
    'page callback' => 'contact_form_callback',
    'access arguments' => array('access content'),
    'type' => MENU_CALLBACK,
    'file' => 'contact_form.form.inc',
  );
  $items['admin/config/contact'] = array(
    'title' => t('Contact Form'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('contact_settings_form'),
    'access arguments' => array('administer modules'),
    'type' => MENU_NORMAL_ITEM,
    'file' => 'contact_form.admin.inc',
  );
  return $items;
}
