#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that duplicates an array to a new memory allocation
 *
 * @str: char array to be duplicated
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *newStr;
	int i;
	int size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);

	newStr = malloc(sizeof(char) * size + 1);

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		newStr[i] = str[i];

	newStr[size] = '\0';

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
	int l; /* length counter */

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	return (l);
}
