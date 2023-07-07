#include "main.h"
#include <stdio.h>

/**
 *_memcpy - a function that copies memory area
 *@dest: destination memory where is stored
 *@src: source where memory is copied from
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0; /*position of element in source memory*/
	int i = n;

	while (p < i)
	{
		dest[p] = src[p];
		n--;
		p++;
	}
	return (dest);
}
