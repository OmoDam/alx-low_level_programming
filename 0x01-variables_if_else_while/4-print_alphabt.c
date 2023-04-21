#include <stdio.h>

/**
 *  main - prints the alphabet in lowercase
 *  followed by a new line, except q and e
 *  Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}

	putchar('\n');

	return (0);
}
