#include "lists.h"

/**
 * listint_len - returns the numbers elements included in a linked list
 * @head: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t number = 0;

	while (head)
	{
		number++;
		head = head->next;
	}
	return (number);
}
