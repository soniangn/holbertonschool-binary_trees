#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves
 *                      of a binary tree
 * @tree: pointer to the root node
 *
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int lnb = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		lnb += 1;

	if (tree->left)
		lnb += binary_tree_leaves(tree->left);

	if (tree->right)
		lnb += binary_tree_leaves(tree->right);

	return (lnb);

}
