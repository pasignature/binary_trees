#include "binary_trees.h"

/**
 * binary_tree_depth - returns depht of tree
 * @tree: tree to retrace
 * Return: void
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;
	const binary_tree_t *tmp = tree;

	if (!tree)
		return (0);

	do {
		depth++;
		tmp = tmp->parent;
	} while (tmp);
	return (--depth);
}
