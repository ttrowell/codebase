<?php

function contact_form($form, &$form_state) {
  $form['#attached']['css'] = array(
    //drupal_get_path('module', 'contact_form') . '/css/contact.css',
  );

  $form['name'] = array(
    '#title' => 'Name',
    '#required' => TRUE,
    '#type' => 'textfield',
  );

  $form['company'] = array(
    '#title' => 'Company',
    //'#suffix' => '<div class="clearfix"></div>',
    '#type' => 'textfield',
  );

  $form['email'] = array(
    '#title' => 'Email',
    //'#prefix' => '<div class="contactgroup">',
    '#required' => TRUE,
    '#type' => 'textfield',
  );

  $form['primary_number'] = array(
    '#title' => 'Primary Contact Number',
    //'#suffix' => '</div><div class="clearfix"></div>',
    '#type' => 'textfield',
  );

  $form['preferred_contact'] = array(
    '#title' => 'Preferred method of contact',
    '#type' => 'radios',
    '#default_value' => 'email',
    //'#prefix' => '<div class="preferredgroup">',
    '#options' => array(
      'email' => 'Email',
      'phone' => 'Phone',
    ),
    '#attributes' => array(
      'class' => array(
        'preferred-contact-group',
      ),
    ),
  );

//  $form['phone_best_time'] = array(
//    '#title' => 'Best time to contact',
//    '#type' => 'textfield',
//    '#prefix' => '<div class="phone-contact-field" style="display: none">',
//    '#suffix' => '</div></div>',
//  );

  $form['inquiry_type'] = array(
    '#title' => t('Inquiry Type'),
    '#type' => 'select',
    '#options' => array(
      'applicant'   => t('Job Applicant'),
      'partnership'   => t('Strategic Partnership'),
      'learn' => t('Learn more about DP\'s services'),
      'other'      => t('Other'),
    ),
  );


  $form['message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
  );

  $form['buttons']['submit'] = array(
    '#value' => 'Submit',
    '#type' => 'submit',
    '#attributes' => array(
      'class' => array(
        'form-submit-request',
      ),
    ),
  );

  return $form;
}

function contact_form_callback(){
  $form = drupal_get_form('contact_form');
  $content['form'] = drupal_render($form);
  $output = theme('contact_form', array('form' => $content));
  return $output;
}

function contact_form_submit($form, &$form_state) {
  $name = $form['name']['#value'];
  $output = "Thank you for your interest, $name. We will get back with you shortly regarding your inquiry.";
  //$output = variable_get('contact_confirmation', $output);

  drupal_set_message($output);

  contact_form_mail_send($form_state['values']);
}

function contact_form_mail_send($form_values) {
  $module = 'contact_form';
  $key = 'admin';
  $to = variable_get('contact_email', variable_get('site_mail', ini_get('sendmail_from')));
  $from = 'noreply@doubleprime.com';

  $params = $form_values;
  $language = language_default();
  $send = TRUE;

  $result = drupal_mail($module, $key, $to, $language, $params, $from, $send);
  if ($result['result'] == TRUE) {
    //drupal_set_message(t('Your message has been sent.'));
  } else {
    drupal_set_message(t('There was a problem sending your message and it was not sent.'), 'error');
  }
}
