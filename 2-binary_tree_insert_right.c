#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another
 * node.
 * @parent: Pointer to the node to insert the right-child.
 * @value: Value of the new node.
 * Return: Pointer to the new node.
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (right_node == NULL)
		return (NULL);

	right_node->right = parent->right;

	if (parent->right != NULL)
		right_node->right->parent = right_node;

	parent->right = right_node;

	return (right_node);
}
