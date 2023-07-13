#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	/* Check for zero or invalid arguments */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory */
	pointer = malloc(size * nmemb);

	/* Check if memory allocation failed */
	if (pointer == NULL)
		return (NULL);

	/* assign 0 to the allocated memory block */
	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
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
