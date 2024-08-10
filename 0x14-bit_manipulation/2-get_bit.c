#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to check
 * @index: The index of the bit to get, starting from 0
 *
 * Return: The value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is within the range of unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Create a mask with only the bit at the given index set to 1 */
	mask = 1UL << index;

	/* Check if the bit at the index is set in n */
	if (n & mask)
		return (1);
	else
		return (0);
}
