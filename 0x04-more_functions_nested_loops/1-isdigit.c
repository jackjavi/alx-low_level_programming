#include "main.h"

/**
 * _isdigit - Function that checks if character is a digit.
 * @c: character to be checked.
 *
 * Return: 1 if isdigit and 0 if not.
 */
int _isdigit(int c)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}

	return (0);
}
