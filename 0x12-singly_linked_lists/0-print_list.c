#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a linked list
 * containting nodes of data type list_t, which contains elements str and len
 *
 * @h: A pointer to the head (start point) of the linked list
 *
 * Return: the number of nodes counted/traversed in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t tr_count = 0; /* traverse counter variable */


	while (h != NULL) /* loop to traverse nodes*/
	{
		/* check if node element 'str' is NULL*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next; /* move to the next node */
		tr_count++; /* increment traverse counter by 1*/
	}


	return (tr_count);
}
