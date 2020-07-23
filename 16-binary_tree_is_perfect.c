#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary
 * @tree: a pointer to the parent node of the node
 * Return: the height of the tree or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the count of the node or 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
}
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the parent node of the node.
 * Return: the full of the tree 1 or 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
	return (binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right));
	return (0);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
	return (1);
	return (0);
}
