#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;           /* The operator */
	int (*f)(int a, int b); /* The function associated */
} op_t;

/* Function prototypes for basic arithmetic operations */

/**
 * op_add - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the addition.
 */
int op_add(int a, int b);

/**
 * op_sub - Subtracts two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the subtraction.
 */
int op_sub(int a, int b);

/**
 * op_mul - Multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b);

/**
 * op_div - Divides two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the division.
 */
int op_div(int a, int b);

/**
 * op_mod - Calculates the modulo of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of the modulo operation.
 */
int op_mod(int a, int b);
#endif /* _CALC_H_ */
