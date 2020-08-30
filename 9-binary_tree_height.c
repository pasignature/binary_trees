#include "binary_trees.h"

/**
 * binary_tree_height - returns the tree height
 * @tree: tree to retrace
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_height(tree, 0));
}

/**
 * find_height - returns the tree height
 * @tree: tree to retrace
 * @height: height count
 * Return: height
 */

size_t find_height(const binary_tree_t *tree, int height)
{
	int lh, rh;

	if (!tree)
		return (--height);
	height++;
	lh = find_height(tree->left, height);
	rh = find_height(tree->right, height);

	if (lh > rh)
		return (lh);
	else
		return (rh);
}
