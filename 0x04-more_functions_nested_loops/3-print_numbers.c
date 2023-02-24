#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Prints numbers 0 to 9
 * 
 * Return: Nothing
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');

	return (void);
}
