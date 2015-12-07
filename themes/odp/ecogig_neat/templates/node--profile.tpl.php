<?php if ($teaser) : ?>
  <div class="profile">
    <?php if(!$empty_profile) : ?>
      <div class="pnl-profile-header">
        <?php if(!empty($content['field_photo'])): ?>
          <span class="profile-photo">
            <?php print render($content['field_photo']); ?>
          </span>
        <?php endif; ?>
        <div class="pnl-profile-name">
          <div class="profile-name">
            <?php print render($title); ?>
          </div>
          <div class="profile-org">
            <?php print render($content['field_organization']); ?>
          </div>
          <div class="profile-position">
            <?php print render($position_dept); ?>
          </div>
          <?php print render($content['field_website_url']); ?>
        </div>
      </div>
    <?php else: ?>
      This person's profile has not been filled out yet.
    <?php endif; ?>
  </div>
<?php else : ?>
<div class="profile">
  <div class="pnl-profile-header">
    <?php if(!empty($content['field_photo'])): ?>
      <span class="profile-photo">
        <?php print render($content['field_photo']); ?>
      </span>
    <?php endif; ?>
    <div class="pnl-profile-name">
      <div class="profile-name">
        <?php print render($title); ?>
      </div>
      <div class="profile-org">
        <?php print render($content['field_organization']); ?>
      </div>
      <div class="profile-position">
        <?php print render($position_dept); ?>
      </div>
      <?php print render($content['field_website_url']); ?>
    </div>
  </div>
  <div class="pnl-profile-body">
    <span class="panel profile-body-content">
      <div class="panel-header">
        Bio
      </div>
      <?php print render($content['body']); ?>
    </span>
    <span class="panel profile-contact-info">
      <div class="panel-header">
        Contact Information
      </div>
      <?php print render($content['field_email']); ?>

      <?php print render($content['field_profile_address']); ?>
      <?php print render($content['field_phone']); ?>

    </span>
  </div>
  <div class="panel pnl-publications">
    <div class="panel-header">
      Contributions
    </div>
    <?php print render($content['field_authored']); ?>
    <?php print render($content['field_datasets_owned']); ?>

  </div>
</div>
<?php endif; ?>
