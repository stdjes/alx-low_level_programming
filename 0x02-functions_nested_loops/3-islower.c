#include "main.h"

/**
 * _islower - checks if the alphabet is lowercase
 * @c: is the variable for the alphabet
 *
 * Return: 1 on sucess else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
