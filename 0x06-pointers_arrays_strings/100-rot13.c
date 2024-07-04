#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to the string
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
	int i, j;
	char *from = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *to = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (str[i] == from[j])
			{
				str[i] = to[j];
				break;
			}
		}
	}

	return (str);
}
