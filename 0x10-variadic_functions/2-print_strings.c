#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings passed to the function (must be greater than 0).
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_str;
	char *str;
	unsigned int counter;

	/* Start processing the argument list */
	va_start(arg_str, n);

	/* Loop through the strings and print them */
	for (counter = 0; counter < n; counter++)
	{
		/* Get the next string from the argument list */
		str = va_arg(arg_str, char *);

		/* Check if the string is NULL and print accordingly */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

	/* Print separator if not the last string and separator is not NULL */
		if (counter != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	/* End processing the argument list */
	va_end(arg_str);

	/* Add a newline at the end of the output */
	printf("\n");
}
