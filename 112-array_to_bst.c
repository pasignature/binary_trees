#include "binary_trees.h"

/**
 * array_to_bst - builds binary search tree from array
 *
 * @array: pointer to first element of the array
 * @size: number of element in array
 * Return: pointer to the root node
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree;
	size_t i;

	tree = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&tree, array[i]);
	}

	if (i == size)
		return (tree);

	return (NULL);
}
