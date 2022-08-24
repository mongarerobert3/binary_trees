#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts the newnode to left
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: binary_tree_t* , or null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (value < parent)
	{
		new_node->left = value;
		new_node->left = parent;

	}
	else
	{
		return (new_node);
	}
}
