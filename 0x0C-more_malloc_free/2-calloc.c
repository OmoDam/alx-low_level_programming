#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array using malloc
 * *_memset - fills memory with a constant byte
 * @nmemb: number of elements in the array
 * @size: size
 * total_size: total number of bytes needed for the array
 * Return: pointer to allocated memory
 *         NULL if size is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
