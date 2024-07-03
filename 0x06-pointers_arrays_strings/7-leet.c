#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
	int i, j;
	char *leet_chars = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == 'a' || str[i] == 'A')
				str[i] = leet_chars[0];
			else if (str[i] == 'e' || str[i] == 'E')
				str[i] = leet_chars[1];
			else if (str[i] == 'o' || str[i] == 'O')
				str[i] = leet_chars[2];
			else if (str[i] == 't' || str[i] == 'T')
				str[i] = leet_chars[3];
			else if (str[i] == 'l' || str[i] == 'L')
				str[i] = leet_chars[4];
		}
	}

	return (str);
}
