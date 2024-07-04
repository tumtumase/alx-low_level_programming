#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int sum;
	int i, j, k;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	r[k] = '\0';
	k--;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (k < 0)
			return (0);

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k--;
	}

	return (&r[k + 1]);
}
