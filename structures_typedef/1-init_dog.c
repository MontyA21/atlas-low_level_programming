#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initializes a variable of type 'struct dog'
 * @d: pointer to the initialized variable
 * @name: dog name
 * @age: dog age
 * @owner: owner name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
}
