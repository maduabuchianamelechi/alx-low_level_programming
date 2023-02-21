#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints alphabets 10 times
 *
 * Return: returns noothing (void)
 */

void print_alphabet_x10(void)
{
	int ch;
	int cnt;

	for (cnt = 0; cnt <= 10; cnt++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	_putchar('\n');
}
