#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int j;
	int n = (max - min + 1);

	if (min > max) /* validate input */
		return (NULL);

	/* malloc and check for error */
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	/* set values */
	for (j = 0; j < n; j++)
		ptr[j] = min++;

	return (ptr);
}
