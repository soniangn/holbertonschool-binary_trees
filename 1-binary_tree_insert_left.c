#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the
 *                           left-child of another node
 * @parent: pointer to parent node of node to create
 * @value: value of node to create
 *
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_c = malloc(sizeof(binary_tree_t));

	if (!left_c || !parent)
		return (NULL);

	if (parent->left)
	{
		left_c->left = parent->left;
		left_c->left->parent = left_c;
	}
	else
		left_c->left = NULL;

	left_c->n = value;
	left_c->parent = parent;
	parent->left = left_c;
	left_c->right = NULL;

	return (left_c);

}
