#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - this allocates memory with the malloc function
 *
 * @b: value of bytes needed for allocation
 *
 * Return: returns a pointer to the allocated memory
 * If malloc fails, the program will terminate with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *chk;

	chk = malloc(b);
	if (chk == NULL)
		exit(98);

	return (chk);
}
