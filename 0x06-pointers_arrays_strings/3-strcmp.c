#include "main.h"
#include <string.h>
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * Return: if str1 < str2, negative difference
 * 	   if str1 == str2, 0
 * 	   if str1 > str2. positive difference
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1,s2);
	return(result);
}
