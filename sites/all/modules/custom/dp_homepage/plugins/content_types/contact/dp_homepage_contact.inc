<?php

$plugin = array(
  'title' => t('DP Homepage - Contact'),
  'single' => TRUE,
  'category' => array(t('Double Prime'), -9),
  'render callback' => 'dp_homepage_contact_pane_content_type_render',
  'hook theme' => 'dp_homepage_contact_pane_content_type_theme',
);

function dp_homepage_contact_pane_content_type_render($subtype, $conf, $content = NULL) {
  $content['mailing_address'] = variable_get('mailing_address');
  $content['company_name'] = variable_get('company_name');
  $content['city_state_zip'] = variable_get('city_state_zip');
  $content['email_address'] = variable_get('email_address');
  $content['phone_number'] = variable_get('phone_number');
  $content['twitter_url'] = variable_get('twitter_url');
  $content['facebook_url'] = variable_get('facebook_url');
  $content['linkedin_url'] = variable_get('linkedin_url');
  $content['privacy_page'] = "#node-" . preg_replace('{node/}', '', drupal_lookup_path("source", variable_get('privacy_page')));
  $content['legal_page'] = "#node-" . preg_replace('{node/}', '', drupal_lookup_path("source", variable_get('legal_page')));
  $full = views_embed_view('contact_pages', 'page');
  $output = theme('dp_homepage_contact', array('content' => $content, 'full' => $full)); 
  $block = new StdClass();
  if (!empty($output)) {
    $block->content = $output;
  }
  return $block;
}

function dp_homepage_contact_pane_content_type_theme(&$theme, $plugin) {
  $theme['dp_homepage_contact'] = array(
    'variables' => array(),
    'path' => $plugin['path'],
    'template' => 'dp_homepage_contact',
  );
}



// Contact form

function contact_form($form, &$form_state) {
  $form['result'] = array(
    '#type' => 'markup',
    '#prefix' => '<div id="contact-form-message">',
    '#suffix' => '</div>',
  );
  
  $form['#attached']['css'] = array(
    //drupal_get_path('module', 'contact_form') . '/css/contact.css',
  );

 $form['contact-left'] = array(
    '#type' => 'fieldset',
  );

  $form['contact-left']['name'] = array(
    '#title' => 'Name',
    '#required' => TRUE,
    '#type' => 'textfield',
  );

  $form['contact-left']['company'] = array(
    '#title' => 'Company',
    //'#suffix' => '<div class="clearfix"></div>',
    '#type' => 'textfield',
  );

  $form['contact-left']['email'] = array(
    '#title' => 'Email',
    //'#prefix' => '<div class="contactgroup">',
    '#required' => TRUE,
    '#type' => 'textfield',
  );

  $form['contact-left']['phone'] = array(
    '#title' => 'Phone',
    //'#suffix' => '</div><div class="clearfix"></div>',
    '#required' => TRUE,
    '#type' => 'textfield',
  );

 $form['contact-right'] = array(
    '#type' => 'fieldset',
  );  

  $form['contact-right']['inquiry_type'] = array(
    '#title' => t('Inquiry Type'),
    '#type' => 'select',
    '#required' => TRUE,
    '#options' => array(
      'applicant'   => t('Job Applicant'),
      'partnership'   => t('Strategic Partnership'),
      'learn' => t('Learn more about DP\'s services'),
      'other'      => t('Other'),
    ),
  );


  $form['contact-right']['message'] = array(
    '#type' => 'textarea',
    '#required' => TRUE,
    '#title' => t('Message'),
  );

  $form['catchspam'] = array(
    '#type' => 'textfield',
    '#title' => 'Catchme',
  );
/*
  $form['submit'] = array(
    '#value' => 'Submit',
    '#type' => 'submit',
    '#ajax' => array(
      'callback' => 'ajax_submit',
      'wrapper' => 'contact-form-message',
    ),
  );
*/

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit ›',  
  );

  return $form;
}

/*
function contact_form_callback(){
  $form = drupal_get_form('contact_form');
  $content['form'] = drupal_render($form);
  $output = theme('contact_form', array('form' => $content));
  return $output;
}
*/

