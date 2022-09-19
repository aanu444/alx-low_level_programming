#include "main.h"

/**
 * _strcpy - copies the string printed
 * @dest: pointer to str of destination
 * @src: pointer to str origin
 * Return: string
 */

char *_strcopy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	
	return (dest);
}

