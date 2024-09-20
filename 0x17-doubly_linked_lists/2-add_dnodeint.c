#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;       /* Set the value of the new node */
    new_node->prev = NULL; /* New node will be the first node, so prev is NULL */
    new_node->next = *head; /* Link to the current head */

    if (*head != NULL) /* If the list is not empty */
        (*head)->prev = new_node; /* Set the previous head's prev to new node */

    *head = new_node; /* Update head to point to the new node */

    return (new_node); /* Return address of the new element */
}
