#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, j;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	/* find length of string */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* iterate string and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (sum);

		if (b[j] == '1')
			sum += (1 * (1 << len));
		j++;
		len--;
	}

	return (sum);
}
