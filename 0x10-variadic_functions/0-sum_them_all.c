#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function returns the sum of all its parameters
 * @n: Number of arguments
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n is 0 the return 0
 *         or return the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int b, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (b = 0; b < n; b++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
