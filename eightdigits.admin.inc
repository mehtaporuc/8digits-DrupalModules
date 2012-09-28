<?php
/**
 * @file
 * Administrative page callbacks for the 8Digits Monitoring module.
 */

function eightdigits_admin_settings_form(&$form_state) {
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
    '#collapsible' => FALSE,
  );

  $form['account']['eightdigits_account'] = array(
    '#type' => 'textfield',
    '#title' => t('Tracking Code'),
    '#default_value' => variable_get('eightdigits_account',''),
    '#size' => 15,
    '#maxlength' => 8,
    '#required' => TRUE,
    '#description' => t(' To get a Tracking Code, <a href="@analytics">register your site with 8digits Monitoring Platform</a>', array('@analytics' => 'http://www.8digits.com/web/pricing/index')),
  );

  return system_settings_form($form);
}

