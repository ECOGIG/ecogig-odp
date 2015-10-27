# Chosen Taxonomy Modal

## SUMMARY

When using Chosen (https://www.drupal.org/project/chosen) for taxonomy term reference select elements, this module adds an additional setting to the Chosen-enabled field that allows users to create new taxonomy terms on the fly via a CTools modal.

## REQUIREMENTS 
* Chosen (https://www.drupal.org/project/chosen)
* CTools (https://www.drupal.org/project/ctools)
* Taxonomy Access Fix (https://www.drupal.org/project/taxonomy_access_fix)
* jQuery

## INSTALLATION 
* Install as usual, see http://drupal.org/node/895232 for further information.

## CONFIGURATION 
* Grant "add terms in <taxonomy>" permissions to the appropriate user roles
	- This module uses the "add terms in" permission to determine whether or not a user is allowed to create terms.

* Enable "Apply Chosen to the select fields in this widget" setting on field configuration.
	- Fields have to explicitly be defined as Chosen-enabled at the field settings level to enable the taxonomy creation option.

* Enable "Allow modal-based creation of new taxonomy terms" setting on field configuration.

## USAGE 
* Once the field is configured as listed above, navigate to the content creation/edit page for a content type containing your field. Underneath the Chosen-enabled select element (specifically underneath the #description, if configured) you should see "Don't see the item you're looking for? Add new <voabulary name>".
