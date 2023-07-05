#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - computes and returns the value of x ^ y
 *
 * @x: base integer
 * @y: power integer
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
