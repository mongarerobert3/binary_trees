#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the node to be counted
 * Return: count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
