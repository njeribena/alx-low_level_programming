#include <stdio.h>

/**
 * main - print the name of the file it was compiled from followed by a newline
 *
 * Return: always zero(success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
