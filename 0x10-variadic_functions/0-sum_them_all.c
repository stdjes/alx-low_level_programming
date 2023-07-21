#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *       (Must be greater than 0)
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	/* Initialize the argument list */
	va_start(ap, n);

	/* Loop through all the parameters and calculate the sum */
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	/* Clean up the argument list */
	va_end(ap);

	return (sum);
}
