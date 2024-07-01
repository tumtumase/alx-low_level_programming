#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */
int main(void)
{
	char password[7];
	int i, sum = 0, diff, a;

	srand(time(NULL));

	for (i = 0; i < 5; i++)
	{
		a = rand() % 74 + 48;
		if (a >= 48 && a <= 57)
			password[i] = a;
		else if (a >= 65 && a <= 90)
			password[i] = a;
		else
			password[i] = a;
		sum += password[i] - '0';
	}

	diff = sum - 2772;
	if (diff > 0)
		password[i] = diff;
	else
		password[i] = 2772 - sum;

	password[i + 1] = '\0';

	printf("%s", password);
	return (0);
}
