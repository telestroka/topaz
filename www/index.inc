<?php 
	echo '<h1>' . $item->title . '</h1>';
	echo '<img src="/images/catalog/home/first/1.jpg" alt=""/>';
	echo '<ul id="sizes">';
		foreach ($item->sizes->size as $size) {
			$size = reset($size);
			echo '<li>' . $size . '</li>';
		}
	echo '</ul>';
	echo '<div id="description">' . $item->description . '</div>';
?>