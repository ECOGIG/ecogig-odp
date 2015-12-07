(function ($) {
  Drupal.behaviors.ecogigCustom = {
    attach: function (context, settings) {
      var url = window.location.href;
      $('.pnl-content-type-actions a').each(function(){
        if(this.href && this.href == url){
          var container = $(this).parent().parent();

          if(container.hasClass('action-parent')){
            $(container).css('display', 'block');
            $(container).parent().addClass('active');

          }
          $(this).addClass('active');
        }
      });

      if(Drupal.settings.ecogig_neat){
        var generateContribution = function(nid, action){
          var url =  Drupal.settings.basePath + "odp/node/" + nid + "/generate-contribution";
          $.ajax({
            type: "POST",
            dataType: "json",
            url: url,
            async: false,
            data: {
                action: action,
            },
            dataType: "json",
            success: function(response){
              if(response){
                // A successful response should contain a few key properties
                if(response.type && response.type == 'success' && response.node){
                  // The updated Drupal node
                  var node = response.node;
                  if(node.field_ecogig_contribution_number.und){
                    var newNumber = parseInt(node.field_ecogig_contribution_number.und[0].value);
                    if(newNumber > 0){
                      $('#pnl-contribution-number').replaceWith('<span id="pnl-contribution-number">' + newNumber + '</span>');
                      $('#pnl-contribution-number-form input').replaceWith('<span>' + newNumber + '</span>');
                      $('#btn-generate-contribution').remove();

                    }
                    else{
                      if(newNumber == -1){
                        $('#pnl-contribution-number').replaceWith('<span id="pnl-contribution-number">Number Requested</span>');
                        $('#pnl-contribution-number-form input').replaceWith('<span>Number Requested</span>');
                        $('#btn-generate-contribution').remove();

                      }
                      else{
                        $('#pnl-contribution-number').replaceWith('<span id="pnl-contribution-number"></span>');
                        $('#pnl-contribution-number-form input').replaceWith('<span></span>');
                        $('#btn-generate-contribution').remove();

                      }
                    }
                  }
                  else{
                    $('#pnl-contribution-number').replaceWith('<span id="pnl-contribution-number"></span>');
                  }
                }
                if(response.type && response.type == 'error'){

                }
              }
            },
            error: function(request, status, error){

            }
          });
        };

        var isDataManager = Drupal.settings.ecogig_neat.is_data_manager;
        if(isDataManager){
          var updateNode = function(nid, fields){
            var url =  Drupal.settings.basePath + "odp/node/" + nid + "/update";
            $.ajax({
              type: "POST",
              dataType: "json",
              url: url,
              async: false,
              data: '&data=' + JSON.stringify(fields),
              dataType: "json",
              success: function(response){
                if(response){
                  // A successful response should contain a few key properties
                  if(response.type && response.type == 'success' && response.node){
                    // The updated Drupal node
                    var node = response.node;
                    window.location.href = window.location.href;
                  }
                  if(response.type && response.type == 'error'){

                  }
                }
              },
              error: function(request, status, error){
              }
            });
          };

          $(document).click(function (e)
          {
              $('.pnl-state').each(function(){
                var container = this;

                if(e.target.id != $(container).attr('id') && !$(container).has(e.target).length)
                {
                  $(container).find('.mode-edit').addClass('hidden');
                  //$(container).find('.mode-read').removeClass('hidden');
                  $(container).addClass('mode-read');
                  $(container).removeClass('mode-edit');

                }
            });

          });

          $('.pnl-state').click(function(){
            var clicked = this;
            $('.pnl-state').each(function(){
              var panel = this;
              if(clicked.id != panel.id){
                $(panel).find('.mode-edit').addClass('hidden');
                //$(panel).find('.mode-read').removeClass('hidden');
                $(panel).addClass('mode-read');
                $(panel).removeClass('mode-edit');


              }
            });
            //$(clicked).find('.mode-read').addClass('hidden');
            $(clicked).find('.mode-edit').removeClass('hidden');
            $(clicked).removeClass('mode-read');
            $(clicked).addClass('mode-edit');

          });

          $('.mode-edit select').change(function(){
            var parentForm = this.form;
            var newState = $(this).val();

            if(parentForm){
              var editField = $(parentForm).data('edit');
              var fields = {};
              var nid = Drupal.settings.ecogig_neat.currentNid;

              if(nid){
                fields[editField] = newState;
                updateNode(nid, fields);
              }
            }
          });
        }
      }

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

  $('#btn-generate-contribution').click(function(e){
    e.preventDefault();
    if(Drupal.settings.ecogig_neat.currentNid){
      var nid = Drupal.settings.ecogig_neat.currentNid;

      generateContribution(nid, 'generate');
    }
  });

  $('#btn-request-contribution').click(function(e){
    e.preventDefault();

    if(Drupal.settings.ecogig_neat.currentNid){
      var nid = Drupal.settings.ecogig_neat.currentNid;

      generateContribution(nid, 'request');
    }
  });

  $('#btn-deny-contribution').click(function(e){
    e.preventDefault();

    if(Drupal.settings.ecogig_neat.currentNid){
      var nid = Drupal.settings.ecogig_neat.currentNid;

      generateContribution(nid, 'deny');
    }
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
