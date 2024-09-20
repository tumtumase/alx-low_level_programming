#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	/* If the list is empty */
	if (current == NULL)
		return (-1);

	/* If deleting the head node */
	if (index == 0)
	{
		*head = current->next; /* Update head to next node */
		if (*head != NULL) /* If there is a next node */
			(*head)->prev = NULL; /* Set prev of new head to NULL */
		free(current); /* Free the old head */
		return (1);
	}

	/* Traverse to find the node to delete */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	/* If current is NULL, index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Link previous node to next node */
	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL) /* If not deleting the last node */
		current->next->prev = current->prev;

	free(current); /* Free the deleted node */

	return (1); /* Return success */
}
