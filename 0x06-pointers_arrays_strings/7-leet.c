#include "main.h"
#include <stdio.h>

/**
 * leet - encodes the string into 1337 (leet)
 *
 * @str: string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'A' || str[i] == 'a')
			str[i] = '4';
		else if (str[i] == 'E' || str[i] == 'e')
			str[i] = '3';
		else if (str[i] == 'O' || str[i] == 'o')
			str[i] = '0';
		else if (str[i] == 'T' || str[i] == 't')
			str[i] = '7';
		else if (str[i] == 'L' || str[i] == 'l')
			str[i] = '1';
		i++;
	}
	return (str);
}
