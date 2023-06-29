#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int len = 0;
	int sign = 1;

	/* Check if the string is NULL. */
	if (s == NULL)
		return (0);

	/* Iterate through the string and count the number of characters. */
	while (s[len] != '\0')
		len++;

	/* Iterate through the string and convert the digits to an integer. */
	while (i < len)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');

			/**
			 * Break out of the loop if we have reached the end of the string
			 * or if we have encountered a non-digit character.
			 *
			 */
			if (i + 1 == len || (s[i + 1] < '0' || s[i + 1] > '9'))
				break;
		}
		i++;
	}

	return (sign * n);
}
