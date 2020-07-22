#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: tree to be rotated
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	tree->parent = tree->left;
	if (tree->left != NULL)
	{
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->parent->parent = NULL;
		if (tree->left != NULL)
			tree->left->parent = tree;
		return (tree->parent);
	}
	return (tree);
}
