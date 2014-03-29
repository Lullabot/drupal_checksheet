# Checksheet

Checks a spreadsheet of content type/fields against the site's current configuration.

## Installation
Download https://github.com/nuovo/spreadsheet-reader and place into a folder named spreadsheet-reader (e.g. sites/all/modules/checksheet/spreadsheet-reader/SpreadsheetReader.php

## Drush Commands
drush cta

## Spreadsheet Structure
Checksheet expects the spreadheet to follow a relatively strict structure.

* Each entity will be defined in its own individual sheet.
* Within each entity's sheet, the entity's name should be listed in the first cell of the first row of the sheet (A1).
* The entity type should be listed in the first cell of the second row of the sheet (A2).

