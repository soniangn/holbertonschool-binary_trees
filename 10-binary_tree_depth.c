#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the root node
 *
 * Return: the depth of aa node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);


	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);

}
