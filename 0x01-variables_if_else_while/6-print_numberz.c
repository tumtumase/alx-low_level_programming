#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 0;

    while (num < 10)
    {
        putchar(num + '0'); // Convert integer to corresponding ASCII character
        num++;
    }
    putchar('\n'); // Print newline character at the end
    return (0);
}
