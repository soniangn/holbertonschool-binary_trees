#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find the sibling of
 *
 * Return: pointer to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	else if (node->parent->left && (node != node->parent->left))
		return (node->parent->left);
	else if (node->parent->right && (node != node->parent->right))
		return (node->parent->right);
	else
		return (NULL);

}
