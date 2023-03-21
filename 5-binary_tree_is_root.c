#include "binary_trees.h"

/**
 *binary_tree_is_root- Checks whether node is root
 *
 *@node: Node to be checked
 *
 *Return: 1 if true else false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->parent == NULL)
{
return (1);
}
return (0);
}
