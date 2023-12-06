 $.Isotope.prototype._getMasonryGutterColumns = function() {
   var gutter = this.options.masonry && this.options.masonry.gutterWidth || 0;
       containerWidth = this.element.width();
 
   this.masonry.columnWidth = this.options.masonry && this.options.masonry.columnWidth ||
                 this.$filteredAtoms.outerWidth(true) ||
                 containerWidth;

   this.masonry.columnWidth += gutter;

   this.masonry.cols = Math.floor( ( containerWidth + gutter ) / this.masonry.columnWidth );
   this.masonry.cols = Math.max( this.masonry.cols, 1 );
 };

 $.Isotope.prototype._masonryReset = function() {
   this.masonry = {};
   this._getMasonryGutterColumns();
   var i = this.masonry.cols;
   this.masonry.colYs = [];
   while (i--) {
     this.masonry.colYs.push( 0 );
   }
 };

 $.Isotope.prototype._masonryResizeChanged = function() {
   var prevSegments = this.masonry.cols;
   this._getMasonryGutterColumns();
   return ( this.masonry.cols !== prevSegments );
 };



$(function(){
   
   var $container_1 = $('#portraitcontainer_1');
   var $container_2 = $('#portraitcontainer_2');
   var $container_3 = $('#portraitcontainer_3');
        
$container_1.isotope({
     itemSelector : '.element',
     masonry : {
       columnWidth : 300,
       gutterWidth : 18
     }
   });

$container_2.isotope({
     itemSelector : '.element',
     masonry : {
       columnWidth : 300,
       gutterWidth : 18
     }
   });

$container_3.isotope({
     itemSelector : '.element',
     masonry : {
       columnWidth : 300,
       gutterWidth : 18
     }
   });
   
  
//////////////// container_1 ////////////////

$container_1.delegate( '.name', 'click', function(){
$('div[id="el_'+$(this).attr("id")+'"]').toggleClass('large');
$('span[class="close"][id="'+$(this).attr("id")+'"]').show();
$container_1.isotope('reLayout');
});

$container_1.delegate( '.element img', 'click', function(){
$('div[id="el_'+$(this).attr("alt")+'"]').toggleClass('large');
$('span[class="close"][id="'+$(this).attr("alt")+'"]').show();
$container_1.isotope('reLayout');
});

$container_1.delegate( '.close', 'click', function(){
$('div[id="el_'+$(this).attr("id")+'"]').removeClass('large');
$(this).hide();
$container_1.isotope('reLayout');
});

//////////////// container_2 ////////////////

$container_2.delegate( '.name', 'click', function(){
$('div[id="el_'+$(this).attr("id")+'"]').toggleClass('large');
$('span[class="close"][id="'+$(this).attr("id")+'"]').show();
$container_2.isotope('reLayout');
});

$container_2.delegate( '.element img', 'click', function(){
$('div[id="el_'+$(this).attr("alt")+'"]').toggleClass('large');
$('span[class="close"][id="'+$(this).attr("alt")+'"]').show();
$container_2.isotope('reLayout');
});

$container_2.delegate( '.close', 'click', function(){
$('div[id="el_'+$(this).attr("id")+'"]').removeClass('large');
$(this).hide();
$container_2.isotope('reLayout');
});

//////////////// container_3 ////////////////

$container_3.delegate( '.name', 'click', function(){
$('div[id="el_'+$(this).attr("id")+'"]').toggleClass('large');
$('span[class="close"][id="'+$(this).attr("id")+'"]').show();
$container_3.isotope('reLayout');
});

$container_3.delegate( '.element img', 'click', function(){
$('div[id="el_'+$(this).attr("alt")+'"]').toggleClass('large');
$('span[class="close"][id="'+$(this).attr("alt")+'"]').show();
$container_3.isotope('reLayout');
});

$container_3.delegate( '.close', 'click', function(){
$('div[id="el_'+$(this).attr("id")+'"]').removeClass('large');
$(this).hide();
$container_3.isotope('reLayout');
});

   
});



