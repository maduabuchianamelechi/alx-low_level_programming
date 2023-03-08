/**
 * _putchar - Prints a character to the console
 */

void _putchar(char c)
{
	int result;
	result = write(1, &c, 1);
	return (result);
}
