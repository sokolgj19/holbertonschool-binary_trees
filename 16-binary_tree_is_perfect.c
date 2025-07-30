#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

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

	if (tree == NULL)
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

/**
 * power - Calculates base raised to the power of exponent
 * @base: The base number
 * @exponent: The exponent
 *
 * Return: base ^ exponent
 */
int power(int base, int exponent)
{
	int result = 1;
	int i;

	for (i = exponent; i > 0; i--)
		result = result * base;

	return (result);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	if ((power(2, height) - 1) == (int)size)
		return (1);

	return (0);
}
