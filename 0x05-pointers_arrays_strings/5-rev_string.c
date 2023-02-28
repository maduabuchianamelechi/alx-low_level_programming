/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int n, i;
	char ch;

	/*find string length without null char*/
	for (n = 0; s[n] != '\0'; n++)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < n / 2; i++)
	{
		ch = s[i];
		s[i] = s[n - 1 - i]; /*-1 because the array starts from 0*/
		s[n - 1 - i] = ch;
	}

}
