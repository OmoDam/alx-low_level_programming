#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integeer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
