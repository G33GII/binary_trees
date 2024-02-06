#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t **queue, *current;
	int front, flag, rear;

	if (tree == NULL)
		return (0);

	/* Create a queue to store tree nodes */
	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return (0);

	front = 0;
	rear = 0;
	flag = 0;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		current = queue[front++];

		/* If we encountered a NULL node, all subsequent nodes should also be NULL */
		if (current == NULL)
			flag = 1;
		else
		{
			/* If a NULL node was encountered before and we encounter a non-NULL node */
			if (flag == 1)
			{
				free(queue);
				return (0);
			}

			queue[rear++] = current->left;
			queue[rear++] = current->right;
		}
	}

	free(queue);
	return (1);
}
