#include "binary_trees.h"

/**
 * bst_search - searches value in Binary Search Tree
 *
 * @tree: root of the tree
 * @value: node value
 * Return: pointer to found node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree && value < tree->n)
		return (bst_search(tree->left, value));

	if (tree && value > tree->n)
		return (bst_search(tree->right, value));

	return ((bst_t *)tree);
}
