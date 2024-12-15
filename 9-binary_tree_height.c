#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If the tree is NULL, return 0.
 *
 * Description: The height of a tree is the number of edges on the longest path
 * from the root to a leaf. The height of an empty tree is 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		left_height = (1 + binary_tree_height(tree->left));
	}
	if (tree->right)
	{
		right_height = (1 + binary_tree_height(tree->right));
	}
	if (left_height > right_height)
	{
		return (left_height);
	}
	return (right_height);
}
