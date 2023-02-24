#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: Prints numbers 0 to 9 skipping 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;

		_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
