#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 * Return: Pointer to the newly inserted node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);

	new_right->n = value;
	new_right->parent = parent;
	new_right->left = NULL;
	new_right->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_right;

	parent->right = new_right;

	return (new_right);
}
