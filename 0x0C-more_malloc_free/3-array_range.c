#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers in a given range.
 *
 * @min: minimum value of integer
 * @max: maximum value of integer
 *
 * Return: a pointer to the array of integers, or return NULL if fail.
 */
int *array_range(int min, int max)
{
	int *array_of_integers;
	int range, size, i;

	/* Check if the range is valid */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	range = max - min;
	size = range + 1;

	/* Allocate memory for the array */
	array_of_integers = malloc(size * sizeof(int));
	if (array_of_integers == NULL)
		return (NULL);

	/* Populate the array with values in the given range */
	for (i = 0; i < size; i++)
		array_of_integers[i] = min + i;

	return (array_of_integers);
}
