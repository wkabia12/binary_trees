#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	else if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (1 + depth);
}
