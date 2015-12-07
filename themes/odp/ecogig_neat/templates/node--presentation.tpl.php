<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>

<div class="panel-display panel-2col clearfix">
  <div class="panel-col-first">
    <?php
      $block = block_load('odp_dashboard_blocks', 'contribution_nav');
      print drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
    ?>
    <?php if(!empty($node->current_revision_id) && $node->current_revision_id != $node->vid): ?>
      <?php if(user_access('revert revisions')): ?>
        <a class="btn btn-create-dataset" href="/node/<?php echo $node->nid ?>/revisions/<?php echo $node->vid ?>/revert">Revert</a>
      <?php endif; ?>
    <?php else: ?>
      <?php if(node_access('update', $node)): ?>
        <a class="btn btn-create-dataset" href="/node/<?php echo $node->nid ?>/edit">Edit Presentation</a>
      <?php endif; ?>
    <?php endif; ?>

  </div>
  <div class="panel-col-last pnl-dataset-col2">
    <div<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>
    </div>
  </div>
</div>

  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

  </div>
</article>
