#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list.
 *
 * This function reverses the order of nodes in the linked list
 * of type listint_t.
 * It rearranges the pointers to reverse the linked list.
 *
 * @head: Pointer to the pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL; /* Pointer to the previous node */
	listint_t *next_node = NULL; /* Pointer to the next node */

	while (*head)
	{
		/* Store the next node to preserve it */
		next_node = (*head)->next;

		/* Point the current node to the previous node (reversal) */
		(*head)->next = prev_node;
		prev_node = *head; /* Move prev_node to the current node */

		/* Move the head to the next node for the next iteration */
		*head = next_node;
	}
	/* Set the head to the last node (the new first node after reversal) */
	*head = prev_node;

	return (*head); /* Return the new head of the reversed list */
}
