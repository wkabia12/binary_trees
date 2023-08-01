#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts new left node
 *@parent: parent node
 *@value: node value
 *Return: new_node if success, NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	new_left_node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = new_left_node;
	}
	else
	{
		parent->left->parent = new_left_node;
		new_left_node->left = parent->left;
		parent->left = new_left_node;
	}

	return (new_left_node);
}
