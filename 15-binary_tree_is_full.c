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
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if is full or 0 if is not.
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right_side, left_side;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	right_side = binary_tree_is_full(tree->right);
	left_side = binary_tree_is_full(tree->left);

	if (right_side == 0 || left_side == 0)
		return (0);

	return (1);
}
