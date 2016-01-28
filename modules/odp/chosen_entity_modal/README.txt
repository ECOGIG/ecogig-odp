-- SUMMARY --

The Chosen Entity Modal module allows for modal-based creation of new entities when
using the excellent Chosen module on Entity Reference fields. The modal uses the
standard creation form for the referenced entity type. If the Uniqueness module is
enabled (not required), you also get some additional functionality to warn of possible
duplicate entity titles.

-- REQUIREMENTS --

Chosen (https://www.drupal.org/project/chosen)
Chaos Tool Suite (https://www.drupal.org/project/ctools)
Entity Reference (https://www.drupal.org/project/entityreference)

-- INSTALLATION --

* Install as usual, see http://drupal.org/node/895232 for further information.

-- CONFIGURATION --

* Add an entity reference field to your content type
* Enable Chosen for the field
  - On the field's settings page, select "Apply" from the "Apply Chosen to the select fields
    in this widget?" dropdown and save the settings.
* Enable modal-based creation
  - Open the field's settings again, select "Yes" from the "Allow modal-based creation
    of new content" dropdown and save the settings.

  Note that the modal will only appear on the content creation/edit form if the logged in user
  has access to create new entities of the field's type.

-- CUSTOMIZATION --

* This module adds a button to the content type's form that is triggered via JavaScript to refresh
  the Chosen-enabled list of options for the configured field. This button has two CSS classes applied,
  which can be used to hide or style the button:
    - btn-refresh-nodes
    - hidden

-- TROUBLESHOOTING --

* If the "Allow modal-based creation" option is disabled on the field's settings, check the following:

  - Is the "Apply Chosen to the select fields in this widget?" option set?

  - If the above option is also disabled, make sure that Chosen is configured properly. In addition to
    installing the Chosen module, you also need to download the Chosen JS (https://harvesthq.github.io/chosen/)
    and put it in sites/all/libraries/chosen.

-- CONTACT --

Current maintainers:
* Jeff Glenn (signaltrace) - https://www.drupal.org/u/signaltrace
