#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, nodes, expected_nodes;

    if (tree == NULL)
        return (0);

    height = binary_tree_height(tree);
    nodes = binary_tree_nodes(tree);

    expected_nodes = (1 << (height + 1)) - 1;

    return (nodes == expected_nodes);
}

