#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string with rot 13
 *
 * @str: string to be encoded
 *
 * Return: returns the encodec string
 */
char *rot13(char *str)
{
	char *ptr = str;
	int i;

	while (str[i] != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'M') ||
				(*ptr >= 'a' && *ptr <= 'm'))
			*ptr = *ptr + 13;
		else if ((*ptr >= 'N' && *ptr <= 'Z') ||
				(*ptr >= 'n' && *ptr <= 'z'))
			*ptr = *ptr - 13;
		i++;
	}
	return (str);
}
