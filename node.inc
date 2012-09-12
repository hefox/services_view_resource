<?php

/**
 * Returns the results of a node_view() for the specified node.
 *
 * @param $nid
 *   NID of the node we want to return.
 * @return
 *   Node object or FALSE if not found.
 *
 * @see node_load()
 */
function services_view_resource_node_view($nid) {
  echo $nid;
  die();
  if ($node = node_load($nid)) {
    echo node_view($node);
    die();
  }
  return services_error('Node nid '. $nid .' not found', 404);
}
