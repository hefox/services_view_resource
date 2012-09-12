<?php

/**
 * Returns the results of a user_view() for the specified user.
 *
 * @param $uid
 *   UId of the user we want to view.
 * @return
 *   The view or the user.
 *
 * @see user_view()
 */
function services_view_resource_user_view($uid) {
  $account = user_load($uid);
  if ($account) {
    return user_view($account);
  }
  return services_error('User cid '. $uid .' not found', 404);
}