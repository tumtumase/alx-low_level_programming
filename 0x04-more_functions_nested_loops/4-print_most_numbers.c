#include "main.h"

/**
 * print_most_numbers - prints 0-9 except 2 and 4, followed by new line
 * You can only use _putchar twice in your code
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
