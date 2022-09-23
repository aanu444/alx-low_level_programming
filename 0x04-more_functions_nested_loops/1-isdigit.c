#include "main.h"
/**
 * is_digit - checks if number passed as an argument is a digit
 * @value: arguemnt to be checked
 * Return: returns 1 if successful or 0 if otherwise
 */
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
