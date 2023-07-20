#include "3-calc.h"

/**
 * get_op_func - chooses the appropriate function to perform
 *               the operation requested at runtime
 * @s: The operator as a string.
 *
 * Return: Pointer to the function that corresponds to the operator.
 *         If the operator is not supported, return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	/* Array of structs containing supported operators and functions */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	/* Loop through the array to find the correct function */
	while (ops[i].op != NULL)
	{
		/* Check if the operator matches */
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}

	/* If the operator is not supported, return NULL */
	return (NULL);
}
