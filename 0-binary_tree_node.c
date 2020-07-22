#include "binary_trees.h"

/**
 * *binary_tree_node - create binary tree node
 * @parent: parameter
 * @value: parameter
 * Return:  pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);
	temp->parent = parent;
	temp->left = temp->right = NULL;
	temp->n = value;
	return (temp);
}
