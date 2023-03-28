#include <stdio.h>

/**
 * _strlem - Return the length of a strings
 * @str: The string of get the length of
 * Return: The lenght of @str
 */

int _string_length(char s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
