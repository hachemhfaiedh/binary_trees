#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: a pointer to the parent node of the node.
 * Return: 1 or 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);
	return (0);
}
