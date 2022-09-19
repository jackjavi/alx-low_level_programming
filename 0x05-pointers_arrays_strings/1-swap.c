#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the variable to be swapped value.
 * @b: pointer to the variable to be swapped value.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
