#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalizes the first letter of each word in a string
 *
 * @str: string to be capilized
 *
 * Return: (str) the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int cap_alpha; /*indicates if the next character should be capitalized*/

	for (i = 0; str[i] != '\0'; i++)
	{
		/*check if the current character is a separator*/
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_alpha = 1;  /*activate capitalization of next character*/
		}

		/*check if the current character is an alphabet and capitalizes it*/
		else if (cap_alpha && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);  /*Capitalize the character at index i*/
			cap_alpha = 0; /*deactivate capitalization of next character*/
		}
		else
		{
			cap_alpha = 0;  /*deactivates if capitalization is needed*/
		}
	}

	return (str);
}
