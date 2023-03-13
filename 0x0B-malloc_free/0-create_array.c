#include "main.h"

/**
 * create_array - creates an array of characters and initializes it
 *
 * @size: size of the array
 *
 * @c: character to initialize with
 *
 * Return: A pointer to a character array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
