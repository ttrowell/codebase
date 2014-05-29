<?php

function contact_settings_form($form, &$form_state) {

  $form['settings']['contact_email'] = array(
    '#title' => 'Email address to send notifications to.',
    '#description' => 'Enter the email address of the person who should receive inquiries.',
    '#default_value' => variable_get('contact_email', variable_get('site_mail', ini_get('sendmail_from'))),
    '#type' => 'textfield',
  );
  /*$form['settings']['street_address'] = array(
    '#title' => 'Company street address',
    '#description' => 'Enter the street address to be displayed on the contact form.',
    '#type' => 'textfield',
  );*/


  $form['buttons']['submit'] = array(
    '#value' => 'Apply',
    '#type' => 'submit',
  );
  return $form;
}

function contact_settings_form_submit($form, &$form_state) {
  variable_set('contact_email', $form_state['values']['contact_email']);
  return;
}
