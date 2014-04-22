<?php
/**
 * @file
 * bookdocumentation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bookdocumentation_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Book_add_form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'book' => 'book',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => '',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Book edit form';
  $display->uuid = '6643d7e5-d2fa-475a-99a8-ee29dc5edf3a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-878c9fa4-a843-4feb-885d-687f082a0fdc';
    $pane->panel = 'top';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '878c9fa4-a843-4feb-885d-687f082a0fdc';
    $display->content['new-878c9fa4-a843-4feb-885d-687f082a0fdc'] = $pane;
    $display->panels['top'][0] = 'new-878c9fa4-a843-4feb-885d-687f082a0fdc';
    $pane = new stdClass();
    $pane->pid = 'new-214a634b-0f5f-4aa3-a46e-a0d18d72550e';
    $pane->panel = 'top';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '214a634b-0f5f-4aa3-a46e-a0d18d72550e';
    $display->content['new-214a634b-0f5f-4aa3-a46e-a0d18d72550e'] = $pane;
    $display->panels['top'][1] = 'new-214a634b-0f5f-4aa3-a46e-a0d18d72550e';
    $pane = new stdClass();
    $pane->pid = 'new-da6602d1-d6f4-4a8b-922b-1f7719967173';
    $pane->panel = 'top';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '1',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'da6602d1-d6f4-4a8b-922b-1f7719967173';
    $display->content['new-da6602d1-d6f4-4a8b-922b-1f7719967173'] = $pane;
    $display->panels['top'][2] = 'new-da6602d1-d6f4-4a8b-922b-1f7719967173';
    $pane = new stdClass();
    $pane->pid = 'new-19a04a45-ae93-4841-b1ed-25d80ff9fe6a';
    $pane->panel = 'top';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '19a04a45-ae93-4841-b1ed-25d80ff9fe6a';
    $display->content['new-19a04a45-ae93-4841-b1ed-25d80ff9fe6a'] = $pane;
    $display->panels['top'][3] = 'new-19a04a45-ae93-4841-b1ed-25d80ff9fe6a';
    $pane = new stdClass();
    $pane->pid = 'new-98c9faaa-e8f4-4b4a-a6df-ad4480db46cb';
    $pane->panel = 'top';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '98c9faaa-e8f4-4b4a-a6df-ad4480db46cb';
    $display->content['new-98c9faaa-e8f4-4b4a-a6df-ad4480db46cb'] = $pane;
    $display->panels['top'][4] = 'new-98c9faaa-e8f4-4b4a-a6df-ad4480db46cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-878c9fa4-a843-4feb-885d-687f082a0fdc';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}
