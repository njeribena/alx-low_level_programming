#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a node is added to the beginning of list_t
 * @head: pointer to head node
 * @str: String to be added
 * Return: Adress of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *newel = malloc(sizeof(list_t));

	if (newel == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	newel->str = strdup(str);
	newel->len = len;
	newel->next = *head;

	*head = newel;

	return (newel);
}
