#ifndef _CALC_H_
#define _CALC_H_

/* Function prototypes for basic arithmetic operations */

/**
 * op_add - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the addition.
 */
int add(int a, int b);

/**
 * op_sub - Subtracts two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the subtraction.
 */
int sub(int a, int b);

/**
 * op_mul - Multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b);

/**
 * op_div - Divides two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the division.
 */
int div(int a, int b);

/**
 * op_mod - Calculates the modulo of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the modulo operation.
 */
int mod(int a, int b);
#endif /* _CALC_H_ */
