#include "main.h"
#include <string.h>
/**
 * _strncpy - Copies at most an inputted number of bytes
 * @dest: the buffer storing the string copy
 * @src: the source string
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest)
}
