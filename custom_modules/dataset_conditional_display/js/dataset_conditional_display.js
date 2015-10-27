(function ($) {
     Drupal.behaviors.dataset_conditional_display = {
         attach: function (context, settings) {
             var checkWorkflow = function(){
                 var origStatus = $('input[name="workflow_orig"]').val();
                 var currentStatus = $('select[name="field_dataset_workflow[und][0][workflow][workflow_sid]"]').val();
                 
                 if(origStatus !== currentStatus){
                     $('.pnl-workflow-alert').hide();
                 }
                 else{
                     $('.pnl-workflow-alert').show();
                 }
             };
             $(document).ready(function () {
 
                 checkWorkflow();
 
                 $('select[name="field_dataset_workflow[und][0][workflow][workflow_sid]"]').change(function(){
                     checkWorkflow();
                 });
             });
         }
     };
 }(jQuery));
