#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <unistd.h>


/**
 * _putchar - alternative funtion for putchar, writes to stdout
 *
 * @c: - variable to be written to  stdout
 *
 * Return: on success, 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
#endif /* MAIN_H_INCLUDED */
