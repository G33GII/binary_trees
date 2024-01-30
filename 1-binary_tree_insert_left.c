#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_left, *tmp;

    if (parent == NULL)
        return (NULL);

    new_left = malloc(sizeof(binary_tree_t));
    if (new_left == NULL)
    {
		return (NULL);
	}

    new_left->n = value;
    new_left->parent = parent;
    new_left->left = NULL;
    new_left->right = NULL;

    if (parent->left != NULL)
    {
        tmp = parent->left;
        parent->left = new_left;
        new_left->left = tmp;
    }
    else
    {
        parent->left = new_left;
    }

    return (new_left);
}
