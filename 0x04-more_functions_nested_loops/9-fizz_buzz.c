#include <stdio.h>
/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line.
 * prints Fizz for multiples of 3,
 * prints Buzz for the multiples of five
 * prints FizzBuzz for mutiples of 3 and 5
 *
 * Return: 0 always for successful run
 */
int main(void)
{
	int n = 1;

	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
			printf("Buzz");
		else if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Fizz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}

	printf("\n");
	return (0);
}
