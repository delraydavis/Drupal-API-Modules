<?php

function articleAPI3scale_settings(){	

	//$form['API_3scale_provider_id'] = array(
		//'#type' => 'textfield',
		//'#title' => t('3scale Provider ID'),
		//'#default_value' => variable_get('API_3scale_provider_id'),
		//'#description' => t('This value is available in from your 3scale account article')
	//);

	$checked = '';
	if(variable_get('articleAPI_retrieve')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}

	//create the text field to allow user to enter their username
	$form['articleAPI_retrieve'] = array(
		'#type' => 'checkbox',
		'#title' => t('Get Article'),
		'#default_value' => variable_get('articleAPI_retrieve'),
		'#description' => t('this is the setting to allow retrieval of articles'),
		'#attributes' => $checked
	);

	if(variable_get('articleAPI_create')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}
	//create the text field to allow user to enter their password
	$form['articleAPI_create'] = array(
		'#type' => 'checkbox',
		'#title' => t('Create Article'),
		'#default_value' => variable_get('articleAPI_create'),
		'#description' => t('this is the setting to allow the creation of articles'),
		'#attributes' => $checked
	);	
	if(variable_get('articleAPI_update')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}
	//create the text field to allow user to enter authentication key
	$form['articleAPI_update'] = array(
		'#type' => 'checkbox',
		'#title' => t('Update Article'),
		'#default_value' => variable_get('articleAPI_update'),
		'#description' => t('this is the setting to allow the update of pages'),
		'#attributes' => $checked
	);
	if(variable_get('articleAPI_delete')){
		$check = array('checked' => 'checked');
	}else{
		$checked = array();
	}	
	//delete page setting
	$form['articleAPI_delete'] = array(
		'#type' => 'checkbox',
		'#title' => t('Delete Article'),
		'#default_value' => variable_get('articleAPI_delete'),
		'#description' => t('this is the setting to allow deletion of articles'),
		'#attributes' => $checked
	);	
	//print_r(system_settings_form($form));	
	return system_settings_form($form);
}

