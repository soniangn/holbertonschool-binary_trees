#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_depth - entry point
 * Description: measures the depth of a node
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: the depth of a node. If tree is NULL, return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *tmp;

	if (tree == NULL)
		return (0);

	tmp = tree->parent;

	while (tmp != NULL)
	{
		tmp = tmp->parent;
		depth++;
	}

	return (depth);
}
