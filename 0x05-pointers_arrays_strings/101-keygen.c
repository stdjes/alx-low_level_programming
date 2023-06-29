#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * auto_gen_pswd - Generate a random password of a given length.
 * @char_length: The desired length of the password.
 *
 * Return: The generated password as a string.
 */
char *auto_gen_pswd(int char_length)
{
	char *pswd = malloc((char_length + 1) * sizeof(char));
	int i;

	if (pswd == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}

	srand(time(NULL));

	/*Generate a random ASCII character between 33, 126*/
	for (i = 0; i < char_length; i++)
	{
		pswd[i] = rand() % 94 + 33;
	}
	pswd[char_length] = '\0';

	return (pswd);
}

/**
 * main - start of program that generates a random password
 *
 * Return: 0, always sucessful
 */
int main(void)
{
	int length = 16; /*select the desired length of the password*/

	char *pswd = auto_gen_pswd(length);

	printf("Your Password is: %s\n", pswd);
	free(pswd);

	return (0);
}

