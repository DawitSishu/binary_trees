#include "binary_trees.h"

/**
* binary_tree_balance - balace factor measure
* @tree: binry tree
* Return: balancer facoir
*/
int binary_tree_balance(const binary_tree_t *tree)
{
size_t lef = 0, rig = 0;

if (!tree)
return (0);

lef = binary_tree_height(tree->left);
rig = binary_tree_height(tree->right);
return (lef - rig);
}

/**
* binary_tree_height - finds height
* @tree: binry tree
* Return: size or null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lef = 0;
size_t rig = 0;

if (!tree)
return (0);

lef += 1 + binary_tree_height(tree->left);
rig += 1 + binary_tree_height(tree->right);
if (lef > rig)
return (lef);

return (rig);
}
