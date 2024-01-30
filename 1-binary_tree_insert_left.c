#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 * Return: Pointer to the newly inserted node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->left = parent->left;
	new_left->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_left;

	parent->left = new_left;

	return (new_left);
}
