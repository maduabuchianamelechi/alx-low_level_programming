#include <unistd.h>

/**
 * _putchar - Prints the value c to standard output
 *
 * @c: The valuse to be printed
 *
 * Return: Returns 1 on success and -1 on error
 */

int _putchar(char c)
{
	int result;

	result = write(1, &c, 1);

	return (result);
}
