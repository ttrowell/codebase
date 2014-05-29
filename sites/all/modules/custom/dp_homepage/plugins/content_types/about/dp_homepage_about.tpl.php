<div id="about">
  <h2>About</h2>
  <ul class="tab-menu">
    <li><a href="#our-approach" class="active">Our Approach</a></li>
    <li><a href="#key-staff">Key Staff</a></li>
    <li><a href="#company-bio">Company Bio</a></li>
    <li><a href="#partners">Partners</a></li>
  </ul>
  <div class="tab-panes">
    <div id="our-approach" class="tab-pane active">
      <?php print $our_approach_view; ?>
    </div>
    <div id="key-staff" class="tab-pane">
      <?php print $key_staff_view; ?>
      <div class="extra-content">
        <a href="#all-staff" class="button">See all staff &rsaquo;</a>
        <div id="all-staff" class="hidden-content">
          <div class="extra-content-title">About / All Staff</div>
          <?php print $all_staff_view; ?>
        </div>
      </div>
    </div>
    <div id="company-bio" class="tab-pane">
      <div class="company-bio-content">
        <?php print $company_bio; ?>
      </div>        
    </div>    
    <div id="partners" class="tab-pane">
      <?php print $partners_view; ?>
    </div>
  </div>
</div>
<div id="about-content" class="about-content hidden-content">
  <div class="our-approach-content">
    <?php print $our_approach_full ?>
  </div>

  <div class="key-staff-content">
    <?php print $key_staff_full ?>
  </div>

  <div class="partners-content">
    <?php print $partners_full ?>
  </div>
</div>
