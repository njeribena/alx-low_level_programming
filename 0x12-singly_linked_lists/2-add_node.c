#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node is added at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to be added in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newN;
	unsigned int l = 0;

	while (str[l])
		l++;
	newN = malloc(sizeof(list_t));
	if (!newN)
		return (NULL);
	newN->str = strdup(str);
	newN->l = l;
	newN->next = (*head);
	(*head) = newN;
	return (*head);
}
