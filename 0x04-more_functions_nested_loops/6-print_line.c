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
	char line = "_";

	for (count = 0; count <= n; count++)
	{
		if (n <= 0)
			continue;
		_putchar(line);
	}
	_putchar('\n');
}
