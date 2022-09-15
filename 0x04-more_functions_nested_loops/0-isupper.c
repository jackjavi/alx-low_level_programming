#include "main.h"

/**
 * _isupper - Function to check if character is uppercase.
 * @c: character to be checked.
 *
 * Return: 1 if uppercase and 0 if not.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);

	return (0);
}
