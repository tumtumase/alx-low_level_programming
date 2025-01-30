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
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    /* Test case 1: Search for a value that exists in the array */
    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));

    /* Test case 2: Search for a value that exists within a subarray */
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));

    /* Test case 3: Search for a value that does not exist in the array */
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));

    return (EXIT_SUCCESS);
}
