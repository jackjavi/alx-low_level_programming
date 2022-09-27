#include "main.h"

/**
 * _memcpy - points to the memory area that
 * n bytes from mem area src are copied to
 * @dest: destination of n bytes
 * @src: where n bytes are copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the destination of n bytes.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
