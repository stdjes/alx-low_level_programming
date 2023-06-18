#include <stdio.h>

/**
 * main - start program
 * this program prints all possible combinations
 * of two two-digit numbers
 *
 * Return: Always 0 on successful run
 */
int main(void)
{
	int i;
	int d;

	for (i = 0; i <= 99; i++) /* initialize counter for i*/
	{
		for (d = i; d <= 99; d++) /* initialize counter for d*/
		{
			putchar(i / 10 + '0'); /* print first digit*/
			putchar(i % 10 + '0'); /* print second digit*/
			putchar(' ');
			putchar(d / 10 + '0'); /* print 3rd digit*/
			putchar(d % 10 + '0'); /* print 4th digit*/
			if (i != 99 || d != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
