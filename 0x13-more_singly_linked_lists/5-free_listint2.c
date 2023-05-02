#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - freeing a linked list
 * @head: pointer to listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
