#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int w;
	int q;


	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	q = 0;
	while (src[q] != '\0')
	{
		dest[w] = src[q];
		w++;
		q++;
	}

	dest[w] = '\0';
	return (dest);
}
