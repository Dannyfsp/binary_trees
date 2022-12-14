#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 * a function that inserts a node as the right-child of another node
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or on Success the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	new_node->right = parent->right;

	if (new_node->right)
		new_node->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
