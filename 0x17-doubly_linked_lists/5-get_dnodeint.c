#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The address of the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0; /* Counter for the current index */
    dlistint_t *current = head; /* Pointer to traverse the list */

    while (current != NULL)
    {
        if (count == index) /* Check if current index matches the desired index */
            return current; /* Return the current node */

        current = current->next; /* Move to the next node */
        count++; /* Increment the index counter */
    }

    return NULL; /* If we reach here, the index does not exist */
}
