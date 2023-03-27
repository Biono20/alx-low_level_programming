#include <stdio.h>

/**
 * _strlem - Return the length of a strings
 * @str: The string of get the length of
 * Return: The lenght of @str
 */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
