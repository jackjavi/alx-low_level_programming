#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to fill the array memory
 *
 * Return: pointer to an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	arr = (char *)malloc(size * sizeof(char));
	if (size > 0)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}

		return (arr);
	}
	else
		return (NULL);

	free(arr);
}
