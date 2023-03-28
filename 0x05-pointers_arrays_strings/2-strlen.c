#include <stdio.h>

/**
 * _strlen - Return the length of a string.
 * @str: The string of get the length of
 * Return: The lenght of @str.
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}
