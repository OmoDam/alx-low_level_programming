#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: size of the new memory block
 * @nw_ptr: points to the newly allocated memeory
 * Return: pointer to the newly allocated memory block
 *         NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nw_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	nw_ptr = malloc(new_size);
	if (!nw_ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nw_ptr[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nw_ptr[i] = old_ptr[i];
	}

	free(ptr);
	return (nw_ptr);
}
