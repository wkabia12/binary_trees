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
 * binary_tree_is_perfect - checks if binary tree perfect.
 * @tree: A pointer to the root node of the tree to traverse.
 * Return: height of the binary tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_perfect, r_perfect, l_height, r_height;

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
		l_height = get_height(tree->left);
		r_height = get_height(tree->right);

		if (l_height == r_height)
		{
			l_perfect = binary_tree_is_perfect(tree->left);
			r_perfect = binary_tree_is_perfect(tree->right);

			if (l_perfect && r_perfect)
				return (1);
			else
				return (0);
		}
		else
			return (0);
	}
	else
		return (0);
}
