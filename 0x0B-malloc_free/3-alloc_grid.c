#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2 dimensional arrays of int
 * @width: Width
 * @height: Height
 * Return: Pointer to an array of pointers
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (a = 0; a < height; a++)
				free(ptr[a]);
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}
	return (ptr);
}
