

//
//  HTML PAGE
//


const char PAGE_RelayPage[] PROGMEM = R"=====(
<meta name="viewport" content="width=device-width,initial-scale=1"/>
<strong>Relay Cntrol</strong>
<hr>
<a href="/relay1on"  style="width:250px"  class="btn btn--m btn--blue" >Relay1 ON </a><br>
<a href="/relay1off" style="width:250px"  class="btn btn--m btn--blue" >Relay1 OFF</a><br>
<a href="/relay2on"  style="width:250px"  class="btn btn--m btn--blue" >Relay2 ON </a><br>
<a href="/relay2off" style="width:250px"  class="btn btn--m btn--blue" >Relay2 OFF</a><br>



<script>
window.onload = function ()
{
	load("style.css","css", function() 
	{
		load("microajax.js","js", function() 
		{
				// Do something after load...
		});
	});
}
function load(e,t,n){if("js"==t){var a=document.createElement("script");a.src=e,a.type="text/javascript",a.async=!1,a.onload=function(){n()},document.getElementsByTagName("head")[0].appendChild(a)}else if("css"==t){var a=document.createElement("link");a.href=e,a.rel="stylesheet",a.type="text/css",a.async=!1,a.onload=function(){n()},document.getElementsByTagName("head")[0].appendChild(a)}}

</script>

)=====";


