#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to match
 *
 * Return: Number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (count);
}
