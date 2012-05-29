<?php

/**
 * Implementation of hook_user_default_roles().
 */
function asc_webform_roles_user_default_roles() {
  $roles = array();

  // Exported role: Form Manager
  $roles['Form Manager'] = array(
    'name' => 'Form Manager',
  );

  // Exported role: Form Viewer
  $roles['Form Viewer'] = array(
    'name' => 'Form Viewer',
  );

  return $roles;
}
