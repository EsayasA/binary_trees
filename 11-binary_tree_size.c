#include "binary_trees.h"
/**
 * binary_tree_size - size
 * @tree:binary tree
 * Return:size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t j = 1;

	if (!tree)
		return (0);

	j += binary_tree_size(tree->left);
	j += binary_tree_size(tree->right);

	return (j);
}
