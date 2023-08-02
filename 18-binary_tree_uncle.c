#include "binary_trees.h"
/**
 * binary_tree_uncle - finds sibling of node.
 * @node: A pointer to the root node of the tree to traverse.
 * Return: height of the binary tree
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *temp;

	temp = node->parent;

	if (node == NULL || temp == NULL || temp->parent == NULL)
	{
		return (NULL);
	}
	else if (temp->parent->left == NULL || temp->parent->right == NULL)
	{
		return (NULL);
	}
	else if (temp->parent->left == temp)
	{
		return (temp->parent->right);
	}
	else
		return (temp->parent->left);
}
