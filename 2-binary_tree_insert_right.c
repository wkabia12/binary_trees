#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts new right node
 *@parent: parent node
 *@value: node value
 *Return: new_node if success, NULL if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	new_right_node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = new_right_node;
	}
	else
	{
		parent->right->parent = new_right_node;
		new_right_node->right = parent->right;
		parent->right = new_right_node;
	}

	return (new_right_node);
}
