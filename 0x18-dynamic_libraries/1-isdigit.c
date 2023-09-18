#include "main.h"

/**
 * _isdigit - this function checks if input is a  digit or not
 * @c: variable holder for this function
 *
 * Return: 1 for interger, 0 for non-integer.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{

		c = -c;
		return (1);
	}
	else
		return (0);
	return (0);

}
