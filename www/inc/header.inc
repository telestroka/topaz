<div id="header">
	<div id="phone">(383) 261-08-40, 8-905-954-64-07 <a href="mailto:info@topaz-mebel.ru">info@topaz-mebel.ru</a></div><br/>
	<div id="site-title">Выбирайте практичную мебель 
		<?php
			echo (isset($sect) && $sect == 'home') ? 'для дома' : '<a href="/home/">для дома</a>';
			echo ' ';
			echo (isset($sect) && $sect == 'office') ? 'и офиса' : '<a href="/office/">и офиса</a>';
		?>:
	</div>
	<?php if (MODULE == '' || MODULE == 'catalog'): ?>
		<div id="site-info">
			Базовый цвет: «Вишня оксфорд». Другие цвета — под заказ. <br/>
			ЛДСП, кромка — ПВХ 0,4 мм, 2 мм в цвет.<br/>
			Толщина топов и столешниц — 22 мм., каркасов — 16 мм.<br/>
			Шкафы снабжены регулируемыми по высоте опорами.
		</div>
		<? include(SITE_PATH . '/inc/menu.inc'); ?>
	<?php endif; ?>
</div>