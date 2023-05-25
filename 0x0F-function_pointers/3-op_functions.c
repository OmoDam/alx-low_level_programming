#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Add 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 * Return: The addition of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of 2 numbers
 * @a: The 1st number
 * @b: The 2nd number.
 * Return: The difference of a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication of 2 numbers
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The division of two numbers.
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The 1st number
 * @b: The 2nd number
 * Return: The remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
