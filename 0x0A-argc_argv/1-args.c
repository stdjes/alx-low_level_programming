#include <stdio.h>

/**
 * main - start point of program
 * this program prints the number count of arguments passed to it.
 *
 * @_argc: holds the arguments counter
 * @_argv: argument value place holder
 *
 * Return: 0 (Success)
 */
int main(int _argc, char **_argv)
{
(void) _argv; /*Ignore argv to enable program run without errors*/
	printf("%d\n", _argc - 1);
	return (0);
}
