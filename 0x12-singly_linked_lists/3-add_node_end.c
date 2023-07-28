#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of the linked list.
 * @head: Pointer to the head of the linked list.
 * @str: New string to add in the node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *curr_node = NULL;

	if (!str) /* Check if the input string is NULL */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* Allocate memory for the new node */
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str); /* Duplicate the input string*/
	if (!new_node->str) /* handle memory allocation error */
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = 0;

	while (str[new_node->len]) /* Calculate the length of the input string */
		new_node->len++;

	new_node->next = NULL;

	if (!(*head)) /* Check if the linked list is empty */
		*head = new_node;
	else
	{
		/* Traverse to the last node and add the new node at the end */
		curr_node = *head;
		while (curr_node->next)
			curr_node = curr_node->next;
		curr_node->next = new_node;
	}
	return (new_node);
}
