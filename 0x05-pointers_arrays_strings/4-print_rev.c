#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0, i, index;

	for (i = 0; s[i] != '\0'; s++)
	{
		len++;
	}

	index = len - 1;

	for (; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
