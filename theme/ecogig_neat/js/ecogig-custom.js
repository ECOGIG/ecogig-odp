(function ($) {
  Drupal.behaviors.ecogigCustom = {
    attach: function (context, settings) {
	var checkRequired = function(elem){
          if(!$(elem).val()){
            $(elem).closest('.form-item').addClass('error-input');
          }
	  else{
	    $(elem).closest('.form-item').removeClass('error-input');
	  }
	};

	var checkRequiredCheckboxes = function(container){
          $(container).find('.form-required').each(function(){
            var checked = false;
            $(container).find('input[type=checkbox], input[type=radio]').each(function(){
              if($(this).is(':checked')){
                checked = true;
              }
            });

            if(!checked){
	      $(container).addClass('error-input');
	    }
	    else{
	      $(container).removeClass('error-input');
	    }
          });

	};

        $('.node-form.node-dataset-form .required').each(function(){
	  var elem = this;
	  checkRequired(elem);

	  $(elem).change(function(){
	    checkRequired(elem);
	  });

        });

	$('.form-type-checkboxes, .form-type-radios').each(function(){
	  var container = this;
	  checkRequiredCheckboxes(container);

	  $(container).find('.form-required').each(function(){
            var checked = false;
            $(container).find('input[type=checkbox], input[type=radio]').each(function(){
              $(this).change(function(){
                checkRequiredCheckboxes(container);
              });
	    });
	  });
 
	});

	$('#edit-field-complete-dataset-und').click(function(){
	  $('.collapsible.collapsed').each(function(){
	    Drupal.toggleFieldset(this);
	    $(this).children('.collapsible.collapsed').each(function(){
	      Drupal.toggleFieldset(this);
	    });
	  });
	});

     $('.page-reports-dataset-progress-report').ajaxComplete(function(event, xhr, settings) {
             $('#pnl-report-loading').hide();
     });
 
     $('#dataset-progress-report-filter').change(function(){
         $('#pnl-report-loading').show();
     
         var selected = $(this).val();
         var minDate = '2000-01-01';
         var maxDate = '2100-01-01';
 
         var minYear = 2000;
         var minMonth = 1;
         var minDay = 1;
 
         var maxYear = 2100;
         var maxMonth = 1;
         var maxDay = 1;
 
         var today = moment();
 
         if(selected === 'all'){
             minDate = moment('2000-01-01');
             maxDate = moment('2100-01-01');
         }
 
         if(selected === 'today'){
             minDate = today;
             maxDate = today;
         }
 
         if(selected === 'week'){
            minDate = moment().subtract(moment().day(), 'day');
            maxDate = moment(minDate).add(6, 'day');
         }
 
         if(selected === 'month'){
             minDate = moment().date(1);
             maxDate = moment().date(1).add(1, 'month').subtract(1, 'day');
         }
 
         if(selected === 'year'){
             minDate = moment().month(0).date(1);
             maxDate = moment().month(11).date(31);
         }
 
         $('.form-item-timestamp-min input').val(minDate.format('YYYY-MM-DD'));
         $('.form-item-timestamp-max input').val(maxDate.format('YYYY-MM-DD'));
 
         $('#pnl-dataset-progress-report .views-exposed-widget .form-submit').trigger('click');
     });


    }
  };
}(jQuery));

