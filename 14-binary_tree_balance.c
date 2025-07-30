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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor. If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int balance;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);
	balance = left_height - right_height;

	return (balance);
}
