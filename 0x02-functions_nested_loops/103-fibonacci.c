#include <stdio.h>

/**
 * main - prints the sum of the even numbers terms
 * in the fibonacci series
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a, d, next, sum;

	a = 1;
	d = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + d;
		a = d;
		d = next;
	}

	printf("%lu\n", sum);

	return (0);
}
