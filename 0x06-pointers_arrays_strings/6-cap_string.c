#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: A pointer to the changed string
 */

char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', "(", ")", "{", "}"};
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] -= 32;
			i++;
		}
		a++;
	}
	return (x);
}
