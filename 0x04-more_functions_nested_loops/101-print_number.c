#include "main.h"
/**
 * print_number - prints an int
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;
	
	/*Negative*/
	if (n < 0)
	{
		_putchar('_');
		num = - num;
	}

	/*Positive*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*Print last digit*/
	_putchar((num % 10) + 48);
}
