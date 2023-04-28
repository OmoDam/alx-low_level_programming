#include "main.h"

/**
 * main -Entry point
 * print-num - prints numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
}
