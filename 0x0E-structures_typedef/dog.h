#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type structure to store details for dogs chronologically
 * @name: dog name
 * @age: how old the dog is in months or years
 * @owner: name of the owner or representative of the dog
 *
 * Description; this data structure will organize and store the datails of all
 * the dogs brought to a care home.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - a new type definition for (struct dog)
 */
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);

#endif /* DOG_H */
