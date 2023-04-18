#include <stdio.h>

/**
 * main - print he name of the file it was compiled from followed by a newline
 *
 * Return: always zero
 */
int main(void)
{
	printf("%s\n", _FILE_);

	return(0);
}
