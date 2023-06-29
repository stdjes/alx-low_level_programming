#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pswd[100];
	int c, sum, n;

	sum = 0;

	srand(time(NULL));

	for (c = 0; c < 100; c++)
	{
		pswd[c] = rand() % 78;
		sum += (pswd[c] + '0');
		putchar(pswd[c] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
