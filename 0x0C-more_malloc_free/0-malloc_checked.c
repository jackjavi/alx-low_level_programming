#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit (98);

	return (str);
}
