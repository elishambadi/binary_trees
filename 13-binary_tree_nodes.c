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
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the nodes.
 * Return: Number of nodes with at least 1 child in a binary tree.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_side, left_side;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	right_side = binary_tree_nodes(tree->right);
	left_side = binary_tree_nodes(tree->left);

	return (1 + right_side + left_side);
}
