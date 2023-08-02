#include "binary_trees.h"
/**
 * binary_tree_is_full - checks id binary tree full
 * @tree: A pointer to the root node of the tree to traverse.
 * Return: balance factor or NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_full, r_full;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		l_full = binary_tree_is_full(tree->left);
		r_full = binary_tree_is_full(tree->right);

		if (l_full && r_full)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