function update()
{
	
	var docViewTop = $(window).scrollTop();
	
	if(docViewTop >= 580 && $(document).width() > 1020)
	{
		$('#scrolled_menu .menu').css("display", "inline");
		$('#menu_icon').css("display", "none");
	}
	else if(docViewTop < 580 && $(document).width() > 1020)
	{
		$('#scrolled_menu .menu').css("display", "none");
		$('#menu_icon').css("display", "none");
	}
	else
	{
		$('#scrolled_menu .menu').css("display", "none");
		$('#menu_icon').css("display", "block");
	}
	
	
	
	if(docViewTop >= 252 && $(document).width() < 1440)
	{
		$('#logo_small').css("display", "inline");
	}
	else if(docViewTop >= 366 && $(document).width() > 1440)
	{
		$('#logo_small').css("display", "inline");
	}
	else
	{
		$('#logo_small').css("display", "none");
	}
	

}


$(document).ready(function(){

var pos;

update();


if($('p[class="error"]').length)  
{

$('html,body').animate({scrollTop: $('div[id="anmeldung"]').offset().top - 160}, 750, function () {});

}


if(!(/Linux x86_64|Android|iPhone|iPad|iPod|BlackBerry|Windows Phone/i).test(navigator.userAgent || navigator.vendor || window.opera)){
    skrollr.init({
        forceHeight: false
    });

	$('#scrollbar1').tinyscrollbar();
	$('#scrollbar2').tinyscrollbar();
	$('#scrollbar3').tinyscrollbar();
	$('#scrollbar4').tinyscrollbar();
	$('#scrollbar5').tinyscrollbar();
	$('#scrollbar6').tinyscrollbar();
	$('#scrollbar7').tinyscrollbar();
	$('#scrollbar8').tinyscrollbar();
	$('#scrollbar9').tinyscrollbar();
	$('#scrollbar10').tinyscrollbar();
	$('#scrollbar11').tinyscrollbar();
	$('#scrollbar12').tinyscrollbar();
	$('#scrollbar13').tinyscrollbar();
	$('#scrollbar14').tinyscrollbar();
	$('#scrollbar15').tinyscrollbar();
	$('#scrollbar16').tinyscrollbar();
	$('#scrollbar17').tinyscrollbar();
	$('#scrollbar18').tinyscrollbar();
	$('#scrollbar19').tinyscrollbar();
	$('#scrollbar20').tinyscrollbar();
	$('#scrollbar21').tinyscrollbar();
	$('#scrollbar22').tinyscrollbar();
	$('#scrollbar23').tinyscrollbar();
	
	
}
else
{

$('div[id^="circle"]').css("background-image", "none");
$('div[id^="circle"]').css("background-color", "#E7E8F2");
$('div[id^="circle"]').css("height", "200px");
	
}


var $container = $('#portraitcontainer');

$('div[class="person"]').click(function(){ 
	
	$('html,body').animate({scrollTop: $('div[id="el_'+$(this).attr("id")+'"]').offset().top -54}, 750, function () {});
	
	$('div[id^="el_"]').attr("class", "element isotope-item");
	$('div[id="el_'+$(this).attr("id")+'"]').toggleClass('large');
	$('span[class="close"][id="'+$(this).attr("id")+'"]').show();
	$container.isotope('reLayout');
	
});



$('span[id="anmelden"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="anmeldung"]').offset().top - 160}, 750, function () {});
});


$('div[id="s0"],span[id="menu_global"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="global"]').offset().top - 160}, 750, function () {});
});

$('div[id="s1"],span[id="menu_programm"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="programm"]').offset().top - 160}, 750, function () {});
});

$('div[id="s2"],span[id="menu_anmeldung"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="anmeldung"]').offset().top - 160}, 750, function () {});
});

$('div[id="s3"],span[id="menu_historie"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="historie"]').offset().top - 160}, 750, function () {});
});

$('div[id="s4"],span[id="menu_archiv"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="archiv"]').offset().top - 160}, 750, function () {});
});



$('span[id="kontakt"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="kontakt_head"]').offset().top - 72}, 750, function () {});
});

$('span[id="presse"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="presse_head"]').offset().top - 72}, 750, function () {});
});

$('span[id="impressum"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="impressum_head"]').offset().top - 72}, 750, function () {});
});


$('img[id="logo_small"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="wrapper"]').offset().top -540}, 750, function () {});
});

$('span[class="icon icon-menu"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="wrapper"]').offset().top -36}, 750, function () {});
});

$('span[class="red"]').click(function(){ 
$('html,body').animate({scrollTop: $('div[id="kontakt_head"]').offset().top - 72}, 750, function () {});
});


$(window).scroll(function(){
update();
});


$(window).resize(function(){
update();
});


});
