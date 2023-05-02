#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deleting the head node of a linked list
 * @head: pointer to first element
 *
 * Return: the data within the elements that was deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);
}
