#include <stdio.h>

/**
 * main - start of program
 * this program prints all single digit base 10 numbers from 0
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}

	putchar('\n');

	return (0);
}
