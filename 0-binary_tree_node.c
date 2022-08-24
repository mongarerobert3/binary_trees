#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_t - creates a binary
 * 
 * @param parent - pointer to the parent node of the node to create
 * @param value - value of node to be inserted
 * @return binary_tree_t* , null otherwise
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));


    if (!node)
        return (NULL);
    
    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return(node);
}
