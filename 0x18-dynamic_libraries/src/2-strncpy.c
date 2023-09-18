#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string of memory size n
 *
 * @dest: destination string
 * @src: source string
 * @n: size of string to be copied
 *
 * Return: the result after string copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
