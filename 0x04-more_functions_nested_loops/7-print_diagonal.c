#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: length of the line
 *
 * Return: nothing on success
 */
void print_diagonal(int n)
{
	int count = 0, start = 0, end;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			end = count;
			while (start <= end)
			{
				if (start == end)
				{
					_putchar('\\');
					_putchar('$');
				}
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			count++;
		}
	}
}
