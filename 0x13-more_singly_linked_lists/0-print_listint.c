#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all elements of a linked list
 * which contains only integers
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: the number of nodes counted in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_len;

	node_len = 0;
	/* Traverse the linked list and print each node's data */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_len++;
	}
	/* Return the number of nodes in the linked list */
	return (node_len);
}
