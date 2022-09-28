#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to
 * the power of y
 * @x: the base value
 * @y: the exponent
 *
 * Return: the power of x and y;
 */
int _pow_recursion(int x, int y)
{
	int result;

	result = 1;
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		result *= x;
		result *= _pow_recursion(x, y - 1);
	}
	return (result);
}
