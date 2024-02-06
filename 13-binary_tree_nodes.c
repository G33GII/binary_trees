#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 *                      in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	/* If the node has no children, return 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively count the nodes in the left and right subtrees */
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	/**
	 * Return the sum of nodes in the left and
	 * right subtrees plus 1 (for the current node)
	*/
	return (left_nodes + right_nodes + 1);
}
