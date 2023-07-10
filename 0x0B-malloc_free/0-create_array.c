#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of size 'size' and assigns char c
 * to all the indexes of the array
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to the array created, NULL if size = 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *newArray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	newArray = malloc(sizeof(unsigned int) * size);

	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		newArray[i] = c;
	return (newArray);
}
