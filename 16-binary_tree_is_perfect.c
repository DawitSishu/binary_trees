#include "binary_trees.h"

/**
* binary_tree_is_perfect - check if perfect
* @tree: binary tree
* Return: if perfect 1 else 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return (0);
if ((binary_tree_is_full(tree) == 1) &&
(binary_tree_balance(tree) == 0))
return (1);
return (0);
}

/**
* binary_tree_is_full - chekc if tree is full
* @tree: binary teee
* Return: if full 1 else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (!tree->left && !tree->right)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));
return (0);
}

/**
* binary_tree_balance - balance factor
* @tree: tree
* Return: factor
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
* binary_tree_height - height find
* @tree: tree
* Return: height or null
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
