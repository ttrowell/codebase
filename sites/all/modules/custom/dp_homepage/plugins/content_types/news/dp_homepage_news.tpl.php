<div id="news">
  <h2>News</h2>
  <ul class="tab-menu">
    <li><a href="#press" class="active">Press</a></li>
    <li><a href="#white-papers">White Papers</a></li>
    <li><a href="#articles">Articles</a></li>
  </ul>
  <div class="tab-panes">
    <div id="press" class="tab-pane active">
      <h3>Press</h3>
      <?php print $press_view; ?>
    </div>
    <div id="white-papers" class="tab-pane">
      <h3>White Papers</h3>
      <?php print $white_papers_view; ?>
    </div>
    <div id="articles" class="tab-pane">
      <h3>Articles</h3>
      <?php print $articles_view; ?>
    </div>
  </div>
</div>
<div id="news-content" class="news-content hidden-content">
  <div class="press-content">
    <?php print $press_full ?>
  </div>

  <div class="white-papers-content">
    <?php print $white_papers_full ?>
  </div>

  <div class="articles-content">
    <?php print $articles_full ?>
  </div>
</div>