#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and initializes it
* with a specific char
* @c: the char to be ssigned
* @size: size of the array
* Return: Null if size is zero
* a pointer or null if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
