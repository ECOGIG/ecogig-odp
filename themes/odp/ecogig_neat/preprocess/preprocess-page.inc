<?php

function ecogig_neat_alpha_preprocess_page(&$vars) {
  //krumo($vars);
  
  // take the preface_first and preface_second regions, and STUFF them inside the 
  // preface_main region, giving it the stacked sub-region look  
  $preface_first = isset($vars['page']['content']['preface']['preface_first']) ? $vars['page']['content']['preface']['preface_first'] : array();
  $preface_second = isset($vars['page']['content']['preface']['preface_second']) ? $vars['page']['content']['preface']['preface_second'] : array();
  // update the weights, so we can be sure they sort to the bottom
  $preface_first['#weight'] = 999;
  $preface_second['#weight'] = 1000;
  // assign them to the preface_main region
  $vars['page']['content']['preface']['preface_main']['preface_first'] = $preface_first;
  $vars['page']['content']['preface']['preface_main']['preface_second'] = $preface_second;
  // delete the original implementation of these regions
  unset($vars['page']['content']['preface']['preface_first']);
  unset($vars['page']['content']['preface']['preface_second']);

}