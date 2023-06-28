#include "main.h"

/**
 * puts - prints a string followed by a new line to stdout
 * @str: the string to be printed.
 */
void _puts(char *str)
{
    if (str == NULL)
        return;

    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
