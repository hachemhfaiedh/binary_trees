#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the count of the node or 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int result = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		result++;
	 result += (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (result);
}
