(function ($) {
  Drupal.behaviors.ecogigReportsProfileContribs = {
    attach: function (context, settings) {

      $('#page-profile-contribs').ajaxComplete(function(event, xhr, settings) {
        if (event.target.id === 'page-profile-contribs') {
          $('.pnl-loading').hide();

	  $('#page-profile-contribs a').removeClass('disabled');
	  $('#pnl-contrib-data .view-content').show();
        }
      });


      if($('#page-profile-contribs').length > 0){
        $('.lnk-profile-title').click(function(e){
	  e.preventDefault();

          if(!$(this).hasClass('disabled')){

          $('.pnl-loading').show();
	  $('#pnl-contrib-data .view-content').hide();
	  $('#page-profile-contribs a').removeClass('active');
	  $('#page-profile-contribs td').removeClass('active');
	  $('#page-profile-contribs #pnl-contrib-profiles a').addClass('disabled');
  
	  $(this).addClass('active');

	  $(this).parent().parent().find('td').each(function(){
		$(this).addClass('active');
	  });
	  $(this).parent().parent().find('a').each(function(){
		$(this).addClass('active');
	  });

          var nid = String($(this).data('nid'));
	  if(nid && nid.length > 0){
	    $('#page-profile-contribs .views-exposed-form input[type=text]').val(nid);
	    $('#page-profile-contribs .views-exposed-form input[type=text]').first().trigger('change');
	  }
          }
        });
      }
    }
  };
}(jQuery));

