#include "lists.h"

/**
 * free_listint - Frees a linked list.
 *
 * This function deallocates the memory occupied by a linked list
 * of type listint_t.
 * It traverses the linked list starting from the head,
 * freeing each node and updating the head to the next node
 * until all nodes have been deallocated.
 *
 * @head: A pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *node_tr; /* Pointer to traverse the list */

	while (head != NULL)
	{
		node_tr = head; /* Save the reference to the current node */
		free(node_tr); /* Free the current node */
		head = head->next; /* Move the head to the next node */
	}
}
