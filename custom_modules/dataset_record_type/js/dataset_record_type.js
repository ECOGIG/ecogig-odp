(function($){
  Drupal.behaviors.dataset_record_type = {
    attach:function(context, settings){
      $('.btn-edit-record-type').click(function(){
        $(this).hide();
        $('#record-type-update').show();
      });

      $('#record-type-update').change(function(){
        var recordType = $(this).val();
        var newName = $('#record-type-update option:selected').text();
        var nid = $('.pnl-record-type').data('node');
        if(nid && recordType){
          $.ajax({
              type: "POST",
              dataType: "json",
              url:  Drupal.settings.basePath + "node/" + nid + "/type/update",
              async: false,
              data: '&type=' + recordType,
              success: function(term){
                if(term){
                  $('.record-type-name').text(term.name);
                  $('.record-type-body').html(term.description);

                }
              },
          });

          $(this).hide();
          $('.btn-edit-record-type').show();
        }
      });
    }
  };
}(jQuery));
