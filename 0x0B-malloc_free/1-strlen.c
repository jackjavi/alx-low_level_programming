#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of.
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
