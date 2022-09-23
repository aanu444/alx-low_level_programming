#include "main.h"

/**
 * print_most_numbers - prints from 0 t0 9 not 2 qnd 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
