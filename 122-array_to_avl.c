#include "binary_trees.h"

/**
 * array_to_avl - Creates an AVL tree from an array.
 * @array: The array of values.
 * @size: The length of the array.
 *
 * Return: A pointer to the AVL tree, otherwise NULL.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *root = NULL;
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			avl_insert(&root, *(array + i));
		}
	}

	return (root);
}
