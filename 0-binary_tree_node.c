#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node
 * @value: int input
 *
 * Return: NULL if error occur.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bn;

	bn = malloc(sizeof(binary_tree_t));
	if (bn == NULL)
		return (NULL);

	bn->n = value;
	bn->parent = parent;
	bn->left = NULL;
	bn->right = NULL;

	return (bn);
}
