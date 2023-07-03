#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * and returns a pointer to the resulting string
 *
 * @dest: destination string to copy to
 * @src: source string to copy from
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[strlen(dest)] = src[i];
		i++;
	}
	dest[strlen(dest)] = '\0';
	return (dest);
}
