#include "3-calc.h"

/**
 * op_add - Adds two given  numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two given numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Difference between 'a' and 'b'.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two given numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Product of 'a' and 'b'.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two given numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Division of 'a' by 'b'.
 *
 * If 'b' is 0, prints an error message and exits with status 100.
 */
int op_div(int a, int b)
{
	/* Check for division by zero and print error*/
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the modulo of two given numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Remainder of the division of 'a' by 'b'.
 *
 * If 'b' is 0, prints an error message and exits with status 100.
 */
int op_mod(int a, int b)
{
	/* Check for modulo by zero and return error*/
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
