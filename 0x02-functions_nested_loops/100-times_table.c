#include "main.h"

/**
 * print_times_table - prints any n multiplication table
 * @n: multiplication number to be printed
 */
void print_times_table(int n)
{
	int m, x, y;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (x = 0; x <= n; x++)
			{
				y = x * m;
				if (x == 0)
				{
					_putchar(y + '0');
				} else if (y < 10 && x != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(y + '0');
				} else if (y >= 10 && y < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((y / 10) + '0');
					_putchar((y % 10) + '0');
				} else if (y >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((y / 100) + '0');
					_putchar(((y / 10) % 10) + '0');
					_putchar((y % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
