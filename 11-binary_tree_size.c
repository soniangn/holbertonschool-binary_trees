#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: the size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		size = binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);

	return (size + 1);
}
