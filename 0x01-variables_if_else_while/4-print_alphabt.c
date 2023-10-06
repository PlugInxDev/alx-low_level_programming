#include <stdio.h>

/**
 * main - ntry point
 *
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchr('\n');
	return (0);
}
