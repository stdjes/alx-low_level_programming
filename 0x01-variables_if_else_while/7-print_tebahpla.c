#include <stdio.h>

/**
 * main - start of program
 * this program prints lower case alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
