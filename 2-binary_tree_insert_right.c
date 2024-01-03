#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert right child
 * @parent:parent node
 * @value:value of the node
 * Return:node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_ew = NULL;

	if (!parent)
		return (NULL);

	n_ew = malloc(sizeof(binary_tree_t));

	if (!n_ew)
		return (NULL);

	n_ew->n = value;
	n_ew->left = NULL;

	if (parent->right == NULL)
	{
		n_ew->parent = parent;
		n_ew->right = NULL;
		parent->right = n_ew;
	}
	else
	{
		n_ew->parent = parent;
		n_ew->right = parent->right;
		parent->right = n_ew;
		n_ew->right->parent = n_ew;
	}
	return (n_ew);
}
