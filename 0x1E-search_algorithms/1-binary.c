#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using Binary Search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid, i;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        /* Print the current subarray being searched */
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        /* Calculate the middle index */
        mid = left + (right - left) / 2;

        /* Check if the value is at the middle */
        if (array[mid] == value)
            return (mid);

        /* If the value is greater, ignore the left half */
        if (array[mid] < value)
            left = mid + 1;
        /* If the value is smaller, ignore the right half */
        else
            right = mid - 1;
    }

    /* Value not found */
    return (-1);
}
