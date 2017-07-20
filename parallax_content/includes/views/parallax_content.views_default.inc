<?php


function parallax_content_views_default_views() {
	$view = new view();
$view->name = 'parallax_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Parallax Content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Parallax Content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['uses_fields'] = TRUE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['view_mode'] = 'full';
$handler->display->display_options['row_options']['links'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Background Images */
$handler->display->display_options['fields']['field_new_background']['id'] = 'field_new_background';
$handler->display->display_options['fields']['field_new_background']['table'] = 'field_data_field_new_background';
$handler->display->display_options['fields']['field_new_background']['field'] = 'field_new_background';
$handler->display->display_options['fields']['field_new_background']['label'] = '';
$handler->display->display_options['fields']['field_new_background']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_new_background']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_new_background']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['field_new_body']['id'] = 'field_new_body';
$handler->display->display_options['fields']['field_new_body']['table'] = 'field_data_field_new_body';
$handler->display->display_options['fields']['field_new_body']['field'] = 'field_new_body';
$handler->display->display_options['fields']['field_new_body']['label'] = '';
$handler->display->display_options['fields']['field_new_body']['element_label_colon'] = FALSE;
/* Field: Content: Weight */
$handler->display->display_options['fields']['field_weight']['id'] = 'field_weight';
$handler->display->display_options['fields']['field_weight']['table'] = 'field_data_field_weight';
$handler->display->display_options['fields']['field_weight']['field'] = 'field_weight';
$handler->display->display_options['fields']['field_weight']['label'] = '';
$handler->display->display_options['fields']['field_weight']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_weight']['type'] = 'weight_integer';
$handler->display->display_options['fields']['field_weight']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Foreground Image */
$handler->display->display_options['fields']['field_new_foreground']['id'] = 'field_new_foreground';
$handler->display->display_options['fields']['field_new_foreground']['table'] = 'field_data_field_new_foreground';
$handler->display->display_options['fields']['field_new_foreground']['field'] = 'field_new_foreground';
$handler->display->display_options['fields']['field_new_foreground']['label'] = '';
$handler->display->display_options['fields']['field_new_foreground']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_new_foreground']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_new_foreground']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Parallax Effects */
$handler->display->display_options['fields']['field_new_effects']['id'] = 'field_new_effects';
$handler->display->display_options['fields']['field_new_effects']['table'] = 'field_data_field_new_effects';
$handler->display->display_options['fields']['field_new_effects']['field'] = 'field_new_effects';
/* Sort criterion: Content: Weight (field_weight) */
$handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
$handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
$handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'parallax_content' => 'parallax_content',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'index.php';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

	
		  $handler->display->display_options['sitename_title'] = '1';


	// Add view to list of views to provide.
  	$views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.

  // At the end, return array of default views.
 	 return $views;
	}


?>