#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The size of the node. If the tree is NULL, return 0.
 *
 * Description: The size of a node is the number of edges from the node to
 * the root. If the tree is empty or the node is NULL, the depth is 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t left_size;
        size_t right_size;

        if (tree == NULL)
        {
                return (0);
        }

        left_size = binary_tree_size(tree->left);
        right_size = binary_tree_size(tree->right);

        return ((left_size > right_size ? left_size : right_size) + 1);
}
