#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_is_root - entry point
 * Description: checks if a node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 * if node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
