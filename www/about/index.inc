<h1><?php echo MODULE_TITLE; ?></h1>
<p>
Общество с ограниченной ответственностью «Топаз», производственная компания.</br></br>

630039, Новосибирск, ул. Гусинобродское шоссе, 60</br>
ИНН 5406332140</br>
КПП 540501001</br>
</br>
Р./cчет 40702810017000001636</br>
в НФ Транскредитбанка в г. Новосибирске
</br></br></br></br>
</p>
	

<h1>Схема проезда</h1>
<!-- Этот блок кода нужно вставить в ту часть страницы, где вы хотите разместить карту (начало) -->
<div id="ymaps-map-id_134017055971753659385" style="width: 559px; height: 314px;"></div>
<div style="width: 559px; text-align: right;"><a href="http://api.yandex.ru/maps/tools/constructor/?lang=ru-RU" target="_blank" style="color: #1A3DC1; font: 13px Arial,Helvetica,sans-serif;">Создано с помощью инструментов Яндекс.Карт</a></div>
<script type="text/javascript">
function fid_134017055971753659385(ymaps) {
    var map = new ymaps.Map("ymaps-map-id_134017055971753659385", {
        center: [83.00491860844534, 55.037261884590535],
        zoom: 16,
        type: "yandex#map"
    });
    map.controls
        .add("zoomControl")
        .add("mapTools")
        .add(new ymaps.control.TypeSelector(["yandex#map", "yandex#satellite", "yandex#hybrid", "yandex#publicMap"]));
    map.geoObjects
        .add(new ymaps.Placemark([83.00909212567252, 55.03622670604871], {
            balloonContent: "Топаз, производственная компания<br/>Гусинобродское шоссе,60"
        }, {
            preset: "twirl#lightblueDotIcon"
        }));
};
</script>
<script type="text/javascript" src="http://api-maps.yandex.ru/2.0/?coordorder=longlat&load=package.full&wizard=constructor&lang=ru-RU&onload=fid_134017055971753659385"></script>
<!-- Этот блок кода нужно вставить в ту часть страницы, где вы хотите разместить карту (конец) -->