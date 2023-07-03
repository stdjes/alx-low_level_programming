#include "main.h"
#include <stdio.h>

/**
 * _strchr - searches for a character's first occurrence in a string
 *
 * @s: string to be searched
 * @c: character to be searched for
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
