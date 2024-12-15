#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the tree. If the tree is NULL, return 0.
 *
 * Description: A leaf is a node with no children (both left and right poin
 * ters * are NULL). This function recursively counts the nodes with
 * at least 1 child in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes +  right_nodes);
}
