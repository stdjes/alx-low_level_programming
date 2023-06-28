#include "main.h"

/**
 * puts_half - prints last half of a string
 * followed by a new line
 *
 * @str: pointer to string array
 */
void puts_half(char *str)
{
	int l;
	int n; /*length of string*/

	if (str == NULL)
		return;

	l = 0;
	while (str[l] != '\0')
		l++;

	for (n = l / 2; n < l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
