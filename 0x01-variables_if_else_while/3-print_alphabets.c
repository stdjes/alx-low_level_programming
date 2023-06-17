#include <stdio.h>

/**
 * main - begins program run
 * this program prints the alphabest in lowercase, followed by upper case
 * followed by a new line
 * Return: 0 when program sucessful
 */
int main(void)
{
	char al;
	char AL;

	for (al = 'a'; al <= 'z'; al++)
	{	putchar(al);
	}
	for (AL = 'A'; AL <= 'Z'; AL++)
	{
		putchar(AL);
	}
	putchar('\n');
	return (0);
}

