(function ($) {
  Drupal.behaviors.ecogigCustom = {
    attach: function (context, settings) {
      var url = window.location.href;

      var enableForm = function(form){
        $.each(form.elements, function(i, element){
          element.readonly = false;
          element.disabled = false;
        });
      };

      var disableForm = function(form){
        $.each(form.elements, function(i, element){
          element.readonly = true;
          element.disabled = 'disabled';
        });
      };

      var bindWorkflowHandlers = function(){
        $('.modal-link-workflow').each(function(){
          var obj = this;
          var nid = $(obj).data('nid');
          var field = $(obj).data('field');
          var url = '/node/' + nid + '/workflow/history/' + field + '/nojs/5';
          $(obj).click(Drupal.CTools.Modal.clickAjaxLink);
          var element_settings = {};
          element_settings.url = url;
          element_settings.event = 'click';
          var base = url;
          Drupal.ajax[base] = new Drupal.ajax(base, obj, element_settings);
          $(obj).addClass('modal-trigger-processed');
        })
        $('.mode-edit select').change(function(){
          var parentForm = this.form;
          var oldState = $(this).data('original-sid');
          var newState = $(this).val();

          if(parentForm){
            if(oldState != newState){
              $(parentForm).find('.workflow-update').show();
            }
            else{
              $(parentForm).find('.workflow-update').hide();

            }
          }
        });

        $('.mode-edit button.workflow-update').click(function(e){
          e.preventDefault();
          $('#pnl-workflow-messages').hide();
          if(!$(this).hasClass('disabled')){

            var parentForm = this.form;

            if(parentForm){
              $(this).text('Updating...');
              disableForm(parentForm);
              var ddlStates = $(parentForm).find('select').first();
              var newState = $(ddlStates).val();

              var editField = $(parentForm).data('edit');
              var fields = {};
              var nid = Drupal.settings.ecogig_neat.currentNid;
              var commentField = $(parentForm).find('textarea').first();
              var comment = $(commentField).val();
              if(comment){
                if (comment.indexOf('&') > -1)
                {
                  var searchStr = "&";
                  var replaceStr = "%26";
                  var re = new RegExp(searchStr, "g");
                  comment = comment.replace(re, replaceStr);
                }
                fields['workflow_comment'] = {
                  comment: comment,
                  sid: newState,
                }
              }

              if(nid){
                fields[editField] = newState;

                updateNode(nid, fields, parentForm);
              }
            }
          }
        });
      };

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
          var updateNode = function(nid, fields, parentForm){
            var updateType = 'workflow';
            var url =  Drupal.settings.basePath + "odp/node/" + nid + "/update/" + updateType;
            $.ajax({
              type: "POST",
              dataType: "json",
              url: url,
              async: true,
              data: '&data=' + JSON.stringify(fields),
              dataType: "json",
              success: function(response){
                if(response){
                  // A successful response should contain a few key properties
                  if(response.type && response.type == 'success' && response.node){
                    // The updated Drupal node
                    var node = response.node;
                    if(response.html){
                      $('#pnl-workflow-states').html(response.html);
                      bindWorkflowHandlers();
                    }
                    //window.location.href = window.location.href;
                  }
                  if(response.type && response.type == 'error'){
                    $('.mode-edit button.workflow-update').text('Update');
                    enableForm(parentForm);
                    if(response.errors){
                      $('#pnl-workflow-messages').show().removeClass('hidden');
                      var errors = '';
                      $.each(response.errors, function(i, e){
                        if(e.message){
                          errors += e.message + "<br/>";
                        }
                      });
                      $('#pnl-workflow-messages').html(errors);
                    }
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
          bindWorkflowHandlers();

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
