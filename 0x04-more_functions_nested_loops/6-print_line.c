#include "main.h"

/**
 * print_line - draws a straight line
 * @n: length of the line
 *
 * Return: nothing on success
 */
void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
