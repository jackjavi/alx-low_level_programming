#include "search_algos.h"
/**
 * binary_search - searches for a value in
 *     a sorted array of integers using the Binary search algorithm.
 * @array: a pointer to the first element of the arrat to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: if the value is not present or the array is NULL, -1.
 *     Otherwise, the index where the value is located.
 *
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);
		printf("\n");

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
