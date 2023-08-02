#include "lists.h"
/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 *
 * This function deallocates the memory occupied by
 * a linked list of type listint_t.
 * It traverses the linked list starting from the head,
 * freeing each node and updating the head to the next node
 * until all nodes have been deallocated. After freeing all nodes,
 * it sets the head pointer to NULL, effectively making the list empty.
 *
 * @head: A pointer to the pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *node_tr; /* Pointer to traverse the list */

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		node_tr = (*head)->next; /* Save the reference to the next node */
		free(*head); /* Free the current node */
		*head = node_tr; /* Move the head to the next node */
	}

	*head = NULL; /* Set the head pointer to NULL after freeing all nodes */
}
