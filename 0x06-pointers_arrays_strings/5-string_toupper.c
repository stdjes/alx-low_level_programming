#include "main.h"
#include <string.h>

/**
 * string_toupper - coverts the lowwercase of a string to upper case
 *
 * @str: the sting variable to be converted
 *
 * Return: returns the upper case converted string
 */
char *string_toupper(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}
