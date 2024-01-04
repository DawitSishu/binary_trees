#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);

/**
* binary_tree_uncle - find uncle
* @node: uncle
* Return: uncle pointer
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node)
return (NULL);
return (sibling(node->parent));
}

/**
* sibling - get sibling
* @node: sibling
* Return: node found
*/
binary_tree_t *sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}
