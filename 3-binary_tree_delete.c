#include "binary_trees.h"
/**
 *binary_tree_delete - deletes entire node
 *@tree: tree root node
 *Return:  void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}

	free(tree);
}
