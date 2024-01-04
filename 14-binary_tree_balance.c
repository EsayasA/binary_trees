#include "binary_trees.h"
/**
 * binary_tree_height_balance - count height
 * @tree:binary tree
 * Return:height
 */
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t lft = 0, rgt = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lft = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		rgt = 1 + binary_tree_height_balance(tree->right);

	if (lft > rgt)
		return (lft);
	return (rgt);
}
/**
 * binary_tree_balance - tree balance
 * @tree:binary tree
 * Return:difference
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lft = 0, rgt = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lft = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		rgt = 1 + binary_tree_height_balance(tree->right);
	return (lft - rgt);
}
