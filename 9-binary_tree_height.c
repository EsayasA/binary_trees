#include "binary_trees.h"
/**
 * binary_tree_height - measure height of the tree
 * @tree:binary tree
 * Return:height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft = 0, rgt = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lft = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rgt = 1 + binary_tree_height(tree->right);

	if (lft > rgt)
		return (lft);
	return (rgt);
}
