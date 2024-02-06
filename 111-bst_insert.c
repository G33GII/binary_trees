#include "binary_trees.h"

/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: return a pointer to the created node, or NULL on failure
 *      If the address stored in tree is NULL, the created node must become the root node.
 *      If the value is already present in the tree, it must be ignored
 */
bst_t *bst_insert(bst_t **tree, int value)
{
    if (*tree == NULL)
    {
        *tree = binary_tree_node(NULL, value);
        if (*tree == NULL)
            return NULL;
        return (*tree);
    }

    if (value < (*tree)->n)
    {
        if ((*tree)->left == NULL)
        {
            (*tree)->left = binary_tree_node(*tree, value);
            if ((*tree)->left == NULL)
                return (NULL);
            return ((*tree)->left);
        }
        else
        {
            return (bst_insert(&((*tree)->left), value));
        }
    }
    else if (value > (*tree)->n)
    {
        if ((*tree)->right == NULL)
        {
            (*tree)->right = binary_tree_node(*tree, value);
            if ((*tree)->right == NULL)
                return (NULL);
            return ((*tree)->right);
        }
        else
        {
            return (bst_insert(&((*tree)->right), value));
        }
    }

    return (NULL);
}
