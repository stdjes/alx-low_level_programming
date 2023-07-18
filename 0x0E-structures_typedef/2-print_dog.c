#include <stdio.h>
#include "dog.h"



/**
 * print_dog - function that will print the details collected for a dog
 * @d: Pointer to the (struct dog) data structure
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of the fields are NULL, it prints "(nil)" for that field.
 */
void print_dog(struct dog *d)
{
	/* check if d is NULL and terminate program */
	if (d == NULL)
		return;

	/* Print the name */
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

	/* Print the age */
	if (d->age <  0.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	/* Print the owner */
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
