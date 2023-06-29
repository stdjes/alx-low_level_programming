#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;


	if (dest == NULL) /*Check if dest is empty*/
		return(0);


	if (src == NULL) /*Check if src is empty*/
	{
		dest[0] = '\0';
		return (dest);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
