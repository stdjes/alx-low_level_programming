#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - funtion that returns the length of a string.
 *
 * @s: the string to be measured.
 *
 * Return: the cummulative length of the string after recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
