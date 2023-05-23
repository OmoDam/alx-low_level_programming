#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for the struct dog
 * @d: struct dog to be freed
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
