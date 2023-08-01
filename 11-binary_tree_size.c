#include "binary_trees.h"

/**
 * binary_tree_size - Gets the size of binary tree
 * @tree: A pointer to the root node of the tree to traverse.
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
