<?php
/**
 * @file
 * Checksheet module drush integration.
 */

/**
 * Implements hook_drush_command().
 *
 *  * @return
 *   An associative array describing your command(s).
 *
 * @see drush_parse_command()
 */
function checksheet_drush_command() {
  $items = array();

  $items['cta'] = array(
    'description' => "Analyse content types and see if they match the provided spreadsheet.",
    'drupal dependencies' => array('checksheet'),
  );

  return $items;
}

function drush_checksheet_cta() {
  $status = _checksheet_content_type_audit();
  if (!empty($status)) {
    drush_print_r($status);
    return drush_set_error('', dt('Content Types do not match.'));
  }
}

