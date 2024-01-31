#include "binary_trees.h"

/**
 * binary_tree_height - Performs in-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_height = 0;
	size_t right_height = 0;
    /*one output error*/
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
