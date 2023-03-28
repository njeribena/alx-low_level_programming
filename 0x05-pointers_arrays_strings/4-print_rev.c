#include "main.h"

/**
* print_rev - prints a string, in reverse
* @s: The string being printed in reverse
* Return: ()
*/

void print_rev(char *s)
{
	int a, count = 0;

	while (*s != '\0')
	{
		count++;
		++s;
	}

	s--;

	for (a = count; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
