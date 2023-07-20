#include <stdio.h>
#include <stdlib.h>

/**
 * main - start program.
 * @argc: command-line arguments count
 * @argv: Array of command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *)main;
	int i, nbytes;

	/* Check input arguments count*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* convert  arguments to integer */
	nbytes = atoi(argv[1]);

	/* Check if the specified number of bytes is valid */
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Print the first 'nbytes' bytes of the 'main' function */
	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
