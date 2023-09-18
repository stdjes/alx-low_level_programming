#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s: input
 * @accept: input
 *
 * Return: a pointer to the byte in s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int b;


	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}


	return ('\0');
}
