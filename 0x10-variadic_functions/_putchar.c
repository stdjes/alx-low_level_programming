#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: (Success) 1 if the character was written successfully.
 *         (Error)   -1 in case of error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
