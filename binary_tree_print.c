#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree in pre-order traversal
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    printf("Value: %d\n", tree->n);
    binary_tree_print(tree->left);
    binary_tree_print(tree->right);
}
