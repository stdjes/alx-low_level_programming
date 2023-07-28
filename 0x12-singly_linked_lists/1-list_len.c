#include <stdio.h>
#include "lists.h"

/**
 * list_len - a fucntion that returns the number of elements
 * contained in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t tr_count = 0; /* traverse counter variable */

	for (; h != NULL; h = h->next) /* loop to traverse nodes */
	{
		tr_count++; /* increment counter by 1 */
	}

	return (tr_count);
}
