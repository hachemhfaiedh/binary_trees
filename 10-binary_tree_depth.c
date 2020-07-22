#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * @tree: a pointer to the parent node of the node.
 * Return: the depth of the tree or 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int p_depth;

	if (tree == NULL || !tree->parent)
		return (0);
	p_depth = binary_tree_depth(tree->parent);
	return (p_depth + 1);
}
