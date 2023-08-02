#include "binary_trees.h"

/**
 * get_height - measures height of binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * Return: height of the binary tree
 */

int get_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = get_height(tree->left);
	r_height = get_height(tree->right);

	if (l_height >= r_height)
		return (1 + l_height);
	else
		return (1 + r_height);
}
/**
 * binary_tree_balance - counts the nodes with at least 1 child
 * @tree: A pointer to the root node of the tree to traverse.
 * Return: balance factor or NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}

	l_height = get_height(tree->left);
	r_height = get_height(tree->right);

	return (l_height - r_height);
}
