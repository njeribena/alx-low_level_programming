#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Function that frees a list_t
 * @head: list to be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
