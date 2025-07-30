#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Size (number of nodes), or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_nodes = 0;
	size_t left_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_nodes = binary_tree_size(tree->left);

	if (tree->right != NULL)
		right_nodes = binary_tree_size(tree->right);

	return (right_nodes + left_nodes + 1);
}
