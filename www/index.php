<?php
	define ('PAGE', '');
	require_once('php/fs.php'); 
	require_once('inc/init.inc'); 
	define ("MODULE", "");
	define ("MODULE_TITLE", "");
	define ("MODULE_URL", SITE_URL . '/' . MODULE);
	
	$cat = 'first';
	$sect = 'home';
	$items = file_get_contents('data/' . $sect . '/' . $cat . '.xml');	
	$items = simplexml_load_string($items);
	$item = $items->xpath('model[@id="1"]');
	$item = reset($item);
	
	include(TEMPLATE_PATH . '/main.tpl');            
?>