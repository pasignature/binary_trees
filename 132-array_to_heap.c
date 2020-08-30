#include "binary_trees.h"


/**
 * array_to_heap - builds Max Binary Heap tree
 *
 * @array: pointer to first element in the array
 * @size: number of element in the array
 * Return: pointer to the root node of the AVL tree
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree;
	size_t i;

	tree = NULL;

	for (i = 0; i < size; i++)
	{
		heap_insert(&tree, array[i]);
	}

	return (tree);
}
