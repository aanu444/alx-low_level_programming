#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - prints the given char
 * @c: the char to be printed
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _isupper - cheches for upperchase character
 * @c: the character to be checked
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: number 1
 * @b: number 2
 * Return: the multiplication result of the numbers
 */

int mul(int a , int b);

/**
 * print_numbers - prints integer from 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void);

/**
 * print_line - draws a line
 * @n: the length of the line
 */

void print_line(int n);
 /**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: the length of the line
  */

void print_diagonal(int n);

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */

void print_square(int size);

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 */

void print_triangle(int size);
void print_number(int n);
#endif
