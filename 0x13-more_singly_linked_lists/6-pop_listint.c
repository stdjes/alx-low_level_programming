#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list.
 *
 * This function deletes the first node of a linked list
 * of type listint_t.
 * It retrieves the data value 'node_val' stored in the head node
 * and frees the head node, then updates the head to point
 * to the next node in the list.
 * If the list is empty, it returns 0.
 *
 * @head: A pointer to the pointer to the first element in the linked list.
 *
 * Return: The data value stored in the head node that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *node_tr; /* Pointer to traverse the list */
	int node_val; /* Data value inside the head node that was deleted */

	if (!head || !*head)
		return (0);

	node_val = (*head)->n; /* Get the data value from the head node */
	node_tr = (*head)->next; /* Save the reference to the next node */
	free(*head); /* Free the current head node */
	*head = node_tr; /* Move the head to the next node */

	return (node_val);
}
