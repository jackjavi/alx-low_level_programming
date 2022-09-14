#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @c - The number to be checked if positive or negative.
 *
 * Return - Return 1 if positive, 0 if zero and -1 if negative.
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return 1;
}
