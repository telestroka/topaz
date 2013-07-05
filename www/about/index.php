<?php
	define ('PAGE', '');
	require_once('../inc/init.inc'); 
	define ("MODULE", "about");
	define ("MODULE_TITLE", "О компании");
	define ("MODULE_URL", SITE_URL . '/' . MODULE);
	
	include(TEMPLATE_PATH . '/main.tpl');            
?>