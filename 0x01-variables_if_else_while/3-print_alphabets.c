#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphebet in lower case and upper case
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* Prints lowercase alphabets*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* Prints uppercase alphabets */
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
