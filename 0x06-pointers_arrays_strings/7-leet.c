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
	char *ptr = str;
	char *leet = "aAeEoOtTlL";
	char *leet_X = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet[i] != '\0'; i++)
		{
			if (*ptr == leet[i])
			{
				*ptr = leet_X[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
