#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: string
 */

void print_rev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
