#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int p_depth;

	if (tree == NULL || !tree->parent)
		return (0);
	p_depth = binary_tree_depth(tree->parent);
	return (p_depth + 1);
}
