#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Check if the current node is NULL (base case) */
	if (tree == NULL)
		return;

	/* Recursively delete the left subtree */
	binary_tree_delete(tree->left);

	/* Recursively delete the right subtree */
	binary_tree_delete(tree->right);

	/* Free memory for the current node */
	free(tree);
}
