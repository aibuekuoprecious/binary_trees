#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a left-child,
 * the new node must take its place,
 * and the old left-child must be set as the left-child of the new node
 *
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Check if the parent node is NULL */
	if (!parent)
		return (NULL);

	/* Create a new node to be the left child */
	binary_tree_t *left_child;

	left_child = binary_tree_node(parent, value);

	/* Check if memory allocation for the new node failed */
	if (!left_child)
		return (NULL);

	left_child->left = parent->left;

	if (left_child->left)
		left_child->left->parent = left_child;

	/* Set the parent's left pointer to the new left child */
	parent->left = left_child;

	/* Return the newly created left child node */
	return (left_child);
}
