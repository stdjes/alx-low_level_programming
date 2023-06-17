#include <stdio.h>

/**
 * main - start of program
 * this program prints all single digit base 10 numbers from 0
 *
 * Return: Always 0 for successful run
 */
int main(void)
{
	int d ;		/* sets counter d for the function*/
	char h;		/* sets variable for the function h*/

	for (d = 0; d < 10; d++)	/* prints decimals from 0-9 */
	{
		h = d + '0';
		putchar(h);
	}

	for (d = 0; d < 6; d++)		/* continues printing, prints alphabets from a-f */
	{
		h = d  + 'a';
		putchar(h);
	}

	putchar('\n');
	return (0);
}
