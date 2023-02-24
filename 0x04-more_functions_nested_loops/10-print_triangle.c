#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 *
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int tri, index;

	if (size > 0)
	{
		for (tri = 1; tri <= size; tri++)
		{
			for (index = size - tri; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < tri; index++)
				_putchar('#');

			if (tri == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
