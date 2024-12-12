#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_inorder - Effectue un parcours en ordre dans un arbre binaire.
 * @tree: Pointeur vers la racine de l'arbre binaire.
 * @func: Pointeur vers la fonction à appliquer sur les valeurs des nœuds.
 *
 * Description: Cette fonction effectue un parcours en ordre (gauche, racine, droite)
 * sur l'arbre binaire et applique la fonction `func` à chaque valeur de nœud.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
