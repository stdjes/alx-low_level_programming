#include "main.h"
#include <string.h>

/**
 * _strncat - contanenates two strings terminated at a specified n byte
 *
 * @dest: destination string to copy to
 * @src: source string to copy from
 * @n: number bytes to copy from src
 *
 * Return: the resultant concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *result = dest;

	if (n >= 0)
	{
		while (i < n && src[i] != '\0')
		{
			result[strlen(dest)] = src[i];
			i++;
		}
		result[strlen(dest)] = '\0';
		return (result);
	}
	else
		return (dest);
}
