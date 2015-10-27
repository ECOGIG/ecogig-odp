<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>  
<span class='test-class' style='display:none;'></span>
  <div<?php print $content_attributes; ?>>      
    <?php if ($messages): ?>
      <div id="messages" class="grid-<?php print $columns; ?>"><?php print $messages; ?></div>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>
