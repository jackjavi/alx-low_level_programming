#include "main.h"

/**
 * more_numbers - Prints ten times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}

		_putchar('\n');
		i++;
	}
