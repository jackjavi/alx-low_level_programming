#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: Number of times the character _ should be printed.
 */
void print_line(int n)
{
	char i = '_';
	int len;

	if (n > 0)
	{
		for (len = 0; len <= n; len++)
			_putchar(i);
	}

	_putchar('\n');
}
