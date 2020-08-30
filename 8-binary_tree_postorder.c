#include "binary_trees.h"

/**
 * binary_tree_postorder - retrace tree with post-order
 * @tree: tree to retrace
 * @func: func to called from each node visited
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
