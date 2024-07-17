#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];

	(void)argc;

	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');

	return (0);
}
