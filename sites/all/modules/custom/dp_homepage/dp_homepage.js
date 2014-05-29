(function($) {

  // custom styles for select lists
  $.fn.extend({
    fancySelect: function() {
      $(this).addClass('fancy-select').wrap('<div class="fancy-select-box">');
      
      // style fancy select
      $('.fancy-select').each(function() {
        $(this).css({
          'z-index':10,
          'opacity':0,
          '-khtml-appearance':'none'
        });
        var title = $('option:selected',this).text();
        $(this).after('<span class="select">' + title + '</span>');
       
        //events
        $(this).keypress(function() {
          $(this).change();
        });
        $(this).change(function() {
            var val = $('option:selected',this).text();
            $(this).next().text(val);
        });
        $(this).focus(function() {
          $(this).next().addClass('active');
        });
        $(this).blur(function() {
          $(this).next().removeClass('active');
        });
        $(this).hover(function() {
          $(this).next().addClass('active');
        }, function() {
          $(this).next().removeClass('active');
        });
      });
    }
  });
  
  $.fn.extend({    
    menuSelect: function() {
      $(this).addClass('menu-select').wrap('<div class="menu-select-box">');
      
      // style menu select
      $('.menu-select').each(function() {
        $(this).css({
          'z-index':10,
          'opacity':0,
          '-khtml-appearance':'none'
        });
        $(this).after('<span class="menu-select-button"></span>');
        $(this).keypress(function() {
          $(this).change();
        });
      });      
    }
  });

  $(document).ready(function() {

    var ua = $.browser;
    var target = window.location.hash;
    var $root = $('html, body');
    var $page = $('#page');
    var $intro = $('#intro');
    var introHeight = $intro.outerHeight();
    var $menu = $('#menu');
    var once = false;
    
    setTimeout(function() {
      // Check for URL #hash
      if (target) {
        if (target.indexOf('node-') !== -1) {
          $('*[href^="' + target + '"]').trigger('click', function() {
            $.smoothScroll(target);  
          });
        }
        $(window).scroll();
      } else {
        var windowHeight = $(window).height();
        windowHeight -= $('#menu').outerHeight();
        windowHeight -= parseInt($intro.css('borderTopWidth'), 10); 
        windowHeight -= parseInt($intro.css('borderBottomWidth'), 10);
        $intro.css('height', windowHeight);
        /*$('#intro-animation').append('<div class="intro-banner"><img src="/sites/all/modules/custom/dp_homepage/plugins/content_types/intro/banner.png" height="200" width="500" /></div>');*/
      }
    }, 500);

    window.onorientationchange = function() {
      windowHeight = $(window).height();
      windowHeight -= $('#menu').outerHeight();
      windowHeight -= parseInt($intro.css('borderTopWidth'), 10); 
      windowHeight -= parseInt($intro.css('borderBottomWidth'), 10);
      $intro.css('height', windowHeight);      
    };


    // ScrollTo clone
    $.smoothScroll = function(t) {
      $root.stop().animate({
          scrollTop: $(t).offset().top - $menu.outerHeight()
      }, 500, 'linear', function() {
        if (ua.webkit || ua.opera || ua.msie) {
          window.location.hash = t; 
        } 
      });
    };
    
    // convert Views row class of "node-[nid]" to an @id
    $('.hidden-content *[class*="node-"]').each(function() {
      var classes = $(this).attr('class');
      var node = classes.split('node-');
      var nid = $(node).get(1);
      $(this).attr('id', 'node-' + nid).prepend('<a href="#" class="close">GO BACK</a>');
    });
    
    // extra-content
    $('.extra-content .hidden-content').each(function() {
      $(this).prepend('<a href="#" class="close">GO BACK</a>');
    });    

    // Scroll when menu item clicked
    $('a[href^="#"]', $menu).click(function() {
      var actonimgurl = 'http://ci31.actonsoftware.com/acton/bn/3807/visitor.gif?ts='+ new Date().getTime()+'&ref='+escape(document.referrer) +'&page='+escape(window.location.href);
      $('body').children('img').attr('src', actonimgurl);
      var href = $.attr(this, 'href');
      if (href !== '#services') {
        if (!once) {
          $menu.addClass('menu-fixed');
          $page.css('padding-top', $menu.outerHeight() + 'px');
          $intro.hide();
          $root.scrollTop(0);
          once = true;
        }
      }
      $.smoothScroll(href);
      $('a[href^="#"]', $menu).removeClass('active');
      $(this).addClass('active');
      if (ua.mozilla) {
        window.location.hash = href;        
      }
      return false;
    });
    
    // Open hidden content
    $('.button').click(function() {
      if (!once) {
        $menu.addClass('menu-fixed');
        $page.css('padding-top', $menu.outerHeight() + 'px');
        $intro.hide();
        $root.scrollTop(0);
        once = true;
      }
      var href = $.attr(this, 'href');
      $(href).slideDown('fast');
      $.smoothScroll(href);
      if (ua.mozilla) {
        window.location.hash = href;        
      }
      return false;      
    });
    
    // When window is resized
    $(window).resize(function(e) {
      if (Modernizr.touch) {
        e.preventDefault();
      } else {
        menuHeight = $menu.outerHeight();
        if (!once) {
          var windowHeightAdjust = $(window).height();
          windowHeightAdjust -= menuHeight;
          windowHeightAdjust -= parseInt($intro.css('borderTopWidth'), 10); 
          windowHeightAdjust -= parseInt($intro.css('borderBottomWidth'), 10);
          $intro.css('height', windowHeightAdjust);       
        } else {
          $page.css('padding-top', menuHeight + 'px');
          $.smoothScroll(window.location.hash);
        }
      }
    });
    
    // When user scrolls
    $(window).scroll(function() {
      if (!once) {
        if (($menu.offset().top - $(window).scrollTop()) <= 0) {
          $menu.addClass('menu-fixed');
          $page.css('padding-top', $menu.outerHeight() + 'px');
          $intro.hide();
          $root.scrollTop(0);
          if (target) {
            $('*[href^="' + target + '"]').trigger('click');
            target = null;
          }
          once = true;
        }
        $(window).resize();
      }
    });
    
    // Tabs
    $('.tab-menu a').click(function() {
      var section = $(this).parents('ul').parents('div[id]').get(0);
      $('.tab-menu a', section).removeClass('active');
      $(this).addClass('active');
      var href = $.attr(this, 'href');
      $('.tab-panes .tab-pane', section).removeClass('active');
      $(href).addClass('active');
      return false;  
    });
    
    // Close content
    $('.close').click(function() {
      var parent = $(this).parents('.hidden-content');
      var sibling = $(parent).siblings();
      if ($(parent).parents('.extra-content').length == 1) {
        sibling = $(parent).parents('.tab-panes').parents('div[id]');
      }
      var id = $(sibling).attr('id');
      var href = '#' + id;
      $(this).parent().hide();      
      $.smoothScroll(href);
      if (ua.mozilla) {
        window.location.hash = href;        
      }      
      return false;
    });

    $('#menu .mobile-nav').menuSelect();
    $('#contact .form-select').fancySelect();
    
    $('#menu h1').click(function() {
      window.location = "/";
    });
    
    $('#intro .animate').click(function() {
      $.smoothScroll("#services"); 
    });
    
    $('#contact').css('min-height', $(window).height());

    $('#contact-form').submit(function(e) {
      e.preventDefault();
      var formSerial = $(this).serialize();
      var paramArr = formSerial.split("&");
      paramStr = "";
      origStr = "";
      // iterate through collection to transform form name/value into key/value properties of a literal object string.
      $.each(paramArr, function(index) {
        // strip form builder additionals
        initial = this.split('=')[0].replace('form%5B', '');
        initial = initial.replace('%5D', '');
        paramStr += '"'+ initial + '":"' + this.split('=')[1] + '",';
        origStr += '"'+ this.split('=')[0] + '":"' + this.split('=')[1] + '",';
      }); 
      var params = eval("(" + "{"+paramStr.substring(0,(paramStr.length-1)).replace(/undefined/gi,"").replace(/%40/gi,"@")+"}" + ")");
      var origParams = eval("(" + "{"+origStr.substring(0,(origStr.length-1)).replace(/undefined/gi,"").replace(/%40/gi,"@")+"}" + ")");
      //console.log(paramArr);
      $.ajax({
        type: 'POST',
        url: '/contact_form_submit',
        data: params,
        dataType: 'json',
        success: function(val) {
        }
      });
    });

  });

  $(document).ajaxComplete(function(event, xhr, settings) {
    //console.log($.extend({}, event));
    // reinit after views ajax sorting
    //$('#contact .form-select').fancySelect();
    if (event.currentTarget.location.hash === '#contact') {
      alert('Thank you for reaching out to us, someone will get back to you shortly.');
      //$('#contact-form-message').html("<span id='contact-form-message-text'>Thank you for reaching out to us, someone will get back to you shortly.</span>");
      $("#contact-form")[0].reset()
    }
  });
  
})(jQuery);