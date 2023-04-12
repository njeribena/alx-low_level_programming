#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new space
 * @str: String to be allocated to new space
 * Return: Pointer to a character array
 */

char *_strdup(char *str)
{
	unsigned int j;
	char *str2;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		;
	str2 = malloc((j * sizeof(char)) + 1);
	if (str2 == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		str2[j] = str[j];
	return (str2);
}
