#include <stdio.h>

/**
 * main - start printing first 50 Fibonacci numbers, starting
 *        with 1, 2, 3... separated by a comma and space
 *
 * Return: Always 0.
 */
int main(void)
{
	int series;
	unsigned long f1 = 0, f2 = 1, sum;

	for (series = 0; series < 50; series++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (series == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
