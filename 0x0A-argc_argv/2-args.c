#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: arguments it recieves
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
