#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: The function takes a format string containing characters:
 *              'c' for char, 'i' for int, 'f' for float, and 's' for string.
 *              It then prints the corresponding values separated by commas.
 */
void print_all(const char * const format, ...)
{
	int c = 0;
	char *str, *sepr = "";

	va_list args_all;

	va_start(args_all, format);

	if (format)
	{
		while (format[c])
		{
			/* Handle each format character, c, i, f, s */
			switch (format[c])
			{
			case 'c':
				printf("%s%c", sepr, va_arg(args_all, int));
				break;
			case 'i':
				printf("%s%d", sepr, va_arg(args_all, int));
				break;
			case 'f':
				printf("%s%f", sepr, va_arg(args_all, double));
				break;
			case 's':
				str = va_arg(args_all, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sepr, str);
				break;
			default:
				c++;
				continue;
			}
		sepr = ", ";
		c++;
		}
	}

	printf("\n");
	va_end(args_all);
}
