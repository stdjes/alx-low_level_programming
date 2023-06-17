#include <stdio.h>

/**
* main - start of program run
* this program prints all possible combination of single digit numbers
*
* Return: Always 0 (successful)
*/
int main(void)
{

	int d;

	for (d = 0; d <= 9; d++) /* loops the print of numbers 0 -9 */
	{
		putchar(d + '0'); /* prints  d, after adding the ASCII value of 0 to d*/
		putchar(','); /* inserts a comma after each digit*/
		putchar(' '); /* inserts a space after the comma*/
	}

	putchar('\n');
	return (0);

}
