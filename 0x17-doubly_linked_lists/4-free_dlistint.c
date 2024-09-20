#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head; /* Pointer to traverse the list */
    dlistint_t *next_node;      /* Pointer to hold the next node */

    while (current != NULL)
    {
        next_node = current->next; /* Store the next node */
        free(current);              /* Free the current node */
        current = next_node;        /* Move to the next node */
    }
}
