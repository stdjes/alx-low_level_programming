#include "lists.h"

/**
 * delete_nodeint_at_index - a fucntion that deletes a node in a linked list
 * at a certain specified index.
 *
 * This function deletes the node at the specified index 'index'
 * in the linked list of type listint_t.
 * If the index is 0, it deletes the first node. The function adjusts
 * the pointers to maintain the integrity of the linked list.
 *
 * @head: Pointer to the pointer to the first element in the list.
 * @index: The index of the node to delete (0-indexed).
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_tr = *head; /* Pointer to traverse the list */
	listint_t *node_del = NULL; /* Pointer to store the node to be deleted */
	unsigned int i = 0;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* If the index is 0, delete the first node and update the head */
	if (index == 0)
	{
		*head = (*head)->next;
		free(node_tr);
		return (1);
	}

	/* Traverse the list to find the node before the one to delete */
	while (i < index - 1)
	{
		/* Check for invalid index or the end of the list */
		if (!node_tr || !(node_tr->next))
			return (-1);
		node_tr = node_tr->next;
		i++;
	}

	/* Store the node to delete in 'node_del' */
	node_del = node_tr->next;
	/* Update the pointers to remove the node from the list */
	node_tr->next = node_del->next;
	/* Free the memory occupied by the deleted node */
	free(node_del);

	return (1);
}
