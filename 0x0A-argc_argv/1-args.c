#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always return 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
