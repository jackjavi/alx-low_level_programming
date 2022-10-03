#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * #s: The string to get the length of.
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

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string str.
 * @str: string to be duplicated
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i;
	char *str2;
	int size;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	str2 = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
