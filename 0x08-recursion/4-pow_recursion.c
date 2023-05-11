#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to pow of y
 * @x: first param
 * @y: second param
 * Return: value of x raised to pow of y
 * -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
}
