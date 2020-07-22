#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node
 * @value: value
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL || parent == NULL)
		return (NULL);
	temp->parent = parent;
	temp->n = value;
	temp->right = NULL;
	temp->left = NULL;
	if (parent->right)
	{
		parent->right->parent = temp;
		temp->right = parent->right;
	}
	parent->right = temp;
	return (temp);
}
