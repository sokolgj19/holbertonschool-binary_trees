#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of internal nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_internal = 0;
	size_t right_internal = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
		left_internal = binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		right_internal = binary_tree_nodes(tree->right);

	return (left_internal + right_internal + 1);
}
