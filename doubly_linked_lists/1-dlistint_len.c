#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked `dlistint_t` list.
 * @h: address of the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int  number_of_elements = 0;

	while (h)
	{
		h = h->next;
		number_of_elements++;
	}

	return (number_of_elements);
}
