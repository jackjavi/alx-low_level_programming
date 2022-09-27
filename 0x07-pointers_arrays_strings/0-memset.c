#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: buffer to be filled with constant byte
 * @b: constant byte to fill memory
 * @n: number of the first bytes of memory to
 * be filled
 *
 *Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
