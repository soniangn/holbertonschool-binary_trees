#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 *                            right-child of another node
 * @parent: pointer to parent node of node to create
 * @value: value of node to create
 *
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_c = malloc(sizeof(binary_tree_t));

	if (!right_c || !parent)
		return (NULL);

	if (parent->right)
	{
		right_c->right = parent->right;
		right_c->right->parent = right_c;
	}
	else
		right_c->right = NULL;

	right_c->n = value;
	right_c->parent = parent;
	parent->right = right_c;
	right_c->left = NULL;

	return (right_c);

}
