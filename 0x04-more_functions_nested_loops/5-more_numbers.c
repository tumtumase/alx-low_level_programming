#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 0 to 14, followed by new line
 * You can only use _putchar three times in your code.
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
