<?php
/**
 * @file
 * h_indicator.features.inc
 */

/**
 * Implements hook_views_api().
 */
function h_indicator_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function h_indicator_node_info() {
  $items = array(
    'indicator_registry' => array(
      'name' => t('Indicator registry'),
      'base' => 'node_content',
      'description' => t('Indicators registry'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
