#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If the tree is NULL, return 0.
 *
 * Description: The depth of a node is the number of edges from the node to 
 * the root. If the tree is empty or the node is NULL, the depth is 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
	{
		return (0);
	}

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	return ((left_depth > right_depth ? left_depth : right_depth) + 1);
}
