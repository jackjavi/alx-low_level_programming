#include "main.h"
#include <string.h>

/**
 * _strspn - counts and returns no. of bytes
 * @s: initial string
 * @accept: bytes to be checked in s
 *
 * Return: number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
