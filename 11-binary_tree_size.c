#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size of
 *
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the left and right subtrees */
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (1 + left + right);
}
