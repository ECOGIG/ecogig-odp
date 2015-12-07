<div class="research-event">
  <div class="pnl-event-header">
    <?php if(!empty($content['field_photo'])): ?>
      <span class="photo">
        <?php print render($content['field_photo']); ?>
      </span>
    <?php endif; ?>
    <div class="pnl-event-name">
      <div class="event-name">
        <?php print render($name); ?>
      </div>
    </div>
  </div>

  <div class="panel pnl-event-basic-info">
    <div class="panel-header">
      Cruise Info
    </div>
    <?php print render($content['field_research_vessel']); ?>
    <?php print render($content['field_cruise_identification_name']); ?>
    <?php print render($content['field_expedition_location']); ?>
    <?php print render($content['field_dates_of_expedition']); ?>
    <?php print render($chief_scientist); ?>
    <?php print render($content['field_cruise_report']); ?>
  </div>
    <div class="panel pnl-event-details">
      <div class="panel-header">
        Cruise Objectives and Description
      </div>
      <?php print render($content['field_objectives']); ?>
      <?php print render($content['description']); ?>
    </div>

    <div class="panel">
      <div class="panel-header pnl-event-participants">
        Participants
      </div>
      <?php print render($participants); ?>
    </div>

    <?php if(!empty($datasets)) : ?>
      <div class="panel pnl-datasets">
        <div class="panel-header">
          Datasets
        </div>
        <?php print render($datasets); ?>
      </div>
    <?php endif; ?>

</div>
