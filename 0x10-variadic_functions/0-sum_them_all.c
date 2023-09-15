#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Returns the sum of all its parameters.
 * @n - the number of parameters passed to the fn.
 * @... - variable number to calculate the sum.
 *
 * Return: if n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list allp;
	unsigned int a, sum = 0;

	va_start(allp, n);

	for (a = 0; a < n; a++)
		sum += va_arg(allp, int);

	va_end(allp);
	return (sum);
}
