#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks whether an integer is a prime number or not
 *
 * @n: integer variable to check
 *
 * Return: 1 if n is prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);  /* Numbers less than or equal to 1 are not prime */
	return (_is_prime(n, n - 1));  /* Call the _is_prime function */
}

/**
 * _is_prime - main function to recursively check if n is a prime number
 *
 * @n: integer variable
 * @i: recursion counter
 *
 * Return: 1 if n is prime, 0 if not
 */
int _is_prime(int n, int i)
{
	if (i == 1)
		return (1);  /* Base case: If i = 1, n is prime */
	if (n % i == 0 && i > 0)
		return (0);  /* If n is divisible by i, then n is not prime*/
	return (_is_prime(n, i - 1));  /* Recursively call the function, i--*/

	return (_is_prime(n, i - 1));
}
