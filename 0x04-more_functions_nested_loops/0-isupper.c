#include "main.h"

/**
 * _isupper - Function to check if character is uppercase.
 * @c: character to be checked.
 *
 * Return: 1 if uppercase and 0 if not.
 */

int _isupper(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (0);
		else
			return (1);
	}

	return (0);
}
