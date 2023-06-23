#include "main.h"

/**
 * print_number - prints any given integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		_putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
}
