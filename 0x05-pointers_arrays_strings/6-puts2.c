#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with
 * the first character, followed by a new line
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *z = str;
	int o;

	while (*z != '\0')
	{
		z++;
		longi++;
	}
	x = longi - 1;
	for (o = 0 ; o <= x; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
