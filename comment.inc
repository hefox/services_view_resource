<?php

/**
 * Returns the results of a node_view() for the specified node.
 *
 * @param $nid
 *   NID of the node we want to return.
 * @return
 *   The view or the node.
 *
 * @see node_load()
 */
function services_view_resource_comment_view($cid) {
  $comment = _comment_load($cid);
  if ($comment && ($node = node_load($comment->nid))) {
    return comment_render($node, $cid);
  }
  return services_error('Comment cid '. $cid .' not found', 404);
}