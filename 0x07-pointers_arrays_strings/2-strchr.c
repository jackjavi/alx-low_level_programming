#include "main.h"

/**
 * _strchr - locates and returns a pointer to the
 * first occurrence of char c in the string s
 * @s: string to be checked
 * @c: the char to be searched
 *
 * Return: a pointer to the first occurrence of char c.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
		return (s + i);
		}

		i++;
	}

	return ('\0');
}
