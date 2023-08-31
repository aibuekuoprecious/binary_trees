#include "binary_trees.h"

/**
 * sorted_array_to_avl - builds an AVL tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: number of elements in the array
 *
 * Return: a pointer to the root node of the created AVL tree
 *         NULL on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	size_t middle;
	avl_t *tree = NULL;

	if (!array)
		return (NULL);
	middle = (size - 1) / 2;
	tree = binary_tree_node(NULL, array[middle]);

	sata_helper(&tree, array, -1, middle);
	sata_helper(&tree, array, middle, size);

	return (tree);
}

/**
 * sata_helper - helper that builds an AVL tree from an array
 * @root: double pointer to the root node of the subtree
 * @array: a pointer to the first element of the array to be converted
 * @low: lower bound index
 * @high: upper bound index
 */
void sata_helper(avl_t **root, int *array, size_t low, size_t high)
{
	size_t middle;
	avl_t *new = NULL;

	if (high - low > 1)
	{
		middle = (high - low) / 2 + low;
		new = binary_tree_node(*root, array[middle]);
		if (array[middle] > (*root)->n)
			(*root)->right = new;
		else if (array[middle] < (*root)->n)
			(*root)->left = new;
		sata_helper(&new, array, low, middle);
		sata_helper(&new, array, middle, high);
	}
}
