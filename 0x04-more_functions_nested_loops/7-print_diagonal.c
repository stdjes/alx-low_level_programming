#include "main.h"

/**
 * print_diagonal - prints diagonal lines on the terminal
 * @n: number of diagonal lines to be printed
 */
void print_diagonal(int n)
{
	int s, m;

	if (n > 0)
	{
		m = 0;
		while (m < n) /*loops line count*/
		{
			s = 0;
			while (s < m) /*loops space print, counts up by 1 per line*/
			{
				_putchar(' ');
				s++;
			} /*end space print*/
			m++;
			_putchar('\\'); /*prints diagonal per line*/
			_putchar('\n'); /*enters a new line and starrs new space print loop*/
		} /*end line count*/

	}
	else if (n <= 0)
		_putchar('\n');
}
