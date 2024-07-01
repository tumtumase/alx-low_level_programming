#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			if (result > 2147483647 && sign == 1)
				return (2147483647);
			if (result > 2147483648 && sign == -1)
				return (-2147483648);
		}
		else if (result > 0)
			break;
		s++;
	}

	return (result * sign);
}
