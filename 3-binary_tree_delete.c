#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 * Return: Void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Recursively delete left subtree */
	binary_tree_delete(tree->left);
	/* Recursively delete right subtree */
	binary_tree_delete(tree->right);

	free(tree);
}
