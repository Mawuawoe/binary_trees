
#include "binary_trees.h"

/**
 * binary_tree_node - Function to creates a new binary tree node
 *
 * @parent:  pointer to the parent node of the node to be created
 * @value: - the value we are going to put in the new node
 * Return: a pointer to the new created node, or NULL if failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
