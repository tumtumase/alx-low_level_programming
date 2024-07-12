#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
