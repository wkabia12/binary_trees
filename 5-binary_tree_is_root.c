#include "binary_trees.h"
/**
 *binary_tree_is_root - checksif node is root
 *@node: tree root node
 *Return: 1 if leaf else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
