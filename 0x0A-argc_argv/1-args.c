#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguements passed
 * @argc: number of arguments
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

