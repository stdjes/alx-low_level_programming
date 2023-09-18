#include "main.h"

/**
 * _isupper - checks/detects if a character is uppercase
 * @c: character variable to be checked
 *
 * Return: 0 if lower false or 1 if true
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
