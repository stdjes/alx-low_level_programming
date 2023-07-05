#include "main.h"
#include <stdio.h>

/**
 * factorial - computes and returns the factorial of any given number
 * @n: factorial to be computed
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
