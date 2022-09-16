#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line.
 * @size: Size of the triangle.
 */
void print_triangle(int size)
{
	int width, height;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = size - height; width > 0; width--)
				_putchar(' ');
			for (width = 0; width < height; width++)
				_putchar('#');

			if (height == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
