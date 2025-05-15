#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: address of the head of the list
 * @index: index of the desired node
 *
 * Return: the nth node or if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next, i++;

		if (!head)
			return (NULL);
	}

	return (head);
}
