<?php
	define ('PAGE', '');
	require_once('../inc/init.inc'); 
	define ("MODULE", "faq");
	define ("MODULE_TITLE", "Вопросы и ответы");
	define ("MODULE_URL", SITE_URL . '/' . MODULE);
	
	if ($_SERVER['REQUEST_METHOD'] == 'POST')
	{
		$message =  'Вопрос: ' . $_POST['text'] . "\r\n" .
					'Имя: ' . $_POST['name'] . "\r\n" .
					'Контакты: ' . $_POST['contacts'];
		
		require_once(SITE_PATH . '/php/mail.php');
		mailer(OWNER_EMAIL, $_SERVER['HTTP_HOST'] . ':' . MODULE, $message);
		exit(header('Location: ' . SITE_URL . '/ok.php'));
	}
	
	include(TEMPLATE_PATH . '/main.tpl');            
?>