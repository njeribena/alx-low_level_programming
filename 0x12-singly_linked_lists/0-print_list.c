#include <stdio.h>
#include "lists.h"

/**
 * print_list - all the elements of a linked list are printed
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}
