#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated memory space
 * which contains a copy of the string given as a param
 * @str: The string to be duplicated
 * Return: NULL if str = NULL or insufficient memory
 * pointer to duplicated str on success
 */

char *_strdup(char *str)
{
	char *dup;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];

	return (dup);
}

