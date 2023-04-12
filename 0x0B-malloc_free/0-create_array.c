#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to create an array of chars
 * @size: size of array
 * @c: initializing character
 * Return: pointer to an array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int j;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ptr[j] = c;
	return (ptr);
}
