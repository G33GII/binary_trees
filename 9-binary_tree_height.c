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

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (max(left_height, right_height) + 1);
}

/**
 * max - returns the max of two numbers
 * @a: first number
 * @b: second number
 * Return: max
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
