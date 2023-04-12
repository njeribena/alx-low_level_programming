#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: If concatenation fails - NULL
 *         Or - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int ind, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ind = 0; s1[ind] || s2[ind]; ind++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (ind = 0; s1[ind]; ind++)
		concat_str[concat_ind++] = s1[ind];

	for (ind = 0; s2[ind]; ind++)
		concat_str[concat_ind++] = s2[ind];

	return (concat_str);
}
