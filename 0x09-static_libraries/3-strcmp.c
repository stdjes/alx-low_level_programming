#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function to compares two strings s1 and s2
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if s1 > s2 and -1 if s1 < s2, 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (-1);
	else
		return (1);
}
