#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string with rot 13
 *
 * @s: string to be encoded
 *
 * Return: returns the encodec string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotstr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = rotstr[j];
				break;
			}
		}
	}
	return (s);
}
