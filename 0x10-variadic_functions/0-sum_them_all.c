#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: first variable arguement
 * @...: rest of the variables
 *
 * Return: sum of arguements.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		num = va_arg(ap, int);
		sum += num;
	}
	va_end(ap);

	return (sum);
}