/**
* Ajax callback function.
*/
function ajax_submit($form, $form_state) {
  $module = 'dp_homepage';
  $key = 'admin';
  $to = variable_get('contact_email', variable_get('site_mail', ini_get('sendmail_from')));
  //watchdog('Contact form email', $to);
  $language = language_default();
  $params = array();
  $from = 'noreply@doubleprime.com';
  $send = FALSE;
  $subject = 'doubleprime.com contact form submission';
  $contact_message = $form_state['values']['message'];
  // check if required fields are not empty
  if ((trim($form_state['values']['name']) == '') || (trim($form_state['values']['email']) == '') || (trim($form_state['values']['name']) == '')) {
    watchdog('Contact: Empty required fields.', $form_state['values']['name'] . " | " . $form_state['values']['email'] . " | " . $contact_message);
    exit;
  }
  //check if contact message has any html in it
  if ($results_message != strip_tags($contact_message)) {
    watchdog('Contact: HTML detected.', $contact_message);
    exit;
  }
  //second check for href
  if (strpos($contact_message, 'href') !== false) {
    watchdog('Contact: href detected.', $contact_message);
    exit;
  }

  $message = drupal_mail($module, $key, $to, $language, $params, $from, $send);

  $message['subject'] = $subject;
  $message['body'] = array();
  $message['body'][] = 'Name: ' . urldecode($form_state['values']['name']);
  $message['body'][] = 'Company: ' . urldecode($form_state['values']['company']);
  $message['body'][] = 'Email: ' . $form_state['values']['email']; 
  $message['body'][] = 'Phone: ' . urldecode($form_state['values']['phone']); 
  $message['body'][] = 'Inquiry type: ' . urldecode($form_state['values']['inquiry_type']);
  $message['body'][] = 'Message: ' . urldecode($contact_message);

  // Retrieve the responsible implementation for this message.
  $system = drupal_mail_system($module, $key);

  // Format the message body.
  $message = $system->format($message);
  // Send e-mail.
  $message['result'] = $system->mail($message);
  //watchdog('Mail Send Result', $message['result']);
  if ($message['result'] == 1) {
    return t('Thank you for reaching out to us, someone will get back to you shortly.');
  } else {
    return $form;
  }
}

/**
* Contact form submit callback function.
*/
function contact_form_submit() {

  //print_r($_POST);
  if (!empty($_POST['catchspam'])) { die('spamdeath'); }

  $results_name = filter_xss(check_plain($_POST['name']));
  $results_company = filter_xss(check_plain($_POST['company']));
  $results_email = htmlentities(check_plain($_POST['email']));
  $results_phone = filter_xss(check_plain($_POST['phone']));
  $results_inquiry_type = filter_xss(check_plain($_POST['inquiry_type']));
  $results_message = filter_xss(check_plain($_POST['message']));
  // decode message text
  $results_message = urldecode($results_message);

  // check if required fields are not empty
  if ((trim($results_name) == '') || (trim($results_email) == '') || (trim($results_message) == '')) {
    watchdog('Contact: Empty required fields.', $results_name . " | " . $results_email . " | " . $results_message);
    exit;
  }



  //check if contact message has any html in it
  if ($results_message != strip_tags($results_message)) {
    watchdog('Contact: HTML detected', $results_message);
    exit;
  }
  //second check for href
  if (strpos($results_message, 'href') !== false) {
    watchdog('Contact: href detected', $results_message);
    exit;
  }
  $module = 'dp_homepage';
  $key = 'admin';
  $to = variable_get('contact_email', variable_get('site_mail', ini_get('sendmail_from')));
  watchdog('Contact form email', $to);
  $language = language_default();
  $params['headers'] = array(
    'Bcc' => 'tvitkauskas@doubleprime.com', // TEST
  );
  $from = 'noreply@doubleprime.com';
  $send = FALSE;
  $subject = 'doubleprime.com contact form submission';
  $message = drupal_mail($module, $key, $to, $language, $params, $from, $send);

  $message['subject'] = $subject;
  $message['body'] = array();
  $message['body'][] = 'Name: ' . urldecode($results_name); 
  $message['body'][] = 'Company: ' . urldecode($results_company);
  $message['body'][] = 'Email: ' . $results_email; 
  $message['body'][] = 'Phone: ' . urldecode($results_phone); 
  $message['body'][] = 'Inquiry type: ' . urldecode($results_inquiry_type); 
  $message['body'][] = 'Message: ' . urldecode($results_message);

  // Retrieve the responsible implementation for this message.
  $system = drupal_mail_system($module, $key);

  // Format the message body.
  $message = $system->format($message);
  // Send e-mail.
  $message['result'] = $system->mail($message);
  //print_r($message);
  watchdog('Mail Send Result', $message['result']);
  if ($message['result'] == 1) {
    return t('Thank you for reaching out to us, someone will get back to you shortly.');
  } else {
    return $form;
  }
}

