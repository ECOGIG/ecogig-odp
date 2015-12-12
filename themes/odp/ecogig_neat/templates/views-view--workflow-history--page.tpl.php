<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>

<div class="panel-display panel-2col clearfix">
  <div class="panel-col-first">
    <?php
      $block = block_load('odp_dashboard_blocks', 'dataset_nav');
      print drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
    ?>

    <?php if(!empty($node->current_revision_id) && $node->current_revision_id != $node->vid): ?>
      <?php if(user_access('revert revisions')): ?>
        <a class="btn btn-create-dataset" href="/node/<?php echo $node->nid ?>/revisions/<?php echo $node->vid ?>/revert">Revert</a>
      <?php endif; ?>
    <?php else: ?>
      <?php if(node_access('update', $node)): ?>
        <a class="btn btn-create-dataset" href="/node/<?php echo $node->nid ?>/edit">Edit Dataset</a>
      <?php endif; ?>

        <a class="btn btn-create-dataset active" href="/node/<?php echo $node->nid ?>/workflow/history">View All Notes</a>
      <?php if(node_access('update', $node)): ?>
        <a class="btn btn-create-dataset" href="/node/<?php echo $node->nid ?>/revisions">Dataset Revisions</a>
      <?php endif; ?>
      <a class="btn btn-create-dataset" href="/dataset/<?php echo $node->nid ?>/xml">Export Metadata XML</a>
    <?php endif; ?>
  </div>
  <div class="panel-col-last pnl-dataset-col2">
    <div class="<?php print $classes; ?>">
      <a class="btn btn-back" href="/node/<?php echo $node->nid ?>">< Back to Dataset</a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <?php print $title; ?>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($header): ?>
        <div class="view-header">
          <?php print $header; ?>
        </div>
      <?php endif; ?>

      <?php if ($exposed): ?>
        <div class="view-filters">
          <?php print $exposed; ?>
        </div>
      <?php endif; ?>

      <?php if ($attachment_before): ?>
        <div class="attachment attachment-before">
          <?php print $attachment_before; ?>
        </div>
      <?php endif; ?>

      <?php if ($rows): ?>
        <div class="view-content">
          <?php print $rows; ?>
        </div>
      <?php elseif ($empty): ?>
        <div class="view-empty">
          <?php print $empty; ?>
        </div>
      <?php endif; ?>

      <?php if ($pager): ?>
        <?php print $pager; ?>
      <?php endif; ?>

      <?php if ($attachment_after): ?>
        <div class="attachment attachment-after">
          <?php print $attachment_after; ?>
        </div>
      <?php endif; ?>

      <?php if ($more): ?>
        <?php print $more; ?>
      <?php endif; ?>

      <?php if ($footer): ?>
        <div class="view-footer">
          <?php print $footer; ?>
        </div>
      <?php endif; ?>

      <?php if ($feed_icon): ?>
        <div class="feed-icon">
          <?php print $feed_icon; ?>
        </div>
      <?php endif; ?>

    </div>

  </div>
</div>
