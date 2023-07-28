#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a linked list.
 * @head: pointer to the beginning of the to be freed.
 */
void free_list(list_t *head)
{
	list_t *curr_node, *next_node;

	curr_node = head;
	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = next_node;
	}
}
