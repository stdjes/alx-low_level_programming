#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: takes the input character
 *
 * Return: 1 for true and 0 for false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
