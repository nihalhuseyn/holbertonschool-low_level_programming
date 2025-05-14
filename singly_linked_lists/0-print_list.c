#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list- check the code
 * @h: head
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	char *default_str = "[0] (nil)";

	while (h)
	{
		if (h->str == NULL)
		{
			printf("%s\n", default_str);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node++;
		h = h->next;
	}
	return (node);
}
