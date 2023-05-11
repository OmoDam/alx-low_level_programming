#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: A given number
 * Return: Factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	{
		return (n * factorial(n - 1));
	}
}
