#include "main.h"

/**
 * jack_bauer - Entry point (Prints every seconds of Jack bauer)
 *
 * Return: Returns nothing
 */

void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min =0; min <= 59; min++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
