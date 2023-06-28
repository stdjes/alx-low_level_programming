#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s:  string to be printed in reverse.
 */
void print_rev(char *s)
{
	int l; /*lent of string counter*/
	int p; /*current position of string character*/

	if (s == NULL)
		return;

	l = 0; /* count length of string from 0*/

	while (s[l] != '\0') /*while loop calculates length of the string*/
		l++;

	for (p = l - 1; p >= 0; p--) /*iterates printing in reverse*/
		_putchar(s[p]);
	_putchar('\n');
}
