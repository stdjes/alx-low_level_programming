#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 *
 * This function computes the absolute value of the integer 'n'.
 *
 * @n: The integer for which to compute the absolute value.
 *
 * Return: The absolute value of 'n'.
 */
int _abs(int n)
{
	/* Check if n is negative */
	if (n < 0)
		/* Return the negation of n */
		return (-n);

	/* Return n, as it is already non-negative */
	return (n);
}

