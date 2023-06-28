#include "main.h"

/**
 * puts2 - prints the even characters of a string
 * @str: string variable pointer
 */
void puts2(char *str)
{
	int l;

	if (str == NULL)
		return;

	l = 0;
	while (str[l] != '\0')
	{
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
