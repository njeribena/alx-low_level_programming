#include <stdio.h>

/**
 * _memcpy - copies a memory area
 * @n: Bytes to be copied from the memory area
 * @src: The memory area
 * @dest: Another memory area
 * Return: A pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned long int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
