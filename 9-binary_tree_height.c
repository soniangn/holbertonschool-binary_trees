#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_height - entry point
 * Description: measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree. If tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
		return (0);

	while (tree->left != NULL || tree->right != NULL)
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

		if (height_left < height_right)
			return (height_right + 1);
		else
			return (height_left + 1);
	}
	return (0);
}
