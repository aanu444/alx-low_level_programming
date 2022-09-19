#include "main.h"

/**
 * prints_rev - prints a string in reverse order
 * @s: A pointer to an int that will be changed
 * Return: void which means out answer is correct
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
}
