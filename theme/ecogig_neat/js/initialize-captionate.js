(function ($) {
  Drupal.behaviors.joyeCaptionate = {
    attach: function (context, settings) {
      
      $('img.caption').captionate();
    }
  };
}(jQuery));