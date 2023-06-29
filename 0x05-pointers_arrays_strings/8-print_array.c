#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array variable
 * @n: number of elements in the array
 */
void print_array(int *a, int n)
{
	int q;			/*position counter*/

	if (n <= 0)
		return;

	for (q = 0; q < n - 1; q++)
	{
		printf("%d, ", a[q]);
	}
	if (q == n - 1)
		printf("%d\n", a[n - 1]);
}
