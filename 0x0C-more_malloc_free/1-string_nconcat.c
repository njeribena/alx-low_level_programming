#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates to string
 * @s1: String 1 to append to
 * @s2: String 2 to concatenate from
 * @n: Bytes of s2
 * Return: Pointer to a character string space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j > n)
		k = a + n;
	else
		k = a + j;

	ptr = malloc(k * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];

	for (j = 0; s2[j] != '\0' && ((a + j) < k); j++)
		ptr[a + j] = s2[j];
	ptr[a + j] = '\0';

	return (ptr);
}
