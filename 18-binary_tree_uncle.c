#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle of
 *
 * Return: pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Check if the parent is the left child of the grandparent */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	/* If not the left child, return the left child (uncle) */
	return (node->parent->parent->left);
}
