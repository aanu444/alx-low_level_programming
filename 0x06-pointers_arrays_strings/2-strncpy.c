#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies at most an inputted number of bytes
 * @dest: param1
 * @src: param2
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
