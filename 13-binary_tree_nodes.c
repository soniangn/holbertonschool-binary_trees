#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes node with at least
 *                     1 child in a binary tree
 * @tree: pointer to the root node
 *
 * Return: the numberr of nodes with childs
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nnb = 0;

	if (!tree)
		return (0);

	if (tree->left)
		nnb = binary_tree_nodes(tree->left);

	if (tree->right)
		nnb += binary_tree_nodes(tree->right);
	
	if (!tree->left && !tree->right)
		return (0);

	return (nnb + 1);

}
