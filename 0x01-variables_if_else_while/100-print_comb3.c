#include <stdio.h>

/**
 * main - beginning of program
 * prints all possible combinations of two digit numbers
 * without repetition, the the smallest number combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int d;

	for (i = 0; i <= 9; i++) /* loop initialize condition for i*/
	{
		for (d = 0; d <= 9; d++) /* nested loop initialize condition for d*/
		{
			if (i != d && i < d) /* skip equal combinations, skip repeated combination*/
			{
				putchar(i + '0');
				putchar(d + '0');
				if (i != 8 || d != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
