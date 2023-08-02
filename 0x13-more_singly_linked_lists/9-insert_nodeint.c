#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list
 * at a given position.
 *
 * This function inserts a new node with data value 'n'
 * at the specified index 'idx' in the linked list of type listint_t.
 * If the index is 0, the new node becomes the head.
 *
 * @head: Pointer to the pointer to the first node in the list.
 * @idx: The index where the new node is added (0-indexed).
 * @n: The data value to insert in the new node.
 *
 * Return: A pointer to the new node,
 * or NULL if memory allocation fails or if the index is invalid.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node; /* Pointer to the new node to be inserted */
	listint_t *node_tr = *head; /* Pointer to traverse the list */

	new_node = malloc(sizeof(listint_t)); /*Allocate memory for the new node*/
	if (!new_node || !head)
		return (NULL);
	/* Set the data and next pointer of the new node */
	new_node->n = n;
	new_node->next = NULL;
	/*If the index is 0, insert the new node at the beginning, update head*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; node_tr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = node_tr->next;
			node_tr->next = new_node;
			return (new_node);
		}
		else
		{
			node_tr = node_tr->next; /* Move to the next node */
		}
	}
	/**
	 * If the loop ends without finding the position,
	 * return NULL as the index is invalid
	 */
	return (NULL);
}
