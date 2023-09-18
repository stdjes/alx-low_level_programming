#include "main.h"
#include <stdio.h>

/**
 * _strstr - this function locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: NULL, if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
