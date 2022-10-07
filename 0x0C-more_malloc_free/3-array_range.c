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
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max + 1) * (sizeof(int)));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
