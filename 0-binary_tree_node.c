#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - binary tree node
 * @parent:parent node
 * @value:parent value
 * Return:created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);

	n_node->parent = parent;
	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;
	return (n_node);
}
