#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Test case 1: Search for a value that exists in the array */
    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));

    /* Test case 2: Search for a value that exists multiple times in the array */
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));

    /* Test case 3: Search for a value that does not exist in the array */
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

    return (EXIT_SUCCESS);
}
