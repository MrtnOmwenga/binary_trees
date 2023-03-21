#include "binary_trees.h"

/**
 *binary_tree_insert_left- Inserts
 * node to left of parent node
 *
 *@parent: Parent node
 *@value: Value of node
 *
 *Return: New node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}

parent->left = new_node;

return (new_node);
}
