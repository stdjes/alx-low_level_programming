#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a singly linked list.
 *
 * This function allocates memory for a new node in the linked list and
 * inserts it at the beginning of the list. The new node contains the given
 * data value 'n', and its 'next' pointer is set to the current head of the
 * list. The head pointer is then updated to point to the newly created node.
 *
 * @head: A pointer to the pointer to the head of the linked list.
 * @n: The data value to be stored in the new node.
 *
 * Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node with the provided data */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}
