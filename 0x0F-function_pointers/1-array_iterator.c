#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: Pointer to the input integer array.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * This function iterates through the integer array and applies the
 * given function 'action' to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
