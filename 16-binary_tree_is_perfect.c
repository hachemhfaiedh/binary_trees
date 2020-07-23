#include "binary_trees.h"
/**
 * perfect - main func
 * @tree: btree
 * @d: depth
 * @level: level
 * Return: 1 if it is perfect otherwise 0
 */
int perfect(const binary_tree_t *tree, int d, int level)
{

	if (!tree)
		return (1);


	if (!tree->left && !tree->right)
		if (d == level + 1)
			return (1);


	if (!tree->left || !tree->right)
		return (0);

	return (perfect(tree->left, d, level + 1) &&
		perfect(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: btree
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;
	const binary_tree_t *trunk;

	if (!tree)
		return (0);
	trunk = tree;

	while (trunk)
	{
		depth++;
		trunk = trunk->right;
	}

	return (perfect(tree, depth, 0));

}
