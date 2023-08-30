#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling of
 *
 * Return: pointer to the sibling node, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the node is NULL or has no parent (root node) */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Check if the node is the left child of its parent*/
	if (node == node->parent->left)
		return (node->parent->right);

	/* If not the left child, return the left child (sibling) */
	return (node->parent->left);
}
