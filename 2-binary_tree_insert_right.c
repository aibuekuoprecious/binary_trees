#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node
 * as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a right-child,
 * the new node must take its place
 * and the old right-child must be set as the right-child of the new node
 *
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Check if the parent node is NULL */
	if (!parent)
		return (NULL);

	/* Create a new node to be the right child */
	binary_tree_t *right_child = binary_tree_node(parent, value);

	/* Check if memory allocation for the new node failed */
	if (!right_child)
		return (NULL);

	right_child->right = parent->right;

	if (right_child->right)
		right_child->right->parent = right_child;

	/* Set the parent's right pointer to the new right child */
	parent->right = right_child;

	/* Return the newly created right child node */
	return (right_child);
}
