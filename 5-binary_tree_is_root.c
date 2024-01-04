#include "binary_trees.h"

/**
* binary_tree_is_root - check rot
* @node: nodes
* Return:1 is root
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node && !node->parent)
return (1);
return (0);
}
