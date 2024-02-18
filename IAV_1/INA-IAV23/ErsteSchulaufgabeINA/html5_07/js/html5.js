		$(function(){
			$('.elements td').click(function(){
				var self = $(this).hasClass('active');
				$('.active .info').fadeOut();
				$('.active').removeClass('active');
				if (!self) {
					$(this).find('.info').fadeIn();
					$(this).addClass('active');
				}
			});
			$('.elements a').click(function(event){
				window.open(event.target.href, 'table');
				return false;
			});
		})
