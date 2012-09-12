<?php

/**
 * Returns the results of a comment_render() for the specified comment.
 *
 * @param $cid
 *   CID of the comment we want to return.
 * @return
 *   The view of the comment.
 *
 * @see comment_render()
 */
function services_view_resource_comment_view($cid) {
  $comment = _comment_load($cid);
  if ($comment && ($node = node_load($comment->nid))) {
    return comment_render($node, $cid);
  }
  return services_error('Comment cid '. $cid .' not found', 404);
}