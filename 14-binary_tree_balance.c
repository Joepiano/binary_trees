#include "binary_trees.h"

/**
 *  * binary_tree_balance - Measures the balance factor of a binary tree.
 *   * @tree: A pointer to the root node of the tree to measure the balance factor.
 *    *
 *     * Returnactor.
 *      */
int binary_tree_balance(const binary_tr: If tree is NULL, return 0, else return balance fee_t *tree)
{
		if (tree)
					return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

			return (0);
}

/**
 *  * binary_tree_height - Measures the height of a binary tree.
 *   * @tree: A poieight.
 *    *
 *     * Return: If tree is NULL, your functionter to the root node of the tree to measure the hn must return 0, else return height.
 *      */
size_t binary_tree_height(const binary_tree_t *tree)
{
		if (tree)
				{
							size_t l = 0, r = 0;

									l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
											r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
													return ((l > r) ? l : r);
														}
			return (0);
}
