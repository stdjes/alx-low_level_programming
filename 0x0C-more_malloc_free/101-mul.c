#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void error(void);

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int len = 0;
	int sign = 1;

	/* Check if the string is NULL. */
	if (s == NULL)
		return (0);

	/* Iterate through the string and count the number of characters. */
	while (s[len] != '\0')
		len++;

	/* Iterate through the string and convert the digits to an integer. */
	while (i < len)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');

			/*
			 * Break out of the loop if we have reached the end of the string
			 * or if we have encountered a non-digit character.
			 */
			if (i + 1 == len || (s[i + 1] < '0' || s[i + 1] > '9'))
				break;
		}
		i++;
	}

	return (sign * n);
}

/**
 * error - Prints an error message and exits with status 98.
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 on memory allocation failure.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2;
	int *mult;

	if (argc != 3)
	{
		error();
	}

	arg1 = _atoi(argv[1]);
	arg2 = _atoi(argv[2]);

	/* Allocate memory for the product of the muliplication mult.*/
	mult = malloc(sizeof(int));

	if (mult == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	*mult = arg1 * arg2;

	printf("%d\n", *mult);

	/* Free the allocated memory */
	free(mult);

	return (0);
}
