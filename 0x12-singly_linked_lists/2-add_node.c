#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
char *_strdup(const char *src);
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: New string to add in the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Copy the string and update the new node */
	new_node->str = _strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
/**
 * _strdup - Duplicates a string.
 * @src: The source string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if memory allocation fails.
 */
char *_strdup(const char *src)
{
	size_t len = strlen(src) + 1;
	char *dest = malloc(len);

	if (dest != NULL)
		memcpy(dest, src, len);

	return (dest);
}
