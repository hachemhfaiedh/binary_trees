#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l_depth, r_depth;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	l_depth = binary_tree_depth(tree->left);
	r_depth = binary_tree_depth(tree->right);
	if (l_depth > r_depth)
		return (r_depth + 1);
	else
		return (r_depth + 1);
}
