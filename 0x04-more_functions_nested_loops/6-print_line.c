#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: Number of times the character _ should be printed.
 */
void print_line(int n)
{
	char i = '_';
	int j;

	for (j = 0; j <= n; j++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(i);
	}

	_putchar('\n');
}
