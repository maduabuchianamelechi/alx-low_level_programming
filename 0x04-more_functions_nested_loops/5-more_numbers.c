#include "main.h"

/**
 * more_numbers - Print numbers 0-14 ten times
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int num;
	int ch;

	for (num = 0; num <= 10; num++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch > 9)

				_putchar((ch / 10) + '0');
			_putchar((ch % 10) + '0');
		}

		_putchar('\n');
	}
}
