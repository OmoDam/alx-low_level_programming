#include <stdlib.h>
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
	unsigned int total_size = (nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
