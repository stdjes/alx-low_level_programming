#include <stdio.h>

/**
 * main - begins program run
 * this program prints the alphabest in lowercase except for q and e,
 * followed by a new line
 * Return: 0 when program sucessful
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}
