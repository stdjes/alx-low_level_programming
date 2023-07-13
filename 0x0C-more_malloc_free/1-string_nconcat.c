#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up n bytes
 *
 * @s1: destination string
 * @s2: source string to be copied
 * @n: the number of characters from the source string to be concatenated
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int r = 0, c = 0;
	char *newStr;
	unsigned int strlen1, strlen2;

	if (s1 != NULL) /* Calculate the lengths of s1 and s2 */
		strlen1 = strlen(s1);
	if (s2 != NULL)
		strlen2 = strlen(s2);
	if (s1 == NULL)/* detects and truncates NULL string pointer */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen2) /* Perform memory allocation based on conditions */
		newStr = malloc((strlen1 + strlen2 + 1) * sizeof(char));
	else if (n < strlen1)
		newStr = malloc((strlen1 + n + 1) * sizeof(char));
	else
		newStr = malloc((strlen1 + n + 1) * sizeof(char));
	if (newStr == NULL) /* Check if memory allocation failed */
		return (NULL);
	if (s1 != NULL) /* Copy characters from s1 to newStr */
	{
		while (r < strlen1 && s1[r] != '\0')
		{
			newStr[r] = s1[r];
			r++;
		}
	}
	if (s2 != NULL) /*Copy characters from s2 to newStr up till n*/
	{
		while (c < n && s2[c] != '\0')
		{
			newStr[r] = s2[c];
			r++;
			c++;
		}
	}
	newStr[r] = '\0'; /* Add the null terminator to the end of newStr */
	return (newStr);
	free(newStr); /* free newStr for efficiency */
}
