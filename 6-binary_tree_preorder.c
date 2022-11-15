#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes through a binary tree pre-order traversaa
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call each node
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
