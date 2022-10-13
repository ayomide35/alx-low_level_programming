#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - compute sum of parameters
 * @n: number of parameters
 * Return: sum (integer)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);

	return (sum);
}
