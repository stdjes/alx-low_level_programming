#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a singly linked list.
 *
 * This function allocates memory for a new node in the linked list and
 * inserts it at the end of the list. The new node contains the given data
 * value 'n', and its 'next' pointer is set to NULL as it becomes the last
 * node in the list.
 *
 * @head: A pointer to the pointer to the head of the linked list.
 * @n: The data value to be stored in the new node.
 *
 * Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *node_tr;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node with the provided data */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		node_tr = *head;
		while (node_tr->next != NULL)
		{
			node_tr = node_tr->next;
		}

		/* Append the new node at the end of the list */
		node_tr->next = new_node;
	}

	return (new_node);
}

