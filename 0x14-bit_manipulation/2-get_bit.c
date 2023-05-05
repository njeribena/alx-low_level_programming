#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index:the index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	unsigned int max_bits;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* shift number index places right to find b */
	b = ((n >> index) & 1);

	return (b);
}
