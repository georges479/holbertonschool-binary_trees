#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the tree. If the tree is NULL, return 0.
 *
 * Description: A leaf is a node with no children (both left and right pointers
 * are NULL). This function recursively counts the leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves +  right_leaves);
}
