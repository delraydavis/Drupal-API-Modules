<?php

function pageAPI3scale_settings(){	

	//$form['API_3scale_provider_id'] = array(
		//'#type' => 'textfield',
		//'#title' => t('3scale Provider ID'),
		//'#default_value' => variable_get('API_3scale_provider_id'),
		//'#description' => t('This value is available in from your 3scale account page')
	//);

	$checked = '';
	if(variable_get('pageAPI_retrieve')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}

	//create the text field to allow user to enter their username
	$form['pageAPI_retrieve'] = array(
		'#type' => 'checkbox',
		'#title' => t('Get Page'),
		'#default_value' => variable_get('pageAPI_retrieve'),
		'#description' => t('this is the setting to allow retrieval of pages'),
		'#attributes' => $checked
	);

	if(variable_get('pageAPI_create')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}
	//create the text field to allow user to enter their password
	$form['pageAPI_create'] = array(
		'#type' => 'checkbox',
		'#title' => t('Create Page'),
		'#default_value' => variable_get('pageAPI_create'),
		'#description' => t('this is the setting to allow the creation of pages'),
		'#attributes' => $checked
	);	
	if(variable_get('pageAPI_update')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}
	//create the text field to allow user to enter authentication key
	$form['pageAPI_update'] = array(
		'#type' => 'checkbox',
		'#title' => t('Update Page'),
		'#default_value' => variable_get('pageAPI_update'),
		'#description' => t('this is the setting to allow the update of pages'),
		'#attributes' => $checked
	);
	if(variable_get('pageAPI_delete')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}	
	//delete page setting
	$form['pageAPI_delete'] = array(
		'#type' => 'checkbox',
		'#title' => t('Delete Page'),
		'#default_value' => variable_get('pageAPI_delete'),
		'#description' => t('this is the setting to allow deletion of pages'),
		'#attributes' => $checked
	);	
	//print_r(system_settings_form($form));	
	return system_settings_form($form);
}

