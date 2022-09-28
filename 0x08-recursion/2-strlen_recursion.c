#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns length of a string
 * @s: the string whose length is to be returned
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
