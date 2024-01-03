#include "binary_trees.h"
/**
 * binary_tree_left - insert left node
 * @parent:parent node
 * @value:value of the parent node
 * Return:new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_n = NULL, *n_node = NULL;

	if (!parent)
		return (NULL);
	n_node = malloc(sizeof(binary_tree_t));

	if (!n_node)
		return (NULL);

	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;
	n_node->n = value;

	left_n = parent->left;
	parent->left = n_node;

	if (left_n)
	{
		left_n->parent = n_node;
		n_node->left = left_n;
	}

	return (n_node);
}
