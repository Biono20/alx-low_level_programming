#include <stdio.h>

/**
 * _strlem - Return the length of a strings
 * @str: The string of get the length of
 * Return: The lenght of @str
 */

int _strlen(char *s)
{
	int lengi = 0;

	while (*s != '\0')
	{
		lengi++;
		s++;
	}
	return (lengi);
}
