#include "lists.h"
#include "stdlib.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 * @head: pointer to the head pointer of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!index && *head)
	{
		*head = (*head)->next;
		free(temp);

		if (*head)
		(*head)->prev = NULL;

		return (1);
	}

	while (i < index && temp)
		temp = temp->next, i++;

	if (!temp)
		return (-1);
	if (temp->next)
	(temp->next)->prev = temp->prev;

	if (temp->prev)
	(temp->prev)->next = temp->next;

	free(temp);

	return (1);
}
