#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: This function performs a post-order traversal
 * of the binary tree to ensure all child nodes are deleted
 * before freeing the root node. If the tree is NULL, the function
 * does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
