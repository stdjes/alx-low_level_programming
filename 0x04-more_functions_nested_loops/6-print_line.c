#include "main.h"

/**
 * print_line - prints a line on the interface
 * @n: number of lines to be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
