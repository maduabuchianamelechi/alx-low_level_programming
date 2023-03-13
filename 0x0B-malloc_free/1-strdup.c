#include "main.h"

/**
 * _strdup - Gets the address of the duplicate of @str.
 *
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int l = 0;

	if (str == 0)
	{
		return ('\0');
	}
	for (i = 0; str[i]; i++)
	{
		l++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return ('\0');
	}
	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[l] = '\0';
	return (duplicate);
}
