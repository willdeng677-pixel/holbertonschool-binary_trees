#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance_height(tree->left);
	right_height = binary_tree_balance_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_balance_height - Measures the height of a subtree
 * @tree: Pointer to the root node of the subtree
 *
 * Return: Height of the subtree
 */
int binary_tree_balance_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_balance_height(tree->left);
	right_height = binary_tree_balance_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}
