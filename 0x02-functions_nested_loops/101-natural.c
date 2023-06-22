#include <stdio.h>

/**
 * main - computes all natural numbers below 1024
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0 at EOF
 */
int main(void)
{
	int nat, sum = 0;

	for (nat = 0; nat < 1024; nat++)
	{
		if ((nat % 3) == 0 || (nat % 5) == 0)
			sum += nat;
	}

	printf("%d\n", sum);

	return (0);
}
