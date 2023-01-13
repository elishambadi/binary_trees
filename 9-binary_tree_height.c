#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a leaf, and 0 if is not.
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL  && node->left == NULL)
		return (1);

	return (0);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: The height of the tree or if tree is NULL returns 0.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_side = 0, left_side = 0;

	if (tree == NULL || binary_tree_is_leaf(tree))
	{
		return (0);
	}
	else
	{
		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);

		if (left_side >= right_side)
			return (left_side + 1);
		else
			return (right_side + 1);
	}
}
