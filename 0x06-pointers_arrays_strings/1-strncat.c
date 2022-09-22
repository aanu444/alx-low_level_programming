#include "main.h"

/**
 * _strncat - Concat two strings using at most
 * @dest: the string to be appended upon
 * @src: The string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0; j = 0;

	while (dest[len])
	{
		len++;
	}
	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
