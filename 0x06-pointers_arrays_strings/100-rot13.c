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

	while (*ptr != '\0')
	{
		char offset = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';

		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
			*ptr = ((*ptr - offset + 13) % 26) + offset;
		ptr++;
	}
	return (str);
}
