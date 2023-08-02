#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list.
 *
 * This function traverses a linked list of type listint_t starting from the
 * head and moves to the node at the given index 'index'.
 * It returns a pointer to the node at that index if it exists,
 * or NULL if the index is out of bounds.
 *
 * @head: Pointer to the first node in the linked list.
 * @index: The index of the node to return (0-indexed).
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node_tr = head; /* Pointer to traverse the list */

	/* Traverse the list up to the specified index */
	while (node_tr && i < index)
	{
		node_tr = node_tr->next; /* Move to the next node */
		i++; /* Increment the loop counter */
	}
	/* Return the node or NULL if not found */
	if (node_tr != NULL)
		return (node_tr);
	else
		return (NULL);
}
