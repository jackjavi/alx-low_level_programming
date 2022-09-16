#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: The number of times character \ should be printed on the screen.
 */
void print_diagonal(int n)
{
	int len = 0, space;

	while (len < n)
	{
		if (n > 0)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
		}

		_putchar('\n');
		len++;
	}
}
