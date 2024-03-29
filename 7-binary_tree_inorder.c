#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *        The value in the node must be passed as a parameter to this function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Recursive call for left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call func for the current node */
	func(tree->n);

	/* Recursive call for right subtree */
	binary_tree_inorder(tree->right, func);
}
