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
int op_add(int a, int b); /* Adds two numbers */
int op_sub(int a, int b); /* Subtracts two numbers */
int op_mul(int a, int b); /* Multiplies two numbers */
int op_div(int a, int b); /* Divides two numbers */
int op_mod(int a, int b); /* Calculates the modulo of two numbers */

/**
 * get_op_func - Get the function associated with the operator.
 * @s: The operator as a string.
 *
 * Return: Pointer to the function corresponding to the operator,
 * or NULL if the operator is not supported.
 */
int (*get_op_func(char *s))(int, int);

#endif /* _CALC_H_ */
