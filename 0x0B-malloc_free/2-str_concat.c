#include "main.h"

/**
 * str_concat - Gets the address of the concatenated @s1 and @s2
 *
 * @s1: The first srting
 *
 * @s2: The second string
 *
 * Return: A pointer to the result of concat Or NULL on error
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int index;
	int big_index = 0;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}

	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return ('\0');
	}
	for (index = 0; s1[index]; index++)
	{
		str[big_index++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		str[big_index++] = s2[index];
	}
	return (str);
}
