#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_delete - entry point
 * Description: deletes an entire binary tree
 * @tree: pointer to the root of the tree to delete
 * Return: 0
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    
    free(tree);
}