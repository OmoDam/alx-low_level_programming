#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
