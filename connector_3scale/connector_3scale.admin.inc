<?php
/**
*Page API 3scale module
*
*Date: 25 January 2012
*Author: DelRay Davis
*Description: This module creates the infrastructure to allow for API calls tot he 3scale service
*documentation for 3scale can be found at http://www.3scale.net/support/plugin-download/
*/

function connector_3scale_settings(){	
	$form['API_3scale_provider_id'] = array(
		'#type' => 'textfield',
		'#title' => t('3scale Provider ID'),
		'#default_value' => variable_get('API_3scale_provider_id'),
		'#description' => t('This value is available in from your 3scale account page')
	);	
	return system_settings_form($form);
}
if(!variable_get('API_3scale_provider_id')){
	function connector_3scale_install(){
		variable_set('API_3scale_provider_id','');
		
    	cache_clear_all();
	}
}