#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a tree
 * @tree: btree
 * Return: pointer to the root node of the tree to measure the balance factor
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree: btree
 * Return: pointer to the root node of the tree to measure the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (!tree)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
}
