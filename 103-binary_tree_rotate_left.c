#include "binary_trees.h"

/**
 * binary_tree_rotate_left - perform a left-rotation on binary tree
 * @tree: pointer to the root node of tree to rotate
 * Return: pointer to the new root node of tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree)
		return (NULL);
	new_root = tree->right;
	tree->right = new_root->left;
	tree->parent = new_root;
	new_root->left = tree;
	new_root->parent = NULL;

	return (new_root);
}
