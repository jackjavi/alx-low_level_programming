#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements to be searched
 * @size: size of the array
 * @cmp: pointer function
 *
 * Return: first index of the first element for which
 * the cmp function does not return 0.
 * -1 if otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			ret = (*cmp)(array[i]);
			if (ret != 0)
				break;
		}
		return (i);
	}
	else
		return (-1);

	return (-1);
}
