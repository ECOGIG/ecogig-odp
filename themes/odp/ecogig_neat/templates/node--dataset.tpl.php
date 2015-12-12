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

      <a class="btn btn-create-dataset" href="/node/<?php echo $node->nid ?>/workflow/history">View All Notes</a>
      <?php if(node_access('update', $node)): ?>
        <a class="btn btn-create-dataset" href="/node/<?php echo $node->nid ?>/revisions">Dataset Revisions</a>
      <?php endif; ?>
      <a class="btn btn-create-dataset" href="/dataset/<?php echo $node->nid ?>/xml">Export Metadata XML</a>
      <?php if(!empty($record_type_name)): ?>
        <div class="pnl-record-type" data-node="<?php echo $node->nid ?>">
          <h3 class="pnl-header">Dataset Record Type</h3>
          <div class="pnl-record-type-content">
            <span class="record-type-readonly">
              <h4 class="record-type-name"><?php print render($record_type_name); ?></h4>
              <div class="record-type-body"><?php echo $record_type_body ?></div>
            </span>
            <?php if(node_access('update', $node)): ?>
              <span class="btn btn-edit-record-type">Change</span>
              <select name="record-type" id="record-type-update" class="hidden">
                <?php foreach($record_type_options as $option){ ?>
                  <option value="<?php echo $option->tid ?>" <?php if($record_type_tid === $option->tid) :?>selected<?php endif;?>><?php echo $option->name ?></option>
                <?php }?>
              </select>
            <?php endif; ?>
          </div>
        </div>
      <?php endif; ?>
    <?php endif; ?>
  </div>
  <div class="panel-col-last pnl-dataset-col2">
    <div<?php print $content_attributes; ?>>
    <div class="pnl-workflow-states" id="pnl-workflow-states">
      <?php print render($workflow_states); ?>
    </div>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['group_dataset_workflow']);

        print render($content);
      ?>
    </div>
  </div>
</div>

  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>
