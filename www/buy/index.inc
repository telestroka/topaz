<h1><?php echo MODULE_TITLE; ?></h1>
<form name="buy" method="post" action="<?=PAGE_URL;?>" class="mainform">
	<div class="input-field">
		<label>Ваше имя</label>
		<input name="name" type="text" maxlength="255" value=""/>
	</div>
	<div class="input-field">
		<label>Как с Вами связаться</label>
		<input name="contacts" type="text" maxlength="255"  value=""/>
	</div>
	<div class="input-field">
		<label>Укажите, какие модели, представленные на сайте или в прас-листе, вы хотите приобрести и в каком количестве</label>
		<textarea name="text" rows="10" cols="17"></textarea>
	</div>
	<button type="submit" class="submit">Отправить</button>
</form>