<?php
	define ('PAGE', '');
	require_once('../php/fs.php'); 
	require_once('../inc/init.inc'); 
	define ("MODULE", "catalog");
	define ("MODULE_TITLE", "");
	define ("MODULE_URL", SITE_URL . '/' . MODULE);
	
	$cat = assign('cat');
	$sect = assign('sect');
	$item_id = assign('item');
	
	$sects = read_dir('../data');
	if (!in_array($sect, $sects)) $sect = reset($sects);
	
	$cats = array();
	$cats_files = read_dir('../data/' . $sect);
	foreach ($cats_files as $cats_file) {
		$cats[] = str_replace('.xml', '', $cats_file);
	}
	if (!in_array($cat, $cats)) {
		if ($sect == 'office') $cat = 'table';
		else $cat = reset($cats);
	}
	
	$items = file_get_contents('../data/' . $sect . '/' . $cat . '.xml');
	$items = simplexml_load_string($items);
	$item = $items->xpath('model[@id="' . $item_id . '"]');
	if ( !count($item) ) {
		$item_id = 1;
		$item = $items->xpath('model[@id="1"]');
	}
	$item = reset($item);
	
	include(TEMPLATE_PATH . '/main.tpl');            
?>