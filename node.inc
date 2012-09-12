<?php

/**
 * Returns the results of a node_view() for the specified node.
 *
 * @param $nid
 *   NID of the node we want to return.
 * @param $build_mode
 *   A build mode to view content as @see content_build_modes().
 * @return
 *   The view of the node.
 *
 * @see node_view()
 */
function services_view_resource_node_view($nid, $build_mode = 'services_view_resource') {
  if ($node = node_load($nid)) {
    $node->build_mode = $build_mode;
    return node_view($node, FALSE, FALSE, FALSE);
  }
  return services_error('Node nid '. $nid .' not found', 404);
}
