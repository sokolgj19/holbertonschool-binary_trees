#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t left_edges = 0;
	size_t right_edges = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left != NULL)
		left_edges = binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_edges = binary_tree_height(tree->right);

	if (left_edges > right_edges)
		height = left_edges + 1;
	else
		height = right_edges + 1;

	return (height);
}
