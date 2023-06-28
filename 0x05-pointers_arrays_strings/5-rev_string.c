#include "main.h"
#include <stdio.h>

/**
 * rev_string - fucntion to reverse a string
 * @s: array of string to be reversed
 */
void rev_string(char *s)
{
	int l;
	char srev;
	int b; /*beginning of string at 0*/

	if (s == NULL)
		return;

	l = 0;
	while (s[l] != '\0') /*calculate length of string*/
		l++;

	/*
	 * loop Swaps characters from the beginning and end of the string
	 * swapping end at mid point l/2
	 */
	b = 0;
	while (b < l / 2)
	{
		srev = s[b];
		s[b] = s[l - 1 - b];
		s[l - 1 - b] = srev;
		b++;
	}
}
