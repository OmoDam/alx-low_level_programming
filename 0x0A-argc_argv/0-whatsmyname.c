#include <stdio.h>

/**
 * main - It prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
