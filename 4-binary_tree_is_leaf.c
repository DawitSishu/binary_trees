#include "binary_trees.h"

/**
* binary_tree_is_leaf - xhekc if node is leaf
* @node: node
* Return:1 if leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node && !node->left && !node->right)
return (1);
return (0);
}
