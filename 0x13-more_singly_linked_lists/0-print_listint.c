#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @head: linked list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t number = 0;

	while (head)
	{
		printf("%d\n", head->n);
		number++;
		head = head->next;
	}
	return (number);
}
