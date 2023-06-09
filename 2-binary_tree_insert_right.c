#include "binary_trees.h"

/**
 *binary_tree_insert_right- Inserts
 * node to right of parent node
 *
 *@parent: Parent node
 *@value: Value of node
 *
 *Return: New node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL || parent == NULL)
{
free(new_node);
return (NULL);
}

new_node->parent = parent;
new_node->n = value;
new_node->right = NULL;
new_node->left = NULL;

if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}

parent->right = new_node;

return (new_node);
}
