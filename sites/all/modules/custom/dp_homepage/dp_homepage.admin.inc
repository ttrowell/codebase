<?php

function contact_settings_form($form, &$form_state) {

  $form['settings']['contact_email'] = array(
    '#title' => 'Email address to send notifications to.',
    '#description' => 'Enter the email address of the person who should receive inquiries.',
    '#default_value' => variable_get('contact_email', variable_get('site_mail', ini_get('sendmail_from'))),
    '#type' => 'textfield',
  );
  $form['settings']['company_name'] = array(
    '#title' => 'Enter the name of the Company',
    '#description' => '',
    '#default_value' => variable_get('company_name'),
    '#type' => 'textfield',
  ); 
  $form['settings']['mailing_address'] = array(
    '#title' => 'Enter the Company street address',
    '#description' => 'Address you would like to see displayed on the contact form',
    '#default_value' => variable_get('mailing_address'),
    '#type' => 'textfield',
  );
  $form['settings']['city_state_zip'] = array(
    '#title' => 'Company City, State, and Zipcode',
    '#description' => 'Example : Ardmore, PA 19003',
    '#default_value' => variable_get('city_state_zip'),
    '#type' => 'textfield',
  );
  $form['settings']['phone_number'] = array(
    '#title' => 'Company Phone Number',
    '#description' => 'Enter the number as you would like it to appear.',
    '#default_value' => variable_get('phone_number'),
    '#type' => 'textfield',
  );
  $form['settings']['email_address'] = array(
   '#title' => 'Company e-mail address',
   '#description' => 'Enter the email address for the contact form.',
   '#default_value' => variable_get('email_address'),
   '#type' => 'textfield',
  );
  $form['settings']['facebook_url'] = array(
   '#title' => 'Company Facebook URL',
   '#description' => 'Enter the Facebook URL for the company.',
   '#default_value' => variable_get('facebook_url'),
   '#type' => 'textfield',
  );  
  $form['settings']['twitter_url'] = array(
   '#title' => 'Company Twitter URL',
   '#description' => 'Enter the Twitter URL for the company.',
   '#default_value' => variable_get('twitter_url'),
   '#type' => 'textfield',
  );  
  $form['settings']['linkedin_url'] = array(
   '#title' => 'Company LinkedIn URL',
   '#description' => 'Enter the LinkedIn URL for the company.',
   '#default_value' => variable_get('linkedin_url'),
   '#type' => 'textfield',
  );   
  $form['settings']['privacy_page'] = array(
   '#title' => 'Path to the Privacy Page',
   '#description' => 'Example : node/123 or privacy-page with no opening or trailing slashes',
   '#default_value' => variable_get('privacy_page'),
   '#type' => 'textfield',
  );    
  $form['settings']['legal_page'] = array(
   '#title' => 'Path to the Legal Page',
   '#description' => 'Example : node/123 or legal-page with no opening or trailing slashes',
   '#default_value' => variable_get('legal_page'),
   '#type' => 'textfield',
  );      
  $form['buttons']['submit'] = array(
    '#value' => 'Apply',
    '#type' => 'submit',
  );
  return $form;
}

function contact_settings_form_submit($form, &$form_state) {
  variable_set('contact_email', $form_state['values']['contact_email']);
  variable_set('company_name', $form_state['values']['company_name']);
  variable_set('city_state_zip', $form_state['values']['city_state_zip']);
  variable_set('phone_number' , $form_state['values']['phone_number']);
  variable_set('email_address', $form_state['values']['email_address']);
  variable_set('mailing_address', $form_state['values']['mailing_address']);
  variable_set('facebook_url', $form_state['values']['facebook_url']);
  variable_set('twitter_url', $form_state['values']['twitter_url']);
  variable_set('linkedin_url', $form_state['values']['linkedin_url']);
  variable_set('privacy_page', $form_state['values']['privacy_page']);
  variable_set('legal_page', $form_state['values']['legal_page']);  
  return;
}
