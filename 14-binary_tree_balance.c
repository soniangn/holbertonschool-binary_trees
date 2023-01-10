#include "binary_trees.h"

/**
 * binary_tree_height - mesures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lh = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rh = binary_tree_height(tree->right) + 1;

	if (lh < rh)
		return (rh);
	else
		return (lh);

}

/**
 * binary_tree_balance - measures the balance factor of
 *                       a binary tree
 * @tree: pointer to the root node
 *
 * Return: the balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bfleft = 0, bfright = 0;

	if (!tree)
		return (0);

	if (tree->left)
		bfleft = 1 + binary_tree_height(tree->left);

	if (tree->right)
		bfright = 1 + binary_tree_height(tree->right);

	return (bfleft - bfright);

}
