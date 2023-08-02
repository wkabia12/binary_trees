#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling of node.
 * @node: A pointer to the root node of the tree to traverse.
 * Return: height of the binary tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	else if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}
	else if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
		return (node->parent->left);
}
