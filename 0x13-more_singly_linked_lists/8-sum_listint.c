#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a linked list
 * @head: Pointer to the first node in the list
 *
 * Return: Sum of all the data (n) in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
