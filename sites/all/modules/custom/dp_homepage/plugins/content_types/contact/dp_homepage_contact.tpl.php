<?php
  $form = drupal_get_form('contact_form'); 
?>
<div id="contact">
  <h2>Contact Us</h2>
  <p>Whether you're looking to work with us or for us, we'd love to hear from you!</p>

  <div itemscope itemtype="http://schema.org/Organization">
    <div class="contact-info">
      <h3>Get in touch!</h3>
       <span itemprop="telephone"><h4><?php if(isset($content['phone_number'])) : ?><?php print($content['phone_number']);  ?><?php endif; ?></h4></span>
      <div class="email">
        <strong>Email:</strong> 
		<span itemprop="email">
		<a href="mailto:info@doubleprime.com">
		<?php if(isset($content['email_address'])) : ?>
		  <?php print($content['email_address']); ?>
		<?php endif; ?>
		</a>
		</span>
      </div>
      <div class="address">
        <span itemprop="name">
		<div class="name">
		<strong>
		<?php if(isset($content['company_name'])) : ?>
		  <?php print($content['company_name']); ?>
		<?php endif; ?>
		</strong>
		</div>
		</span>	
	    <div itemscope itemtype="http://schema.org/PostalAddress">
          <span itemprop="streetAddress">
		  <div class="street">
		  <?php if(isset($content['mailing_address'])) : ?>
		  <?php print ($content['mailing_address']); ?>
		  <?php endif; ?>
		  </div>
		  </span>
          <span itemprop="addressLocality">
		  <div class="locale">
		  <?php if(isset($content['city_state_zip'])) : ?>
		    <?php print ($content['city_state_zip']);  ?>
		  <?php endif; ?>
		  </div>
		  </span>
	    </div>
      </div>
    </div>
  </div>
  <?php print drupal_render($form); ?>
  <div class="footer">
    <div class="copyright">
      &copy; <?php echo strftime("%Y"); ?> Double Prime / All Rights Reserved  <?php if(!empty($content['privacy_page'])): ?>/ <a href="<?php print($content['privacy_page']); ?>" class="button">Privacy</a><?php endif; ?><?php if(!empty($content['legal_page'])): ?> / <a href="<?php print($content['legal_page']); ?>" class="button">Legal</a><?php endif; ?>
    </div>
    <div class="social">
      <?php if(!empty($content['facebook_url'])): ?><a class="facebook" href="<?php print($content['facebook_url']); ?>" target="_blank">Facebook</a><?php endif; ?><?php if(!empty($content['twitter_url'])): ?><a class="twitter" href="<?php print($content['twitter_url']); ?>" target="_blank">Twitter</a><?php endif; ?><?php if(!empty($content['linkedin_url'])): ?> <a class="linkedin" href="<?php print($content['linkedin_url']); ?>" target="_blank">LinkedIn</a><?php endif; ?>
    </div>
  </div>
</div>
<div id="contact-content" class="contact-content hidden-content">
  <?php print $full; ?>
</div>
