#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: always 0
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	putchar(n);
	if (n != 57)
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
