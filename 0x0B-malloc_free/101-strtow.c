#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * word_detect - a secondary function to count the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: The number of words.
 */
int word_detect(char *str)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	/* Iterate through the characters of the string */
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words) on success.
 *         NULL on error or if str is an empty string.
 */
char **strtow(char *str)
{
	char **wordStr, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	/* Calculate the length of the input string */
	while (*(str + len))
		len++;
	words = word_detect(str);

	/* Return NULL if the string is empty or contains no words */
	if (words == 0)
		return (NULL);

	/* Allocate memory for the array of words */
	wordStr = (char **)malloc(sizeof(char *) * (words + 1));
	if (wordStr == NULL)
		return (NULL);

	i = 0;
	/* Extract and store each word in the array */
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				/* Allocate memory for the current word */
				temp = (char *)malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
				{
					/* Free memory if allocation fails */
					for (k = 0; k < words; k++)
						free(wordStr[k]);
					free(wordStr);
					return (NULL);
				}
				/* Copy the characters of the word */
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				/* Store the word in the array */
				wordStr[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;

		i++;
	}

	wordStr[k] = NULL; /* Set the last element of the array to NULL */

	return (wordStr);
	free(wordStr);
}
