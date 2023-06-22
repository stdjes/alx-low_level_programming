#include "main.h"

/**
 * main - begining of program execution
 *
 * Return: 0 when program execution is successful
 */
void positive_or_negative(int i)
{

	if (i > 0)
	printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);

}
