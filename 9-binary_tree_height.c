#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the height of the tree or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree || (!tree->left && !tree->right))
	return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
	return (left_height + 1);
	else
	return (right_height + 1);
}
