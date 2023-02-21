#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Prints all the alphabets in lower case
 *
 * Return: Returns Nothing.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
