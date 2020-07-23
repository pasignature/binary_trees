#include "binary_trees.h"

/**
 * binary_tree_node - Function to made a binary tree
 * @parent: parent node
 * @value: value of parent node
 * Return: always successful
 */
 
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root_node;

	root_node = malloc(sizeof(binary_tree_t));
	if (!root_node)
		return (NULL);
	root_node->n = value;
	root_node->right = NULL;
	root_node->left = NULL;
	root_node->parent = parent;
	return (root_node);
}
