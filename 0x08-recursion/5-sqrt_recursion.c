#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * but first checks if the number has anatural square
 *
 * @n: integer whose square root we required to find
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)  /* Check if n is negative */
		return (-1);  /* Return -1 to indicate error */
	return (nat_sqrt_recursion(n, 0));  /* Call the function @ r = 0 */
}

/**
 * nat_sqrt_recursion - main recursion function to find the natural
 * square root of a number
 *
 * @n: integer whose square root we required to find
 * @r: recursion counter (increments the root trials till r * r = n)
 *
 * Return: the value of r at r * r = n, which is the desired square root
 */
int nat_sqrt_recursion(int n, int r)
{
	if (r * r > n)  /* Check if r * r is greater than n */
		return (-1);  /* Return -1 to indicate no square root found */
	if (r * r == n)  /* Check if r * r is equal to n */
		return (r);  /* Return r as the desired square root */
	return (nat_sqrt_recursion(n, r + 1)); /*recursive function call*/
}
