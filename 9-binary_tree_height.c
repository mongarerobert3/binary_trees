#include "binary_trees.h"

/**
 * binary_tree_height - finds height of the tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree->parent == NULL)
	{
		return;
	}
	int count;

	if (tree->parent->left != NULL)
	{
		count++;
	}
	tree->parent->left = tree->parent;
	return (count);

}
