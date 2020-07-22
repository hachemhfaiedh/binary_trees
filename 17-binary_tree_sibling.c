#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: a pointer to the parent node of the node.
 * Return: a pointer to the sibling node.
 *         if node is NULL or the parent is NULL, return NULL.
 *         if node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->right && node->parent->left)
		return (node->parent->left);
	if (node == node->parent->left && node->parent->right)
		return (node->parent->right);
	return (NULL);
}
