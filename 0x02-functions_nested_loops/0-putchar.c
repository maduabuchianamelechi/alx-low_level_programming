#include"main.h"

/**
 * main - The Entry point
 *
 * Description: This function prints _putchar using
 * 		the putchar prototype
 *
 * Return: Returns 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	
	_putchar('\n');

	return (0);
}
