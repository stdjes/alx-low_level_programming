#include <stdio.h>

/**
 * main - start point of program
 * this program prints it's name when run
 *
 * @_argc: holds the arguments counter
 * @_argv: argument value place holder
 *
 * Return: 0 (Success)
 */
int main(int _argc, char **_argv)
{
	if (_argc == 1)
		printf("%s\n", _argv[0]);
	return (0);
}
