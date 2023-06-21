#include "main.h"
/**
 * _abs - fuctions that returns absolute value
 * @i: variable for interger value
 *
 * Return: returns absolute value despite signage
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else 
		return (i);
}
