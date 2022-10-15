#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *num;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		num = va_arg(ap, char*);
		if (num == NULL)
			printf("(nil)");
		printf("%s", num);
		if (separator == NULL || i == n)
			continue;
		printf("%s ", separator);
	}
	printf("\n");
	va_end(ap);
}
