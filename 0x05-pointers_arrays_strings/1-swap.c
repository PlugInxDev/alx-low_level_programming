#include "main.h"
/**
 * swap-int - swap two integers
 * @a: firs integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
