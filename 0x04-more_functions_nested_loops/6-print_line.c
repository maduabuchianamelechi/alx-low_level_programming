#include "main.h"

/**
 * print_line - Prints a line on the terminal
 *
 * @n: Length of the line
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int count;

	if (n > 0)
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
