#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 *		- Followed by a new line
 * @separator: Separates numbers
 * @n: Numbers of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int j;
	int y;

	va_start(nums, n);

	for (j = 0; j < n; j++)
	{
		y = va_arg(nums, int);

		printf("%d", y);

		if (separator != NULL && j != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
