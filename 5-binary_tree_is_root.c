#include "binary_trees.h"

/**
 * binary_tree_is_root - test if node is root
 * @node: node to test
 * Return: 1 if root, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
