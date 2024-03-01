#include "binary_trees.h"
#include <stdlib.h>

/**
 * create_node - Creates a new levelorder_queue_t node.
 * @node: The binary tree node for the new node to contain.
 *
 * Return: If an error occurs, NULL.
 *         Otherwise, a pointer to the new node.
 */
levelorder_queue_t *create_node(binary_tree_t *node)
{
    levelorder_queue_t *new_node = malloc(sizeof(levelorder_queue_t));
    if (new_node == NULL)
        return (NULL);

    new_node->node = node;
    new_node->next = NULL;

    return (new_node);
}

