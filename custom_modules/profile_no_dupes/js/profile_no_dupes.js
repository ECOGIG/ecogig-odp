(function($) {

  var profileJs = this;
  profileJs.vals = [];

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

  function changeElemPos(item){
    var choices = $('#' + item.field).next('.chosen-container').children('.chosen-choices').first();
    var choiceContainers = $(choices).children('.search-choice');
    $(choiceContainers).each(function(index){
      var choiceContainer = this;
      var choiceSpan = $(this).children('span').first();
      var choice = $(this).children('a').first();

      if(parseInt($(choice).data('option-array-index')) === parseInt(item.selectIndex)){
        var newIndex = item.weight - 1;
        if(newIndex < 0){newIndex = 0;}
        if(newIndex < index){
          $(choiceContainer).insertBefore(choiceContainers[newIndex]);
        }
        if(newIndex > index){
          $(choiceContainer).insertAfter(choiceContainers[newIndex]);
        }
      }
    })
  }

  function changeChosenWeight(targetElem, chosenEvent){
    var removeNid = '';
    if(chosenEvent && chosenEvent.deselected){
      removeNid = chosenEvent.deselected;
    }

    var choices = $(targetElem).parent().find('.chosen-choices').first();
    var weight = '';
    if(choices.length > 0){
      $(choices).children('.search-choice').each(function(index){
        $(this).children('a').each(function(){
          var optionIndex = parseInt($(this).data('option-array-index'));
          $(targetElem).children('option').each(function(arrIndex){
            var nid;
            if(arrIndex === optionIndex){
                nid = $(this).val();
                if(nid !== removeNid){
                  weight += "[" + nid + "," + (index + 1) + "]";
                }
            }
          });
        });
      });

    }

    if(targetElem && targetElem.name){
      var name = targetElem.name.replace(/\[[a-zA-Z]+\](\[(\d)?\])?/, '');
      if(weight.length > 0){
        weight = name + weight + ":";
      }

      var reStr = name + "(\\[\\d+,\\d+\\])*:";
      var re = new RegExp(reStr, "g");
      var currentVal = $('input[name="select_weights"]').val();
      var newVal;
      var m;

      if (re.test(currentVal)) {
        $('input[name="select_weights"]').val(currentVal.replace(re, weight));
      }
      else{
        newVal = currentVal + weight;
        $('input[name="select_weights"]').val(newVal);
      }
    }

  }

  function selectProfile(nid, fullName, targetField){
    if(nid && nid.length > 0){
      var targetElem;
      if(targetField && targetField.length > 0){targetElem = '#' + targetField;}
      if(fullName.length > 0){
        var nameWithNid = fullName + ' (' + nid + ')';
        if(targetElem){

          $('select.chosen-processed').each(function (){
            var selected = "";
            var chosenElem = this;
            if (this.id.indexOf(targetField) >= 0){
              var isMultiple = $(chosenElem).attr('multiple');

              var vals = $(chosenElem).val();
              if(vals && vals.length > 0){
                profileJs.vals = vals;
              }

              $(this).children('option').each(function(){
                if(String($(this).val()) === String(nid)){
                  var exists = false;
                  $(profileJs.vals).each(function(){
                    if(String(this) === String(nid)){
                      exists = true;
                    }
                  });
                  if(!exists){
                    if(isMultiple){
                      profileJs.vals.push(nid);
                      $(chosenElem).val(profileJs.vals);
                      profileJs.vals = [];

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
    }
    setSortable();
    setChosenWeight();
  }

  $(document).ready(function(){


    setChosenWeight();
    setSortable();

    $('#pnl-hdn-profile-added input[type=hidden]').change(function(){
      var nid = String($(this).val());
      var fullName = $('#pnl-hdn-profile-name-added input[type=hidden]').val();
      if(nid && nid.length > 0 && fullName && fullName.length > 0){
        var targetField = $('#pnl-hdn-profile-field input[type=hidden]').val();

        selectProfile(nid, fullName, targetField);
      }
    });
  });

  Drupal.behaviors.profile_no_dupes = {
    attach: function (context) {
      $('.node-form').ajaxComplete(function(event, xhr, settings) {
        var nid = String($('#pnl-hdn-profile-added input[type=hidden]').val());
        var fullName = $('#pnl-hdn-profile-name-added input[type=hidden]').val();
        if(nid && nid.length > 0 && fullName && fullName.length > 0){
          var targetField = $('#pnl-hdn-profile-field input[type=hidden]').val();

          selectProfile(nid, fullName, targetField);
        }
      });
    }
  };

})(jQuery);
