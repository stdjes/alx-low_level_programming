#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: main string variable
 * @accept: prefix substring
 *
 * Return: number bytes in the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int p;


	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				n++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
