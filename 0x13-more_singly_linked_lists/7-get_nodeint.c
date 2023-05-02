#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a certain index in a linked list
 * @head: first node
 * @index: index of the node to return
 *
 * Return: pointer to the node to be indexed, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp = head;

	while (tmp && n < index)
	{
		tmp = tmp->next;
		n++;
	}
	return (tmp ? tmp : NULL);
}
