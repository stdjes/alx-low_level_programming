#include <stdio.h>

/**
 * main - start point of program
 * this program prints all the argumets passed on to it on execution
 *
 * @_argc: holds the arguments counter
 * @_argv: argument value place holder
 *
 * Return: 0 (Success)
 */
int main(int _argc, char **_argv)
{
	int i = 0;

	while (i < _argc)
	{
		printf("%s\n", _argv[i]);
		i++;
	}
	return (0);
}
