#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates an array of strings into a single string.
 * @ac: The number of strings in the array.
 * @av: The array of strings.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, argLen = 0, totalLen = 0;
	char *argStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			argLen++;
	}
	totalLen = argLen + ac;

	/* Allocate memory for the concatenated string */
	argStr = malloc(sizeof(char) * (totalLen + 1));
	if (argStr == NULL)
		return (NULL);

	argLen = 0;
	/* Copy the strings and add newline characters */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			argStr[argLen] = av[i][j];
			argLen++;
		}
		if (argStr[argLen] == '\0')
		{
			argStr[argLen++] = '\n';
		}
	}
	return (argStr);
	free(argStr);
}
