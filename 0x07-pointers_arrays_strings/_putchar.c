/**
 * _putchar - Prints the character c to standard output
 *
 * @c: The character to be printed
 *
 * Return: 1 at success and -1 at error
 */

int _putchar(char c)
{
	int result;

	result = write(1, &c, 1);

	return (result);
}
