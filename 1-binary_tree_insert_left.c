#include "binary_trees.h"
/**
 * *binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value
 * Return:  return a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL || parent == NULL)
		return (NULL);
	temp->parent = parent;
	temp->right = NULL;
	temp->left = NULL;
	temp->n = value;
	if (parent->left)
	{
		parent->left->parent = temp;
		temp->left = parent->left;
	}
	parent->left = temp;
	return (temp);
}
