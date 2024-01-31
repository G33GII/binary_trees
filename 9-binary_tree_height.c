#include "binary_trees.h"

/**
 * binary_tree_height - Performs in-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
