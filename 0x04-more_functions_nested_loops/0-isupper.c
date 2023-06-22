#include "main.h"

/**
 * _isupper - this function detects uppercase and lowercase letters
 * @c: variable place holder
 *
 * Return: 0 for lowercase and 1 for uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
	return (0);
}
