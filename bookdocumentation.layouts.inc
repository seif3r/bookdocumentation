<?php
/**
 * @file
 * bookdocumentation.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function bookdocumentation_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'test_nr_1';
  $layout->admin_title = 'test nr 1';
  $layout->admin_description = 'testar panels everywhere inför wikisida';
  $layout->category = 'theme';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 6,
          1 => 'main-row',
          2 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_nav',
          1 => 'center',
          2 => 'right_nav',
        ),
        'parent' => 'main',
        'class' => 'content',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '54.47013067778044',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left_nav' => array(
        'type' => 'region',
        'title' => 'left-nav',
        'width' => '29.160661902493548',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right_nav' => array(
        'type' => 'region',
        'title' => 'right-nav',
        'width' => '16.369207419726013',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'footer',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'header',
      ),
    ),
  );
  $export['test_nr_1'] = $layout;

  return $export;
}
