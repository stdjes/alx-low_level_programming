#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a provided function pointer.
 * @name: The input name to be printed.
 * @f: A function pointer to  execute the printing of the name.
 *
 * This function takes a name and a function pointer as input. If both the name
 * and the function pointer are valid, the function uses the provided function
 * pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
