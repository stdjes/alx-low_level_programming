#include "3-calc.h"

/**
 * get_op_func - Get the function associated with the operator.
 * @s: The operator as a string.
 *
 * Return: Pointer to the function corresponding to the operator,
 * or NULL if the operator is not supported.
 */
int (*get_op_func(char *s))(int, int);

/**
 * main - start of the program.
 * @argc: Number of arguments passed
 * @argv: Array of argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	/* Check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Check if the operator is valid */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Get the appropriate operation function */
	operation = get_op_func(argv[2]);

	/* Check if the operator is supported */
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Convert the operands to integers */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Perform the operation and output the result */
	printf("%d\n", operation(a, b));
	return (0);
}
