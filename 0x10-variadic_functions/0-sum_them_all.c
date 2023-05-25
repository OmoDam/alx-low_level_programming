#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed to the function
 * @...: A variable that indicates additional arguments
 * Return: 0 if n == 0
 *         Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add_all;
	unsigned int i, sum = 0;

	va_start(add_all, n);

	for (i = 0; i < n; i++)
		sum += va_arg(add_all, int);

	va_end(add_all);

	return (sum);
}
