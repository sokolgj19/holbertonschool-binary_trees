#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node’s value.
 *
 * Description: The function calls func in the order:
 *              left subtree → right subtree → current node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
