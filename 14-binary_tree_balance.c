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

#include "binary_trees.h"
/**
 * binary_tree_balance - function that calculate balance factor
 * @tree: a pointer to the parent node of the node.
 * Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (!tree->right && tree->left)
		return (1);
	if (tree->right && !tree->left)
		return (-1);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
}
