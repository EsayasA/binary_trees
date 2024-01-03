#include "binary_trees.h"
/**
 * binary_tree_is_root - check if the node is root
 * @node:pointer to the node
 * Return:1 if the node is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
