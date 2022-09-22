#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', '0', 'T', 'L'};
	char tw[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;

		while (b < l)
		{
			if (x[a] == tr[b] || x[a] - 32 == tr[b])
				x[a] = trw[b];
			b++;
		}
		a++;
	}
	return (x);
}
