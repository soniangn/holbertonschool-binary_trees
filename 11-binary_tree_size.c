#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_size - entry point
 * Description: measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the tree. If tree is NULL, return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);

}
