#include "main.h"
/**
 * print_line - print a straight line
 * @n: is the no of times the character should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
