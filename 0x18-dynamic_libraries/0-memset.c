#include "main.h"
/**
 * _memset - fills a block of memory with a specific value b.
 *
 * @s: starting address of memory to be filled
 * @b: the desired value to fill memory with
 * @n: number of bytes to be filled
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
