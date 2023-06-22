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
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
#endif /* MAIN_H_INCLUDED */
