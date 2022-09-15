#include "main.h"

/**
 * largest_number - returns the largets of 3 numbers
 * @a: first int
 * @b: second int
 * #c: third int
 *Return: largest number of the three
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else
	{
		largest = b;
	}
	return (largest);
}	
