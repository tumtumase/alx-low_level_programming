#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed or if it is not possible
 * to add the new node at index idx.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int count = 0;

	/* Create a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;

	/* If inserting at the head (index 0) */
	if (idx == 0)
	{
		new_node->next = *h; /* Link to current head */
		new_node->prev = NULL; /* New node will be the first node */

		if (*h != NULL) /* If list is not empty */
			(*h)->prev = new_node; /* Set previous head's prev to new node */

		*h = new_node; /* Update head to point to new node */
		return (new_node);
	}

	/* Traverse to the position just before the desired index */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	/* If current is NULL, idx is out of bounds */
	if (current == NULL)
	{
		free(new_node); /* Free allocated memory for new node */
		return (NULL);
	}

	/* Insert the new node in its position */
	new_node->next = current->next; /* Link to next node */
	new_node->prev = current; /* Link back to current node */

	if (current->next != NULL) /* If not inserting at the end */
		current->next->prev = new_node; /* Set next node's prev to new node */

	current->next = new_node; /* Link current node to new node */

	return (new_node); /* Return address of the newly added node */
}
