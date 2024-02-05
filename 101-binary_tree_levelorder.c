#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - function that goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 *          The value in the node must be passed as a parameter to this function.
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    int front = 0, rear = 0;
    binary_tree_t *current, **queue;

    if (tree == NULL || func == NULL)
        return;

    /* Create a queue to store tree nodes */
    queue = malloc(sizeof(binary_tree_t *) * 1024);
    if (queue == NULL)
        return;

    queue[rear++] = (binary_tree_t *)tree; /* Enqueue root */

    while (front < rear)
    {
        current = queue[front++];
        func(current->n);

        /* Enqueue left child */
        if (current->left != NULL)
            queue[rear++] = current->left;

        /* Enqueue right child */
        if (current->right != NULL)
            queue[rear++] = current->right;
    }

    free(queue);
}
