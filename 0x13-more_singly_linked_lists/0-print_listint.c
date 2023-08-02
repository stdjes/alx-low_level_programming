#include <stdlib.h>
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
	const listint_t *node_tr;

	/* Allocate memory for a temporary node pointer */
	node_tr = (listint_t *)malloc(sizeof(const listint_t));

	/* Check if memory allocation was successful */
	if (!node_tr)
	{
		printf("Error\n");
		return (0);
	}

	/* Check if the head pointer is NULL */
	if (!h)
		return (-1);

	node_tr = h;

	/* Initialize the node count */
	node_len = 0;

	/* Traverse the linked list and print each node's data */
	while (node_tr)
	{
		printf("%d\n", node_tr->n);
		node_tr = node_tr->next;
		node_len++;
	}

	/* Return the number of nodes in the linked list */
	return (node_len);
}
