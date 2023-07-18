#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including the dynamically allocated memory for the name and owner strings.
 * If the pointer to the dog structure is NULL, the function returns without
 * performing any actions.
 */
void free_dog(dog_t *d)
{
	/* Check if the dog structure pointer is NULL */
	if (d == NULL)
		return;

	/* Free the memory allocated for the owner string */
	free(d->owner);

	/* Free the memory allocated for the name string */
	free(d->name);

	/* Free the memory allocated for the dog structure */
	free(d);
}
