#include "lists.h"
/**
 * listint_len - Counts the number of elements in a linked list.
 * which contains only integers
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes counted in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_len;
	const listint_t *node_tr;

	node_len = 0;
	node_tr = h;
	/* Traverse the linked list and count nodes */
	while (h)
	{
		node_len++;
		h = h->next;
	}
	return (node_len);
}
