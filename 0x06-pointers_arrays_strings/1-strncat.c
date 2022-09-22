#include "main.h"
#include <string.h>

/**
 * _strncat - Concat two strings using at most
 * @dest: the string to be appended upon
 * @src: The string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
