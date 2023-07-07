#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int _isdigit(int c);
int detect_num(char *str);
/**
 * main - Print the name of the program
 * @_argc: Count arguments
 * @_argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int _argc, char *_argv[])

{

	/*Declaring variables*/
	int i;
	int num;
	int sum = 0;

	i = 1;
	while (i < _argc) /*Goes through the whole array*/
	{
		if (detect_num(_argv[i]))

		{
			num = atoi(_argv[i]); /*ATOI --> convert string to int*/
			sum += num;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum); /*print calculated sum*/

	return (0);
}
/**
 * detect_num - check if the string contains all digits
 * @str: array containing string to be checked
 *
 * Return: Always 0 (Success)
 */
int detect_num(char *str)
{
	/*Declaring variables*/
	unsigned int i;

	i = 0;
	while (i < strlen(str)) /*iterate string index*/

	{
		if (!_isdigit(str[i])) /*check if char at index i is a digit*/
		{
			return (0);
		}

		i++;
	}
	return (1);
}
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
}
