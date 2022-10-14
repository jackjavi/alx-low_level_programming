#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - variadic function to print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers to be passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator == NULL || i == n)
			continue;
		printf("%c ", *separator);
	}
	printf("\n");
	va_end(ap);
}
