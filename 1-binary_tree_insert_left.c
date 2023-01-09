#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_insert_left - entry point
 * Description: inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *tmp;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = value;
	node->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = node;
		node->left = NULL;
	}
	else
	{
		tmp = parent->left;
		parent->left = node;
		node->left = tmp;
		tmp->parent = node;
	}

	return (node);
}
