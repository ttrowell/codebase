<div id="menu">
  <h1><img alt="Double Prime" src="<?php print $logo; ?>" /></h1>
  <ul>
    <li class="first"><a href="#services">Services</a></li>
    <li><a href="#products">Products</a></li>
    <li><a href="#about">About</a></li>
    <li><a href="#case-studies">Case Studies</a></li>
    <li><a href="#news">News</a></li>
    <li class="last"><a href="#contact">Contact</a></li>
  </ul>
  <select class="mobile-nav" name="mobile-nav" onchange="window.location = this.options[this.selectedIndex].value;">
    <option selected="selected"></option>
    <option label="Services" value="#services">Services</option>
    <option label="Products" value="#products">Products</option>
    <option label="About" value="#about">About</option>
    <option label="Case Studies" value="#case-studies">Case Studies</option>
    <option label="News" value="#news">News</option>
    <option label="Contact" value="#contact">Contact</option>
  </select>
</div>