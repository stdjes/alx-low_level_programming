#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings and stores the concatenated
 * string in a new memory allocation.
 * @s1: Pointer to the destination string.
 * @s2: Pointer to the source string.
 *
 * Return: Pointer to the resulting concatenated string (newStr).
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int totalLen = len1 + len2;
	int i, j;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	newStr = malloc((totalLen + 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newStr[i] = s1[i];

	for (j = 0; j < len2; j++)
		newStr[i + j] = s2[j];

	newStr[totalLen] = '\0';

	return (newStr);

	free(newStr);
}

/**
 * _strlen - ccounts the length of a string and returns the value
 * @s: string to be counted
 *
 * Return: value of number of string counted
 */
int _strlen(char *s)
{
	int l = 0; /* length counter */

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	return (l);
}
