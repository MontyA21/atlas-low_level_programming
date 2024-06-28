#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees the dogs
 * @d: Pointer to struct
 * Return: Void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
