#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with atleast 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to be counted the no. of nodes
 * Return: Node count, if tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
