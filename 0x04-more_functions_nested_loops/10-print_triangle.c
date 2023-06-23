#include "main.h"

/**
 * print_triangle - prints a triangle, with the # character
 * @size: width of the triangle to be printed
 */
void print_triangle(int size)
{
	int t = 1;  /* t marks the current row */
	int h;      /* h marks the current position */

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (t <= size)
	{
		h = size;  /* start from the extreme right column */

		while (h >= 1)
		{
			if (h <= t)
				_putchar('#');
			else
				_putchar(' ');

			h--;
		}

		_putchar('\n');
		t++;
	}
}
