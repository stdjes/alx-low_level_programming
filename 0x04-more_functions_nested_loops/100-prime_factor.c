#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * this program computes and prints the largest prime factor of a number
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int hf = 2;

	while (n > hf)
	{
		if (n % hf == 0)
		{
			n /= hf; /* Reduce the value of n by dividing it by hf*/
		}
		else
		{
			hf++; /*Increment hf to check the next possible factor*/
		}
	}

	printf("%ld", hf);
	printf("\n");

	return (0);
}
