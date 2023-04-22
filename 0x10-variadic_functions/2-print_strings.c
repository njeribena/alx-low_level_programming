#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 *		Followed by a new line
 * @separator: separates the strings
 * @n: Number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str;

	va_list strs;

	va_start(strs, n);


	for (k = 0; k < n; k++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && k != (n - 1))
			printf("%s", separator);
	}
	va_end(strs);
	printf("\n");
}
