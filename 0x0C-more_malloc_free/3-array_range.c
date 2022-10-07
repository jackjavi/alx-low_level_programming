#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates and returns array of integers
 * @min: minimum value in array
 * @max: maximum value in the array
 *
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * (sizeof(int)));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
