#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all input parameters passed
 * @n: The number of parameters passed to the function.
 *       (at least one argument must be passed, else error)
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: the computed sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sump = 0;

	/* Initialize the argument list */
	va_start(ap, n);

	/* Loop through all the parameters and calculate the sum */
	for (i = 0; i < n; i++)
		sump += va_arg(ap, int);

	/* Clean up the argument list */
	va_end(ap);

	return (sump);
}
