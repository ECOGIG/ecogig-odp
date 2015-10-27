# Term With Date Range

## SUMMARY

This module implements a compound field that allows you to associate a taxonomy term with a date range. For example, if you had a taxonomy for positions within an organization (Marketing Manager, Product Manager, Business Development Manager, etc.) you could use the Term With Date Range field on a Profile to show that the owner of the profile held that position for a certain time period. 

## REQUIREMENTS 
* Date (https://www.drupal.org/project/date)

## INSTALLATION 
* Install as usual, see http://drupal.org/node/895232 for further information.

## CONFIGURATION 
* Add field of type "Term With Date Range" to a content type

* Select a vocabulary to associate with the field on the field settings page

* (Optional) Configure labels and styling
	-"Date From" and "Date To" both have options to allow for setting the label text, alignment, and CSS.

* (Optional) Configure date selection type
	-Currently allows for Date Select and Date Popup

* (Optional) Configure Date Format
	-Defaults to m/d/Y
