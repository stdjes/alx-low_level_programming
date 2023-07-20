#include "function_pointers.h"

/**
 * int_index - Searches for an integer in a given array
 * @array: pointer to an integer array.
 * @size: The size of the given integer array.
 * @cmp: function pointer used to compare values.
 *
 * Return: The index of the first element for which the 'cmp'
 * function does not return 0. If no elements match, return (-1).
 * If 'size' is less than or equal to 0, return (-1).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int result, i;
	/* Check if array, cmp, and size are valid */
	if (array && cmp && size > 0)
	{
		/* Loop through the array elements */
		for (i = 0; i < size; i++)
		{
			/* Call the cmp function to compare the array element */
			result = cmp(array[i]);
			/* If the result is not 0, return the index */
			if (result != 0)
			{
				return (i);
			}
		}
	}

	/* If no elements match or size is invalid, return (-1) */
	return (-1);
}
