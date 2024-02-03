#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: root node of the tree to count the number of leaves
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t left_leaves, right_leaves;

    if (tree == NULL)
        return (0);

    /* If the node is a leaf, return 1 */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* Recursively count the leaves in the left and right subtrees */
    left_leaves = binary_tree_leaves(tree->left);
    right_leaves = binary_tree_leaves(tree->right);

    /* Return the sum of leaves in the left and right subtrees */
    return (left_leaves + right_leaves);
}
