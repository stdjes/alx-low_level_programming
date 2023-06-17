#include <stdio.h>

/**
 * main - begins program run
 * this program prints the alphabest in lowercase,
 * followed by a new line
 * Return: 0 when program sucessful
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	{
		putchar('\n');
	}
	return (0);
}
