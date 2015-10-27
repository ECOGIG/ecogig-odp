(function($) {
  var termJs = this;
  termJs.vals = [];

  function selectTerm(tid, fullName, targetField){
    if(tid && tid.length > 0){
      var targetElem;
      if(targetField && targetField.length > 0){targetElem = '#' + targetField;}
      if(fullName.length > 0){
        if(targetElem){
          $('select.chosen-processed').each(function (){
            var selected = "";
            var chosenElem = this;
            if (this.id.indexOf(targetField) >= 0){
              var isMultiple = $(chosenElem).attr('multiple');
              var vals = $(chosenElem).val();
              if(vals && vals.length > 0){
                termJs.vals = vals;
              }
              $(chosenElem).children('option').each(function(){
                if(String($(this).val()) === String(tid)){
                  var exists = false;
                  $(termJs.vals).each(function(){
                    if(String(this) === String(tid)){
                      exists = true;
                    }
                  });
                  if(!exists){
                    if(isMultiple){
                      termJs.vals.push(tid);
                      $(chosenElem).val(termJs.vals);
                      termJs.vals = [];
                    }
                    else{
                      $(chosenElem).val(tid);
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
  }

  $(document).ready(function(){
    $('#pnl-hdn-term-added input[type=hidden]').change(function(){
      var tid = String($(this).val());
      var fullName = $('#pnl-hdn-term-name-added input[type=hidden]').val();
      if(tid && tid.length > 0 && fullName && fullName.length > 0){
        var targetField = $('#pnl-hdn-term-field input[type=hidden]').val();
        selectTerm(tid, fullName, targetField);
      }
    });
  });

  Drupal.behaviors.chosen_taxonomy_modal = {
    attach: function (context) {
      $('.node-form').ajaxComplete(function(event, xhr, settings) {
        var nid = String($('#pnl-hdn-term-added input[type=hidden]').val());
        var fullName = $('#pnl-hdn-term-name-added input[type=hidden]').val();
        if(nid && nid.length > 0 && fullName && fullName.length > 0){
          var targetField = $('#pnl-hdn-term-field input[type=hidden]').val();
          selectTerm(nid, fullName, targetField);
        }
      });
    }
  };
})(jQuery);
