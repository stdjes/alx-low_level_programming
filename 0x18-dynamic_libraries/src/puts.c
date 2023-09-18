#include "main.h"

/**
 * puts - prints a string followed by a new line to stdout
 * @str: the strings to be printed.
 */
void _puts(char *s)
{
	if (s == NULL)
		return;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
