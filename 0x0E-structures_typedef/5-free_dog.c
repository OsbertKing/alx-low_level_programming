#include "dog.h"
#include <stdio.h>

/*
 * free_dog - check code for Holberton school students
 * @d : decimal
 * Return : always 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
