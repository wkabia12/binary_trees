#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);


	if (l_height >= r_height)
		return (1 + l_height);
	else
		return (1 + r_height);
}
