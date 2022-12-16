nclude "binary_trees.h"



/**
 *
 *  * binary_tree_inorder - that goes through a binary tree
 *
 *   * using in-order traversal
 *
 *    * @tree: tree is a pointer to the root node of the tree to traverse
 *
 *     * @func: func is a pointer to a function to call for each node
 *
 *      * Return: void
 *
 *       */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{

		if (tree && func)

				{

							if (tree->left)

											binary_tree_inorder(tree->left, func);

									func(tree->n);

											if (tree->right)

															binary_tree_inorder(tree->right, func);

												}

}
