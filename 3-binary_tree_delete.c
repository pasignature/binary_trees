#include "binary_trees.h"

/**
 * binary_tree_delete - delete entire binary tree
 * @tree: pointer to tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);

	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);
}
