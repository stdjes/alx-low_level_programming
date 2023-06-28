#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap two integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int a2 = *a; /* store the initial value of *a to a2 */

	*a = *b;
	*b = a2; /* call back initial value of *a from a2 */
}
