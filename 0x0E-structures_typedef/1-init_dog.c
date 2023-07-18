#include <stdio.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes the members of a dog structure
 * @d: Pointer to the (struct dog)
 * @name: member 1: the given name of the dog
 * @age: member 2: Age of the dog
 * @owner: member 3: Owner of the dog
 *
 * Description: This function initializes the name, age, and owner members
 * of a dog structure with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	/* Initialize the name member */
	d->name = name;

	/* Initialize the age member */
	d->age = age;

	/* Initialize the owner member */
	d->owner = owner;
}
