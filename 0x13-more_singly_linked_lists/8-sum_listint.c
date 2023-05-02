#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns sum of all the data
 * @head: Pointer to the head of the listint_t
 * Return: Sum of all n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
