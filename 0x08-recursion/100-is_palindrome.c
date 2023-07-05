#include "main.h"
#include <stdio.h>

int pal_detect(char *s, int i, int len);
int _strlen_recursion(char *s);
int is_palindrome(char *s);


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: variable of the string to be reversed
 *
 * Return: 1 if palindrom, otherwise return 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_detect(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * pal_detect - checks the characters of the string recursively for palindrome
 * @s: string to be checked
 * @i: recursion counter
 * @lenstr: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int pal_detect(char *s, int i, int lenstr)
{
	if (*(s + i) != *(s + lenstr - 1))
		return (0);
	if (i >= lenstr)
		return (1);
	return (pal_detect(s, i + 1, lenstr - 1));
}
