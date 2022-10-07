#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements to allocate into array
 * @size: size of each element in bytes
 *
 * Return: A pointer to the allocated memory;
 * Otherwise NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
