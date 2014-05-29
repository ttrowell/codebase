<?php

function contact_form_theme() {
  return array(
    'contact_form'  => array(
      'render element' => 'form',
      'template' => 'templates/contact-form',
    ),
    'contact_email' => array(
      'template' => 'templates/contact-email',
      'arguments' => array('message' => ''),
    ),
  );
}
