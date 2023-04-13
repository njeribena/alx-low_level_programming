#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function to allocate space using malloc
 * @b: Size to be allocated
 * Return: Pointer to the allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
