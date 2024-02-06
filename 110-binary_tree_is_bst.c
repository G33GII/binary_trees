#include "binary_trees.h"

/**
 * is_bst_util - Utility function to check if a binary tree is a valid BST
 * @tree: pointer to the root node of the tree to check
 * @min: the minimum value the node can have
 * @max: the maximum value the node can have
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int is_bst_util(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (is_bst_util(tree->left, min, tree->n - 1) &&
			is_bst_util(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst -  function that checks if
 *      a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: return 1 if tree is a valid BST, and 0 otherwise.
 *          If tree is NULL, return 0
 * Properties of a Binary Search Tree:
 *  The left subtree of a node contains
 *          only nodes with values less than the node’s value
 *  The right subtree of a node contains
 *          only nodes with values greater than the node’s value
 *  The left and right subtree each must also be a binary search tree
 *  There must be no duplicate values
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_util(tree, INT_MIN, INT_MAX));
}
