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
		if (num == 2 || num ==4)
			break;
		else
			_putchar(num);

	_putchar('\n');
}
