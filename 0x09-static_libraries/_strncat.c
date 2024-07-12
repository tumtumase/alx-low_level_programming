#include "main.h"

/**
 * _strncat - concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to concatenate
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
