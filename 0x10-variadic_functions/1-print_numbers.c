#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 *       (at least one integer must be passed)
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_nums;
	unsigned int index;
	int num;

	/* Initialize the argument list */
	va_start(arg_nums, n);

	/* Loop through the numbers and print them */
	for (index = 0; index < n; index++)
	{
		num = va_arg(arg_nums, int);
		printf("%d", num);

	/* Print separator if not the last number and separator is not NULL */
		if (index != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	/* Clear argument list */
	va_end(arg_nums);
}
