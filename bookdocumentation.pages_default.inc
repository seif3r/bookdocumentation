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

/**
 * Implements hook_default_page_manager_pages().
 */
function bookdocumentation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'book_page';
  $page->task = 'page';
  $page->admin_title = 'book-page';
  $page->admin_description = 'book page';
  $page->path = 'bookpage/%node';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_book_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'book_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Sample variant',
    'no_blocks' => 1,
    'css_id' => 'page-wrapper',
    'css' => '/* set a fixed overall width */
  #page-wrapper > .panel-flexible-inside {
    width: 1020px;
    margin-left: auto;
    margin-right: auto;
  }

  /* Add some margin to the main content row. This class was set in the layout designer. */
  #page-wrapper .main-content {
    padding: 0 10px;
  }',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Book parent',
        'keyword' => 'book_parent',
        'name' => 'book_parent',
        'type' => 'top',
        'context' => 'node',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'book' => 'book',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible:test_nr_1';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => 'main-content',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '200',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'header',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'center' => NULL,
      'book_navigation' => NULL,
      'toc_related_navigation' => NULL,
      'left_nav' => NULL,
      'right_nav' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7eeede11-3b49-4cdf-bf96-59fd48852834';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f8b42920-256b-4d3f-a717-edfdb56e5e4d';
    $pane->panel = 'center';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'f8b42920-256b-4d3f-a717-edfdb56e5e4d';
    $display->content['new-f8b42920-256b-4d3f-a717-edfdb56e5e4d'] = $pane;
    $display->panels['center'][0] = 'new-f8b42920-256b-4d3f-a717-edfdb56e5e4d';
    $pane = new stdClass();
    $pane->pid = 'new-17cbc973-3c2a-4b62-8b29-2ed6cb53acbb';
    $pane->panel = 'center';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '17cbc973-3c2a-4b62-8b29-2ed6cb53acbb';
    $display->content['new-17cbc973-3c2a-4b62-8b29-2ed6cb53acbb'] = $pane;
    $display->panels['center'][1] = 'new-17cbc973-3c2a-4b62-8b29-2ed6cb53acbb';
    $pane = new stdClass();
    $pane->pid = 'new-4a642def-c447-4106-9dc1-e4a870512049';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'node',
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
    $pane->uuid = '4a642def-c447-4106-9dc1-e4a870512049';
    $display->content['new-4a642def-c447-4106-9dc1-e4a870512049'] = $pane;
    $display->panels['center'][2] = 'new-4a642def-c447-4106-9dc1-e4a870512049';
    $pane = new stdClass();
    $pane->pid = 'new-9f105ae0-8c84-4ce1-89c6-d7439b86a859';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'node',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9f105ae0-8c84-4ce1-89c6-d7439b86a859';
    $display->content['new-9f105ae0-8c84-4ce1-89c6-d7439b86a859'] = $pane;
    $display->panels['center'][3] = 'new-9f105ae0-8c84-4ce1-89c6-d7439b86a859';
    $pane = new stdClass();
    $pane->pid = 'new-a41effbd-3302-4cef-8206-5b992b13bc79';
    $pane->panel = 'left_nav';
    $pane->type = 'block';
    $pane->subtype = 'system-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->locks = '';
    $pane->uuid = 'a41effbd-3302-4cef-8206-5b992b13bc79';
    $display->content['new-a41effbd-3302-4cef-8206-5b992b13bc79'] = $pane;
    $display->panels['left_nav'][0] = 'new-a41effbd-3302-4cef-8206-5b992b13bc79';
    $pane = new stdClass();
    $pane->pid = 'new-35fb2aa9-3bdc-462a-9103-25edea4b3863';
    $pane->panel = 'left_nav';
    $pane->type = 'views_panes';
    $pane->subtype = 'book_meny-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_book_parent_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '35fb2aa9-3bdc-462a-9103-25edea4b3863';
    $display->content['new-35fb2aa9-3bdc-462a-9103-25edea4b3863'] = $pane;
    $display->panels['left_nav'][1] = 'new-35fb2aa9-3bdc-462a-9103-25edea4b3863';
    $pane = new stdClass();
    $pane->pid = 'new-b8b93b53-a67b-4ba5-8cbe-5d93225dc718';
    $pane->panel = 'right_nav';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->locks = '';
    $pane->uuid = 'b8b93b53-a67b-4ba5-8cbe-5d93225dc718';
    $display->content['new-b8b93b53-a67b-4ba5-8cbe-5d93225dc718'] = $pane;
    $display->panels['right_nav'][0] = 'new-b8b93b53-a67b-4ba5-8cbe-5d93225dc718';
    $pane = new stdClass();
    $pane->pid = 'new-dbb1fa8a-5a24-4e44-ad92-940544e5c7ba';
    $pane->panel = 'right_nav';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_relevant_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'node_reference_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'node',
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
    $pane->uuid = 'dbb1fa8a-5a24-4e44-ad92-940544e5c7ba';
    $display->content['new-dbb1fa8a-5a24-4e44-ad92-940544e5c7ba'] = $pane;
    $display->panels['right_nav'][1] = 'new-dbb1fa8a-5a24-4e44-ad92-940544e5c7ba';
    $pane = new stdClass();
    $pane->pid = 'new-89135e08-23f0-44ee-96e4-bb10ca775cee';
    $pane->panel = 'right_nav';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_add_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'node',
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
    $pane->uuid = '89135e08-23f0-44ee-96e4-bb10ca775cee';
    $display->content['new-89135e08-23f0-44ee-96e4-bb10ca775cee'] = $pane;
    $display->panels['right_nav'][2] = 'new-89135e08-23f0-44ee-96e4-bb10ca775cee';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['book_page'] = $page;

  return $pages;

}
