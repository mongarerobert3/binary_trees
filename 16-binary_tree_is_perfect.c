#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
		return (0);
    return (binary_tree_is_perfect(tree->left) & binary_tree_is_perfect(tree->right));
}
