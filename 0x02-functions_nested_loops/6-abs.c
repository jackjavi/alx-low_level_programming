#include "main.h"

/**
 * _abs - Function that computes the absolute vallue of an integer.
 * @a: The integer to be computed.
 *
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
