#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the node to measure the depth of
 *
 * Return: depth of a node in a binary tree. If node is NULL, return (0)
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	/* Check if the node is NULL */
	if (!node)
		return (count);

	/* Loop through the parent nodes while incrementing the count */
	while (node->parent != NULL)
	{
		count++;
		node = node->parent;
	}

	return (count);
}
