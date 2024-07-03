#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[100]; // Assume maximum length for the password
    int sum = 0;
    int index = 0;
    int ascii_value;

    srand(time(0)); // Seed the random number generator

    while (sum < 2772)
    {
        ascii_value = rand() % 94 + 33; // ASCII values from '!' (33) to '~' (126)
        password[index++] = (char)ascii_value;
        sum += ascii_value;
    }

    password[index] = '\0'; // Null-terminate the string

    printf("%s\n", password);

    return (0);
}

