#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first int
 * @b: second int
 * c: thirdint
 * Return: 0
 */

int largest_number(inta, int b, int c)
{
	int largest;

	if (a >= b && a>= c)
	{

		largest = a;
	}
		else if (b >= a && b>= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
