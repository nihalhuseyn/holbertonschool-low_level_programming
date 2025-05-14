#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - check the code
 * @h: head
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
