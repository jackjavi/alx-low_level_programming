#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * s of any pf the bytes in the string accept
 * @s: string to be cheecked for the occurrence of any
 * bytes in the string accept
 * @accept: bytes to be checked in string s
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
