(function($) {
  var chosenEntity = this;
  chosenEntity.vals = [];
  chosenEntity.ckeditors = [];

  function setChosenWeight(){
    var selected = [];
    var rawVal = $('input[name="select_weights"]').val();
    if(rawVal && rawVal.length > 0){
      var weights = rawVal.split(":");
      var re = /([a-zA-Z_\d]+)([\[\d+,\d+\]]+)/;
      var count = weights.length;

      $(weights).each(function(i){
        if ((m = re.exec(this)) !== null) {
          if(m.length === 3){
            var fieldName = m[1];
            var fieldVals = m[2];

            var reStr = fieldName + "\\[[a-zA-Z]+\\](\\[(\\d)?\\])?";
            var fieldRe = new RegExp(reStr, "g");
            var selectElem = $("select[name^=" + fieldName + "]");
            var selectId = $(selectElem).attr('id');

            var fieldArr = fieldVals.replace(/\]\[/g, ":").replace(/\[/g, "").replace(/\]/g, "").split(":");
            $(fieldArr).each(function(){
                var vals = this.split(",");
                if(vals && vals.length === 2){
                  var nid = vals[0];
                  var weight = vals[1];
                  $(selectElem).children('option').each(function(index){
                    if($(this).val() === nid){
                      selected.push({
                        field : selectId,
                        nid : nid,
                        weight: weight,
                        selectIndex : index,
                      });
                    }
                  });
                }
            })
          }
        }
        if(!--count){
          $(selected).each(function(){
            changeElemPos(this);
          });
        }
      });
    }
  }

  function setSortable(){
    $('.chosen-sortable .chosen-choices').sortable({
      stop: function(event, ui){
        var targetElem = $(event.target).parent().parent().find('select.form-select.chosen-processed');
        if(targetElem.length > 0){
          changeChosenWeight(targetElem[0]);
        }
      },
    });

    $('.chosen-sortable.chosen-processed').change(function(evt, chosenEvent){
      changeChosenWeight(this, chosenEvent);
    });
  }

  function selectNode(nid, title, targetField, nodeType){
    if(nid && nid.length > 0){
      var targetElem;
      if(targetField && targetField.length > 0){targetElem = '#' + targetField;}
      if(title.length > 0){
        if(targetElem){
          $('select.chosen-processed').each(function (){
            var selected = "";
            var chosenElem = this;
            if (this.id.indexOf(targetField) >= 0){
              var isMultiple = $(chosenElem).attr('multiple');
              var vals = $(chosenElem).val();
              if(vals && vals.length > 0){
                chosenEntity.vals = vals;
              }
              $(chosenElem).children('option').each(function(){
                if(String($(this).val()) === String(nid)){
                  var exists = false;
                  $(chosenEntity.vals).each(function(){
                    if(String(this) === String(nid)){
                      exists = true;
                    }
                  });
                  if(!exists){
                    if(isMultiple){
                      chosenEntity.vals.push(nid);
                      $(chosenElem).val(chosenEntity.vals);
                      chosenEntity.vals = [];
                    }
                    else{
                      $(chosenElem).val(nid);
                    }
                    $(chosenElem).trigger("chosen:updated");
                  }
                }
              });
            }
          });
        }
      }

      if(nodeType == 'existing'){
        Drupal.ajax.prototype.commands.modal_dismiss();
      }
    }
    setSortable();
    setChosenWeight();
  }

  chosenEntity.setTitle = function(form, title){
      var titleField = $(form).find('.form-item-title input[type=text]').first();
      var firstName = $(form).find('.field-name-field-first-name input[type=text]').first().val();
      var middleName = $(form).find('.field-name-field-middle-name input[type=text]').first().val();
      var lastName = $(form).find('.field-name-field-last-name input[type=text]').first().val();

      var fullName = firstName;
      if(middleName.length > 0){fullName += ' ' + middleName;}
      if(lastName.length > 0){fullName += ' ' + lastName;}

      if(titleField){
        $(titleField).val(fullName);
        $(titleField).trigger('keyup');
      }
  };

  chosenEntity.bindHandlers = function(){
    $('#modalContent .field-name-field-first-name input[type=text], #modalContent .field-name-field-middle-name input[type=text], #modalContent .field-name-field-last-name input[type=text]').keyup(function(){
      var form = this.form;
      chosenEntity.setTitle(form);
    });


    $('#pnl-hdn-node-added input[type=hidden]').change(function(){
      var nid = String($(this).val());
      var title = $('#pnl-hdn-node-title-added input[type=hidden]').val();
      if(nid && nid.length > 0 && title && title.length > 0){
        var targetField = $('#pnl-hdn-node-field input[type=hidden]').val();
        selectNode(nid, title, targetField);
      }
    });


    var uniqueness;
    if (!uniqueness) {
      uniqueness = new Drupal.uniqueness(Drupal.settings.uniqueness['URL'], $('.uniqueness-dyn'));
    }

    //$('#edit-title').once('uniqueness', function() {
      //$(this).keyup(function() {
      $('.form-item-title input[type=text]').keyup(function() {
        input = this.value;
        if (input.length >= uniqueness.minCharacters) {
          uniqueness.search('title', input);
        }
        else if(input.length == 0 && !uniqueness.prependResults) {
          uniqueness.clear();
        }
      });
    $('#modalContent .uniqueness-dyn .item-list ul li a').click(function(e){
      e.preventDefault();
      var targetField = $('#pnl-hdn-target-field input[type=hidden]').val();

      var nid = String($(this).data('nid'));
      var title = $(this).text();
      selectNode(nid, title, targetField, 'existing');
    });

  };


  $(document).ready(function(){
    if(Drupal.ajax){
      // Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
      Drupal.ajax.prototype.commands.modal_dismiss = function(ajax, response, status)
      {
        $('#modalContent').find('input[type=text], textarea, select, input[type=radio], input[type=checkbox]').each(function(element){
          $(element).val('');
        })

        Drupal.CTools.Modal.dismiss();
      }
    }
  });

  Drupal.behaviors.chosen_entity_modal = {
    attach: function (context) {
      $('#modalContent').ajaxComplete(function(event, xhr, settings) {
        // If Uniqueness module is enabled, add some additional functionality to integrate with our modal
        if (typeof Drupal.uniqueness !== 'undefined' && $.isFunction(Drupal.uniqueness)) {
          chosenEntity.bindHandlers();
        }
      });

      $('form').ajaxComplete(function(event, xhr, settings){
        var nid = String($('#pnl-hdn-node-added input[type=hidden]').val());
        var title = $('#pnl-hdn-node-title-added input[type=hidden]').val();
        if(nid && nid.length > 0 && title && title.length > 0){
          var targetField = $('#pnl-hdn-node-field input[type=hidden]').val();
          selectNode(nid, title, targetField);
        }
      });
    }
  };
})(jQuery);
