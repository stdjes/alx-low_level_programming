#include "main.h"
#include <stdio.h>

/**
 * reverse_array - rearranges  the elements of an array in reverse order
 * @a: the array variable
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int ab; /*temp copy of array a*/

	if (n < 0)
		return;

	while (i < n / 2)
	{
		ab = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ab;
		i++;
	}
}
