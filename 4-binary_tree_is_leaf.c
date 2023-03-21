#include "binary_trees.h"

/**
 *binary_tree_is_leaf- Checks if node is leaf
 *
 *@node: Node to be checked
 *
 *Return: 0 id false, 1 if true
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

if (node->left != NULL || node->right != NULL)
{
return (0);
}

return (1);
}
