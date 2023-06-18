#include <stdio.h>

/**
 * main - beginning of program
 * prints all possible combinations of three digit numbers
 * without repetition, the the smallest number combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int d;
	int e;

	for (i = 0; i <= 7; i++) /* loop initialize condition for i*/
	{
		for (d = 0; d <= 8; d++) /* nested loop initialize condition for d*/
		{
			for (e = 0; e <= 9; e++) /* nested loop initialize condition for d*/
			{
				if (i != d && i != e && d != e && i < d && d < e) /* skip repetitions*/
				{
					putchar(i + '0');
					putchar(d + '0');
					putchar(e + '0');
					if (i != 7 || d != 8 || e != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
