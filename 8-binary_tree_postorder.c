#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_postorder - Performs a post-order traversal of a binary tree.
 * @tree: Pointer to the root of the binary tree.
 * @func: Pointer to a function to apply to the values of the nodes.
 *
 * Description: Traverses the binary tree in post-order (left, right, root)
 * and applies the function func on each node's value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
        {
                return;
        }

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
