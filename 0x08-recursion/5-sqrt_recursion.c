#include "main.h"

/**
g* _sqrt_recursioe -Returns the natural root of a number
 * @n: The number that sqrt is to be calculated
 * @i: Iterator
 * Return: The calculated sqrt
 * -1: If n does not have a natural sqrt
 */

int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
