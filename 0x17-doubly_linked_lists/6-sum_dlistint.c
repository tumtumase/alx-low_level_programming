#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;              /* Initialize sum to 0 */
    dlistint_t *current = head; /* Pointer to traverse the list */

    while (current != NULL)   /* Traverse through the list */
    {
        sum += current->n;    /* Add current node's n value to sum */
        current = current->next; /* Move to the next node */
    }

    return sum;               /* Return the total sum */
}
