#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated memory for ptr.
 * @new_size: New size of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	char *__ptr;
	unsigned int i;

	/* If new size is same as old size, return the original pointer */
	if (new_size == old_size)
		return (ptr);

	/* If new size is 0 and pointer is not NULL, free the pointer */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If pointer is NULL, allocate new memory */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Allocate new memory */
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);

	/* Copy content from old mem block to new mem block */
	__ptr = ptr;

	/* Copy up to the minimum of old and new sizes */
	for (i = 0; i < old_size && i < new_size; i++)
		newPtr[i] = __ptr[i];

	/* Free old memory block */
	free(ptr);

	return (newPtr);
	free(newPtr);
}
