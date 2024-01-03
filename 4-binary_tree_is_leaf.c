#include "binary_trees.h"
/**
 * binary_is_leaf - checks for leaf node
 * @node:node pointer
 * Return:1 if the tree is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
