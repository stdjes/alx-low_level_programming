#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14
 */
void more_numbers(void)
{
	int a, b;

	a = 48;

	while (a < 58)
	{
		write(1, &a, 1);
		a++;
	}

	b = 48;
	a = 49;

	while (b < 53)
	{
		_putchar(a);
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
