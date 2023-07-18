#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure from already existing struct type
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure,
 *         or NULL if memory allocation fails.
 *
 * Description: This function creates a new dog structure
 * and initializes its name, age, and owner members with
 * the provided values.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy;
	char *owner_copy;

	/* Allocate memory for the dog structure */
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the dog name and copy the value stored */
	name_copy = strdup(name);
	dog->name = name_copy;
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* Initialize the age member */
	dog->age = age;

	/* Allocate memory for the owner and copy the provided value */
	owner_copy = strdup(owner);
	dog->owner = owner_copy;
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/* Return the newly created dog structure */
	return (dog);
}

