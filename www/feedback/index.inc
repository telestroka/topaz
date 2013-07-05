<form name="feedback" method="post" action="<?=PAGE_URL;?>" class="mainform">
	<div class="input-field">
		<label>Как Вас зовут</label>
		<input name="name" type="text" maxlength="255" value=""/>
	</div>
	<div class="input-field">
		<label>Как с Вами связаться</label>
		<input name="contacts" type="text" maxlength="255"  value=""/>
	</div>
	<div class="input-field">
		<label>Текст Вашего сообщения</label>
		<textarea name="text" rows="10" cols="17" style="margin-bottom: 60px;"></textarea>
	</div>
	<button type="submit" class="submit">Отправить</button>
</form>