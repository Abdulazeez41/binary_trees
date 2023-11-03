#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: NULL else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t c = 0, d = 0;

		c = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		d = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((c > d) ? c : d);
	}
	return (0);
}
