#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *last = *head; /* Pointer to traverse the list */

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;       /* Set the value of the new node */
    new_node->next = NULL; /* New node will be the last node, so next is NULL */

    if (*head == NULL) /* If the list is empty */
    {
        new_node->prev = NULL; /* New node will be the first node */
        *head = new_node;      /* Update head to point to the new node */
        return (new_node);
    }

    /* Traverse to the last node */
    while (last->next != NULL)
        last = last->next;

    last->next = new_node; /* Link previous last node to new node */
    new_node->prev = last;  /* Link new node back to last node */

    return (new_node); /* Return address of the new element */
}
