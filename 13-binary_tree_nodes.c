#include "binary_trees.h"
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
