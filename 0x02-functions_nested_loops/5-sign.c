#include "main.h"

/**
 * print_sign - a function to print the sign of a given number
 * @n: variable for the integer to be checked
 *
 * Return: 1(+ve), -1(-ve), 0(zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
