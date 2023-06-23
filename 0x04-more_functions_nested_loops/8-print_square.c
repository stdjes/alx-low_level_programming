#include "main.h"

/**
 * print_square - prints a square using # symbol
 * @size: size of square to be printed
 */
void print_square(int size)
{
	int h, l;

	if (size > 0)
	{
		h = 0;
		while (h < size) /*loop to print height of square*/
		{
			l = 0;

			while (l < size) /*loop to print lenght of square*/
			{
				_putchar('#');
				l++;
			}

			_putchar('\n');
			h++;
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
