#include <stdio.h>

/* Function with the constructor attribute */
void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Prints messages before the main function is executed.
 *
 * Description: This function is annotated with the constructor attribute,
 * this is a default utility within the  C program which enables a funtion
 * to be executed automatically before the main function is called.
 * It prints two messages to the console.
 * Return: void (no return value)
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
