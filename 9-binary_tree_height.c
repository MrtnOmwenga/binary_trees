#include "binary_trees.h"

/**
 *binary_tree_height- Finds binary tree height
 *
 *@tree: Tree to be checked
 *
 *Return: Tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
  
if (tree == NULL)
{
return (0);
}

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (left_height > right_height ? left_height : right_height);
}
