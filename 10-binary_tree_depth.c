#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL or root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t edges = 0;
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	edges = binary_tree_depth(tree->parent);
	depth = edges + 1;

	return (depth);
}
