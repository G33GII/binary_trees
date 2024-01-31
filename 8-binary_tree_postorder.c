#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs in-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *        The value in the node must be passed as a parameter to this function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Recursive call for left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursive call for right subtree */
	binary_tree_postorder(tree->right, func);

    /* Call func for the current node */
	func(tree->n);
}