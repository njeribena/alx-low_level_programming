#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory from an array
 * @nmemb: Number of elements
 * @size: Size of bytes
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		arr[j] = 0;

	return (arr);
}
