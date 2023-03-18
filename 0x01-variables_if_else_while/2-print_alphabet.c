#include <stdio.h>
/**
*main - Entry point
*Discription: 'Print alphabets lowercase'
*Return: always 0
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
