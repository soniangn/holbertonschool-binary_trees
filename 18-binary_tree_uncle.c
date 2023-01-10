#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle of
 *
 * Return: the pointer to the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	else if (node->parent->parent->left
			&& (node->parent) != (node->parent->parent->left))
		return (node->parent->parent->left);
	else if (node->parent->parent->right
			&& (node->parent) != (node->parent->parent->right))
		return (node->parent->parent->right);
	else
		return (NULL);


}
