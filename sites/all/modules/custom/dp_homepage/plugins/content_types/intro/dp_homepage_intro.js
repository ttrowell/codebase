(function($) {
  $(document).ready(function() {

    $('#intro-animation').css('margin-top', '-' + ($('#intro-animation').outerHeight() / 2) + 'px');
    
    var $canvas = $('#intro-animation .animate');

    function animationQueue() {
    
      $canvas.delay(1000).animate({height: 0}, 500);
      
      $canvas.queue(function() {
        $(this).html('eCommerce <img src="/sites/all/modules/custom/dp_homepage/plugins/content_types/intro/commerce.png" />');
        $(this).removeClass('green');
        $(this).addClass('red');
        $(this).css('height', 'auto');
        $(this).hide();   
        $(this).dequeue();
      });
    
      $canvas.fadeIn(1000);
      
      $canvas.delay(1000).animate({height: 0}, 500);
      
      $canvas.queue(function() {
        $(this).html('Mobile <img src="/sites/all/modules/custom/dp_homepage/plugins/content_types/intro/mobile.png" />');
        $(this).removeClass('red');
        $(this).addClass('blue');
        $(this).css('height', 'auto');
        $(this).hide();   
        $(this).dequeue();
      });
    
      $canvas.fadeIn(1000);
      
      $canvas.delay(1000).animate({height: 0}, 500);
      
      $canvas.queue(function() {
        $(this).html('Staffing <img src="/sites/all/modules/custom/dp_homepage/plugins/content_types/intro/staff.png" />');
        $(this).removeClass('blue');
        $(this).addClass('green');
        $(this).css('height', 'auto');
        $(this).hide();   
        $(this).dequeue();
      });
      
      $canvas.fadeIn(1000);
      
      $canvas.delay(1000).animate({height: 0}, 500);
      
      $canvas.queue(function() {
        $(this).html('Content Management <img src="/sites/all/modules/custom/dp_homepage/plugins/content_types/intro/gear.png" />');
        $(this).removeClass('blue');
        $(this).addClass('green');
        $(this).css('height', 'auto');
        $(this).hide();   
        $(this).dequeue();
      });
      
      $canvas.fadeIn(1000, function() {
        animationQueue();
      });
    }
    
    window.setTimeout(animationQueue, 1000);
   
  });
})(jQuery)